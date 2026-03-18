/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1401842B0
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x140035E74 (RIMIsInputSuppressed.c)
 *     RIMCmIsContactSuppressed @ 0x1400D976C (RIMCmIsContactSuppressed.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1400EFAAC (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F1384 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1400F2168 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1400F2900 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A14 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1400F2F70 (rimPredictionPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1400FA244 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x140185984 (RIMCmIsContactDeliveringPointerData.c)
 *     Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline @ 0x1401F1828 (Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline.c)
 *     rimPTPPolicyUpdateState @ 0x1401F1EA8 (rimPTPPolicyUpdateState.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1401F2014 (rimPenButtonsPolicyUpdateState.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v12; // esi
  int v13; // edx
  _DWORD *v14; // rcx
  int v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  rimPointerTransitionsPolicyUpdateStateAndApply(a1, (int *)a2, a3);
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 0x400u);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  rimDisplayOffPolicyUpdateStateAndApply(a1, a2);
  rimLidClosedPolicyUpdateStateAndApply(a1, a2);
  rimNullXYPolicyUpdateStateAndApply(a1, (int *)a2, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, (unsigned int *)a2, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, (unsigned int *)a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(a1, a2, a3);
  if ( (unsigned int)Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(a1 + 24) == 7
    && *(_DWORD *)(a1 + 1016) == 1 )
  {
    rimPTPPolicyUpdateState(a1, a2);
  }
  if ( a4 || a5 || (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    v12 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, a2, a7, a8, &v16);
    v12 = v16;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(a2) && (unsigned int)RIMCmIsContactDeliveringPointerData(a2) )
    *(_DWORD *)(a2 + 2444) &= 0xFFFFFFE9;
  v13 = *(_DWORD *)(a2 + 2684);
  v14 = (_DWORD *)(a2 + 2444);
  if ( (v13 & 4) != 0 && (*v14 & 4) == 0 || (v13 & 2) != 0 && (*v14 & 2) == 0 )
  {
    v12 = 1;
    *(_QWORD *)(a2 + 2480) = *(_QWORD *)(a2 + 2720);
    *(_QWORD *)(a2 + 2488) = *(_QWORD *)(a2 + 2728);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v12);
}
