/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B8B35C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140C29ED8 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140B8B390 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 && (VfRuleClasses & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
