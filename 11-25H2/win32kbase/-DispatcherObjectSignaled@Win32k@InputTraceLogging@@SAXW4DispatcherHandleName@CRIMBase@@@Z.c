/*
 * XREFs of ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E5024
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E514C (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void InputTraceLogging::Win32k::DispatcherObjectSignaled()
{
  _BYTE *v0; // rax
  ULONGLONG v1; // r8
  __int64 v2; // rcx
  int v3; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  _BYTE *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 2) != 0 && (qword_14029EE38 & 2) == qword_14029EE38 )
  {
    v0 = (_BYTE *)InputTraceLogging::DispatcherHandleNameToString();
    if ( v0 )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( v0[v2] );
      v3 = v2 + 1;
    }
    else
    {
      v0 = &unk_14025EF20;
      v3 = v1 - 1;
    }
    v11 = 0;
    v9 = v0;
    v10 = v3;
    UserData.Ptr = (ULONGLONG)off_14029EE28;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = v1;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029EE28;
    v6 = &unk_1402805CC;
    UserData.Reserved = v1;
    v8 = v1 - 1;
    v7 = 48;
    EtwWriteTransfer(qword_14029EE40, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
