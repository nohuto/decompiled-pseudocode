/*
 * XREFs of IoVerifierInit @ 0x140C26A3C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1405CD450 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140C26984 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
