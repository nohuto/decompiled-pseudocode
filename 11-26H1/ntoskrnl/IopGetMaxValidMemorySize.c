/*
 * XREFs of IopGetMaxValidMemorySize @ 0x1405CC08C
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1405CB11C (IopAddRunTimeTriageDataBlocks.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     IopCalculateStackInformation @ 0x1405D7BEC (IopCalculateStackInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405D8690 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidMemorySize(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  v2 = 4096 - (a1 & 0xFFF);
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !MmIsAddressValidEx(v4) )
      break;
    v3 += v2;
    v4 += 4096LL;
    if ( !v4 )
      break;
    v2 = 4096;
  }
  while ( v3 < a2 );
  if ( v3 >= a2 )
    return a2;
  return v3;
}
