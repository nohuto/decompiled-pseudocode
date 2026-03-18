/*
 * XREFs of HvlpSetPowerProperty @ 0x1403E672C
 * Callers:
 *     HvlRegisterLogicalProcessorFrequency @ 0x1403E66D0 (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlConfigureIdleStates @ 0x1405BEF04 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1405BF554 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetLogicalProcessorCppcRequest @ 0x1405BF640 (HvlSetLogicalProcessorCppcRequest.c)
 *     HvlSetPlatformIdleState @ 0x1405BF6A0 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1405BF950 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 */

__int64 __fastcall HvlpSetPowerProperty(__int128 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  do
  {
    v2 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 536LL);
    v3 = 4LL;
    v4 = a1;
    do
    {
      v5 = *v4;
      v4 += 8;
      *(_OWORD *)v2 = v5;
      v2 += 16;
      *((_OWORD *)v2 - 7) = *(v4 - 7);
      *((_OWORD *)v2 - 6) = *(v4 - 6);
      *((_OWORD *)v2 - 5) = *(v4 - 5);
      *((_OWORD *)v2 - 4) = *(v4 - 4);
      *((_OWORD *)v2 - 3) = *(v4 - 3);
      *((_OWORD *)v2 - 2) = *(v4 - 2);
      *((_OWORD *)v2 - 1) = *(v4 - 1);
      --v3;
    }
    while ( v3 );
    v6 = v14;
    *(_OWORD *)v2 = *v4;
    v2[2] = *((_QWORD *)v4 + 2);
    v7 = HvcallInitiateHypercall(156LL, v6);
    HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v7) )
      return HvlpHvToNtStatus(v7);
  }
  while ( (int)HvlpHandleInsufficientMemory(v7) >= 0 );
  return 3221225626LL;
}
