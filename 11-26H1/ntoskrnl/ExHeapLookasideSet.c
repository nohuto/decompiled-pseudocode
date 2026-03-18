/*
 * XREFs of ExHeapLookasideSet @ 0x1406D2988
 * Callers:
 *     ExpPoolHeapCreate @ 0x1408465EC (ExpPoolHeapCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall ExHeapLookasideSet(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 56) = a2;
}
