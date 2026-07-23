/*
 * XREFs of VfInitVerifierComponents @ 0x140C27ED0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfKeCheckForChanges @ 0x140C3A1BC (VfKeCheckForChanges.c)
 *     ViSettingsIoCheckForChanges @ 0x140C3F2B0 (ViSettingsIoCheckForChanges.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    VfKeCheckForChanges();
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
    result = ViSettingsIoCheckForChanges(a1);
  ViVerifierEnabled = 1;
  return result;
}
