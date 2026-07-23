/*
 * XREFs of ExHeapLookasideSet @ 0x1406D69B8
 * Callers:
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall ExHeapLookasideSet(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 56) = a2;
}
