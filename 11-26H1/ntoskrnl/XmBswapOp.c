/*
 * XREFs of XmBswapOp @ 0x1405AE180
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A8E3C (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
