/*
 * XREFs of XmBswapOp @ 0x140573DA0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x14046AFAC (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
