/*
 * XREFs of WdipSemRollBackProviderTable @ 0x140792D40
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406EDCC4 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140F01500; ++i )
  {
    result = WdipSemFastFree(2, *((_SLIST_ENTRY **)&WdipSemProviderTable + i));
    *((_QWORD *)&WdipSemProviderTable + i) = 0LL;
  }
  dword_140F01500 = a1;
  return result;
}
