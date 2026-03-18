/*
 * XREFs of ExVerifySuite @ 0x1405277D0
 * Callers:
 *     MmWriteTriageInformation @ 0x1406F6D20 (MmWriteTriageInformation.c)
 *     PsLocateSystemDlls @ 0x1407EE038 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140CE493C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v2; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v2 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v2, SuiteType);
}
