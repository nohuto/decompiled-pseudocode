/*
 * XREFs of PopCompressCallback @ 0x140BFFF70
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
