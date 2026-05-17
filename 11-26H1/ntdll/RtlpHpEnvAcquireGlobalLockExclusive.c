/*
 * XREFs of RtlpHpEnvAcquireGlobalLockExclusive @ 0x180111428
 * Callers:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x1800744A4 (RtlpEnsureSegHeapLockedForWalk.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwFlushProcessWriteBuffers @ 0x180160D90 (ZwFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvAcquireGlobalLockExclusive(void *a1)
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
    NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)115, ProcessInformation, 0x10u, 0LL);
    if ( !ProcessInformation[0] )
      break;
    RtlBackoff((unsigned int *)&v4);
  }
  return ZwFlushProcessWriteBuffers();
}
