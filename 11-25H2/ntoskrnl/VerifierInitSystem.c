/*
 * XREFs of VerifierInitSystem @ 0x140C29ED8
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VfPendingInitPhase1 @ 0x140B81AD4 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140B86488 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B8A410 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B8B35C (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     VfIsRuleClassEnabled @ 0x140B97570 (VfIsRuleClassEnabled.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
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
