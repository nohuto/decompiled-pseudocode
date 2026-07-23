/*
 * XREFs of CmpInitializeKcbStack @ 0x140A5C160
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeKcbStack(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
}
