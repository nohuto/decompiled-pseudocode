/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1401AF62C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x14012C12C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x14012C404 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     RIMIsPointerUpTransition @ 0x14012C89C (RIMIsPointerUpTransition.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x140136574 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x140137548 (rimPredictionPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x140137648 (rimPenButtonsPolicyUpdateState.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x140138B04 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x14013F4F0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     RIMIsPointerDepartureTransition @ 0x140141980 (RIMIsPointerDepartureTransition.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimPTPPolicyUpdateState @ 0x1401AFAD0 (rimPTPPolicyUpdateState.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // rcx
  int v13; // esi
  char v14; // dl
  char v15; // cl
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0;
  rimPointerTransitionsPolicyUpdateStateAndApply(a1, (int *)a2, a3);
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 0x400u);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  rimDisplayOffPolicyUpdateStateAndApply(a1, a2);
  rimLidClosedPolicyUpdateStateAndApply(a1, (unsigned int *)a2);
  rimNullXYPolicyUpdateStateAndApply(a1, (int *)a2, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, (unsigned int *)a2, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, (unsigned int *)a2);
  if ( (unsigned int)RIMIsPenPointerDevice(a1) )
    rimPenButtonsPolicyUpdateState(v12, (_DWORD *)a2, a3);
  if ( *(_DWORD *)(a1 + 24) == 7 && *(_DWORD *)(a1 + 1016) == 1 )
    rimPTPPolicyUpdateState(a1, a2);
  if ( a4 || a5 || (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    v13 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, a2, a7, a8, &v17);
    v13 = v17;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(a2) && (unsigned int)RIMCmIsContactDeliveringPointerData(a2) )
    *(_DWORD *)(a2 + 2444) &= 0xFFFFFFE9;
  if ( RIMIsPointerUpTransition(*(_DWORD *)(a2 + 2684), *(_DWORD *)(a2 + 2444))
    || RIMIsPointerDepartureTransition(v15, v14) )
  {
    v13 = 1;
    *(_QWORD *)(a2 + 2480) = *(_QWORD *)(a2 + 2720);
    *(_QWORD *)(a2 + 2488) = *(_QWORD *)(a2 + 2728);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v13);
}
