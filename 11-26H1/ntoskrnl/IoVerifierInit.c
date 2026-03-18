/*
 * XREFs of IoVerifierInit @ 0x140C20A2C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140C20974 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
