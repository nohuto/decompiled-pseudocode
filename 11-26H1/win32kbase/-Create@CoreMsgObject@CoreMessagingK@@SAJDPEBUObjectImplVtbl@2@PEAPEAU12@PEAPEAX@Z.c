/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1400D94D0
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1400D8568 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(char a1, __int64 (**a2)(void), PVOID *a3, void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  __int64 v10; // r9
  NTSTATUS result; // eax
  __int64 v12; // rcx
  int CurrentWin32kSessionId; // eax
  _DWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  *a4 = 0LL;
  v5 = *a2;
  v14[1] = 0;
  v18 = 0;
  Object = 0LL;
  *a3 = 0LL;
  v14[0] = 48;
  v15 = 0LL;
  v16 = 0LL;
  v9 = v5() + 8;
  v17 = a1 == 0 ? 0x200 : 0;
  LOBYTE(v10) = a1;
  v19 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v14, v10, 0LL, v9, 0, 0, &Object);
  if ( result >= 0 )
  {
    memset(Object, 0, v9);
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v12);
    *(_DWORD *)Object = CurrentWin32kSessionId;
    *((_QWORD *)Object + 1) = a2;
    result = ObInsertObject(Object, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = Object;
      return 0;
    }
  }
  return result;
}
