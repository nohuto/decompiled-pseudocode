/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x180123924
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801141C0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      dword_1801C6294 = 1;
  }
  else
  {
    dword_1801C6294 = 2;
  }
}
