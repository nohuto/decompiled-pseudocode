/*
 * XREFs of RtlpHpEnvAcquireGlobalLockExclusive @ 0x180110FA8
 * Callers:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x180094A94 (RtlpEnsureSegHeapLockedForWalk.c)
 * Callees:
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     ZwFlushProcessWriteBuffers @ 0x180160C90 (ZwFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHpEnvAcquireGlobalLockExclusive(void *a1)
{
  signed __int32 i; // eax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  _DWORD ProcessInformation[2]; // [rsp+38h] [rbp-20h] BYREF
  void *v6; // [rsp+40h] [rbp-18h]

  _m_prefetchw(a1);
  for ( i = _InterlockedOr((volatile signed __int32 *)a1, 0x10u); ; i = _InterlockedOr(
                                                                          (volatile signed __int32 *)a1,
                                                                          0x10u) )
  {
    LODWORD(v4) = i;
    if ( (i & 0x10) == 0 )
      break;
    RtlpWaitOnAddress((unsigned __int64)a1, &v4, 4LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
    _m_prefetchw(a1);
  }
  ZwFlushProcessWriteBuffers();
  LODWORD(v4) = 0;
  while ( 1 )
  {
    ProcessInformation[0] = 0;
    ProcessInformation[1] = 592;
    v6 = a1;
    NtQueryInformationProcess(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      ProcessFindFirstThreadByTebValue,
      ProcessInformation,
      0x10u,
      0LL);
    if ( !ProcessInformation[0] )
      break;
    RtlBackoff((unsigned int *)&v4);
  }
  return ZwFlushProcessWriteBuffers();
}
