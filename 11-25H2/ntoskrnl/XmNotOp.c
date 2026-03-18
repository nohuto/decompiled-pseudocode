/*
 * XREFs of XmNotOp @ 0x140572620
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x14046AFAC (XmStoreResult.c)
 */

_WORD *__fastcall XmNotOp(__int64 a1)
{
  char v2; // cl

  v2 = 8 * *(_DWORD *)(a1 + 120) + 7;
  return XmStoreResult(a1, ~*(_DWORD *)(a1 + 104) & (((1 << v2) - 1) | (unsigned int)(1 << v2)));
}
