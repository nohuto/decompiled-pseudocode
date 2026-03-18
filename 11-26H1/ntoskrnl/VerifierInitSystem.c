/*
 * XREFs of VerifierInitSystem @ 0x140CDE894
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     VfPendingInitPhase1 @ 0x140C2FF28 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140C346BC (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140C385FC (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140C3920C (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     VfIsRuleClassEnabled @ 0x140C46310 (VfIsRuleClassEnabled.c)
 *     ViInitSystemPhase0 @ 0x140CDEDA4 (ViInitSystemPhase0.c)
 */

char VerifierInitSystem()
{
  char result; // al

  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  result = VfIsRuleClassEnabled(2u);
  if ( result )
    result = VfFaultsInitPhase1();
  if ( ViImageExecutionOptions == 1 )
  {
    result = MmWriteableSharedUserData;
    _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), 1u);
  }
  return result;
}
