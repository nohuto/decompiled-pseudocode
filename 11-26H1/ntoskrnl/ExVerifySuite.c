/*
 * XREFs of ExVerifySuite @ 0x140529E40
 * Callers:
 *     MmWriteTriageInformation @ 0x1406FB990 (MmWriteTriageInformation.c)
 *     PsLocateSystemDlls @ 0x1407F3B98 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140CEACDC (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v2; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v2 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v2, SuiteType);
}
