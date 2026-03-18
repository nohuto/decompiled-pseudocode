/*
 * XREFs of WdipSemRollBackProviderTable @ 0x140820854
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140ADB450 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  __int64 v3; // rbx
  __int64 result; // rax

  for ( i = a1; i < dword_140F060A0; *((_QWORD *)&stru_140F03F40.WaitBlock[0].Object + v3) = 0LL )
  {
    v3 = i;
    result = WdipSemFastFree(2LL, *((_QWORD *)&stru_140F03F40.WaitBlock[0].Object + i++));
  }
  dword_140F060A0 = a1;
  return result;
}
