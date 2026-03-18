/*
 * XREFs of WdipSemMergeEvents @ 0x140792C7C
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x140791790 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140791854 (WdipSemAddEndEventToScenario.c)
 *     WdipSemMergeScenarios @ 0x140792CB0 (WdipSemMergeScenarios.c)
 * Callees:
 *     <none>
 */

void __fastcall WdipSemMergeEvents(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r8

  if ( a1 && a2 )
  {
    v2 = *(_BYTE *)(a1 + 18);
    if ( v2 <= *(_BYTE *)(a2 + 18) )
      v2 = *(_BYTE *)(a2 + 18);
    *(_BYTE *)(a1 + 18) = v2;
    *(_QWORD *)(a1 + 24) |= *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 36) |= *(_DWORD *)(a2 + 36);
  }
}
