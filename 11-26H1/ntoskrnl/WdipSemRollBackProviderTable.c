/*
 * XREFs of WdipSemRollBackProviderTable @ 0x140826A64
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  __int64 v3; // rbx
  __int64 result; // rax

  for ( i = a1; i < dword_140F06A20; *((_QWORD *)&stru_140F049E8.StackBase + v3) = 0LL )
  {
    v3 = i;
    result = WdipSemFastFree(2LL, *((_QWORD *)&stru_140F049E8.StackBase + i++));
  }
  dword_140F06A20 = a1;
  return result;
}
