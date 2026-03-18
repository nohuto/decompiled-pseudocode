/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x14012C734
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x14012C12C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x14012C404 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x140136574 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x140138B04 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x14013F4F0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1401933D0 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  unsigned int v7; // r14d
  int v8; // r15d
  BOOL v9; // ebp

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = a2[2];
  v8 = IsContactSuppressed;
  v9 = 0;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 678LL);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 679LL);
  a2[2] |= a3;
  if ( !v8 && (unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    if ( !*(_DWORD *)(a1 + 1020) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 684LL);
    --*(_DWORD *)(a1 + 1020);
    v9 = 1;
  }
  if ( (a3 & v7) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v9);
  if ( *(_DWORD *)(a1 + 1016) < *(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 696LL);
  return v9;
}
