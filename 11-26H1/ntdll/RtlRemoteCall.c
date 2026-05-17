/*
 * XREFs of RtlRemoteCall @ 0x180148280
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     NtWriteVirtualMemory @ 0x18015F680 (NtWriteVirtualMemory.c)
 *     ZwResumeThread @ 0x18015F980 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x180160E90 (ZwGetContextThread.c)
 *     NtSetContextThread @ 0x180162290 (NtSetContextThread.c)
 *     NtSuspendThread @ 0x180162930 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlRemoteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *Src, char a6, char a7)
{
  __int64 v7; // rsi
  __int64 result; // rax
  int ContextThread; // r14d
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // r15d
  __int64 *v16; // rcx
  unsigned int v17; // esi
  _BYTE v18[48]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+100h] [rbp+0h] BYREF
  char v23; // [rsp+108h] [rbp+8h] BYREF
  __int64 v24; // [rsp+128h] [rbp+28h]

  v7 = a4;
  if ( LdrControlFlowGuardEnforced() )
    return 3221225474LL;
  if ( (unsigned int)v7 > 4 )
    return 3221225485LL;
  if ( a7 || (result = NtSuspendThread(a2, 0LL), (int)result >= 0) )
  {
    v19 = 1048587;
    ContextThread = ZwGetContextThread(a2, v18);
    if ( ContextThread < 0 )
    {
      if ( !a7 )
        ZwResumeThread(a2, 0LL);
      return (unsigned int)ContextThread;
    }
    v13 = v20;
    if ( a7 )
      v13 = 257LL;
    v14 = v21 - 1232;
    v20 = v13;
    v15 = NtWriteVirtualMemory(a1, v21 - 1232, v18, 1232LL, 0LL);
    if ( v15 < 0 )
    {
      if ( !a7 )
        ZwResumeThread(a2, 0LL);
      return (unsigned int)v15;
    }
    v21 = v14;
    if ( a6 )
    {
      v22 = v14;
      if ( (_DWORD)v7 )
      {
        v16 = (__int64 *)&v23;
LABEL_22:
        memmove(v16, Src, 8 * v7);
      }
    }
    else if ( (_DWORD)v7 )
    {
      v16 = &v22;
      goto LABEL_22;
    }
    v24 = a3;
    v17 = NtSetContextThread(a2, v18);
    if ( !a7 )
      ZwResumeThread(a2, 0LL);
    return v17;
  }
  return result;
}
