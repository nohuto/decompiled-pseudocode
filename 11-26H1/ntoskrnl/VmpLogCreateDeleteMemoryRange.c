/*
 * XREFs of VmpLogCreateDeleteMemoryRange @ 0x140824504
 * Callers:
 *     VmCreateMemoryRange @ 0x140821FF0 (VmCreateMemoryRange.c)
 *     VmDeleteMemoryRange @ 0x140B0A210 (VmDeleteMemoryRange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall VmpLogCreateDeleteMemoryRange(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  _UNKNOWN **v8; // rax
  void *InitialStack; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  int v15; // [rsp+28h] [rbp-E0h]
  int v16; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *p_ProcessId; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  unsigned int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v8 = &retaddr;
  InitialStack = stru_140F06A28.InitialStack;
  if ( a2 )
  {
    if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
    {
      LOBYTE(v8) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL);
      if ( (_BYTE)v8 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v26 = 4LL;
        v19 = a3;
        p_ProcessId = &ProcessId;
        v27 = &v19;
        v29 = &v20;
        v21 = a5;
        v31 = &v21;
        v22 = a7;
        v33 = &v22;
        v18 = a8;
        v35 = (__int64 *)&v18;
        v28 = 8LL;
        v20 = a4;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 4LL;
        LOBYTE(v8) = tlgWriteEx_EtwWriteEx(
                       (__int64)InitialStack,
                       (unsigned __int8 *)byte_140054219,
                       v12,
                       0,
                       v15,
                       v16,
                       8u,
                       v24);
      }
    }
  }
  else if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL);
    if ( (_BYTE)v8 )
    {
      v18 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v26 = 4LL;
      p_ProcessId = &v18;
      v27 = &v22;
      v29 = &v21;
      v20 = a5;
      v31 = &v20;
      v19 = a6;
      v33 = &v19;
      v23 = a7;
      v35 = &v23;
      ProcessId = a8;
      v37 = &ProcessId;
      v22 = a3;
      v28 = 8LL;
      v21 = a4;
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 4LL;
      LOBYTE(v8) = tlgWriteEx_EtwWriteEx(
                     (__int64)InitialStack,
                     (unsigned __int8 *)&byte_14005444D,
                     v13,
                     0,
                     v15,
                     v16,
                     9u,
                     v24);
    }
  }
  return (char)v8;
}
