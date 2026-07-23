/*
 * XREFs of VerifierInitSystem @ 0x140CE4C2C
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     VfPendingInitPhase1 @ 0x140C35F38 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140C3A6CC (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140C3E60C (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140C3F21C (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     VfIsRuleClassEnabled @ 0x140C4C320 (VfIsRuleClassEnabled.c)
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
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
