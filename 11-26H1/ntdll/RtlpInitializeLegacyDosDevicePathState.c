/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x180123BB4
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801149C4 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      dword_1801C7294 = 1;
  }
  else
  {
    dword_1801C7294 = 2;
  }
}
