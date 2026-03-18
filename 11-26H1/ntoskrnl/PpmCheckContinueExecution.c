/*
 * XREFs of PpmCheckContinueExecution @ 0x1402533F8
 * Callers:
 *     PpmCheckPhaseComplete @ 0x140253278 (PpmCheckPhaseComplete.c)
 *     PpmPerfAction @ 0x1402532A0 (PpmPerfAction.c)
 * Callees:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140254100 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     PoCopyDeepIdleMask @ 0x1403EDFE0 (PoCopyDeepIdleMask.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140490A30 (KeFindFirstSetRightAffinityEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 PpmCheckContinueExecution()
{
  __int64 Number; // rdx
  unsigned int v1; // ecx
  __int64 v2; // r8
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v7[264]; // [rsp+38h] [rbp-120h] BYREF

  memset_0(v7, 0, 0x100uLL);
  KeQuerySystemAllowedCpuSetAffinity();
  Number = KeGetCurrentPrcb()->Number;
  v1 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * Number);
  v2 = v1 >> 6;
  if ( (unsigned int)v2 >= PpmCachedSystemAllowedCpuSet.Count
    || ((PpmCachedSystemAllowedCpuSet.Bitmap[v2] >> v1) & 1) == 0 )
  {
    v6 = 2097153LL;
    memset_0(v7, 0, 0x100uLL);
    PoCopyDeepIdleMask(&v6);
    v4 = RtlSubtractAffinityEx(&PpmCachedSystemAllowedCpuSet, &v6, &v6);
    v5 = &v6;
    if ( !v4 )
      v5 = (__int64 *)&PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v5);
  }
  if ( !PopSleepstudySessionLock.RelativeTimerBias )
    *(_WORD *)&PopSleepstudySessionLock.ApcStateFill[42] = Number + 2048;
  return KiInsertQueueDpc((ULONG_PTR)&PopSleepstudySessionLock.ApcStateFill[40], 0);
}
