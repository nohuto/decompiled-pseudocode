/*
 * XREFs of VmpLogFaultResolveFailure @ 0x140B5D4CC
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x140822998 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall VmpLogFaultResolveFailure(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5, int a6)
{
  _UNKNOWN **v6; // rax
  void *InitialStack; // rbx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *p_ProcessId; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v6 = &retaddr;
  InitialStack = stru_140F06A28.InitialStack;
  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 64LL);
    if ( (_BYTE)v6 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v24 = 4LL;
      p_ProcessId = &ProcessId;
      v16 = a6;
      v25 = &v16;
      v19 = *a2;
      v27 = &v19;
      v20 = a2[1];
      v29 = &v20;
      v31 = &v17;
      v33 = &v18;
      v21 = a5;
      v35 = &v21;
      v26 = 4LL;
      v28 = 8LL;
      v30 = 8LL;
      v17 = a3;
      v32 = 4LL;
      v18 = a4;
      v34 = 4LL;
      v36 = 8LL;
      LOBYTE(v6) = tlgWriteEx_EtwWriteEx(
                     (__int64)InitialStack,
                     (unsigned __int8 *)&byte_14005407F,
                     v11,
                     0,
                     v13,
                     v14,
                     9u,
                     &v22);
    }
  }
  return (char)v6;
}
