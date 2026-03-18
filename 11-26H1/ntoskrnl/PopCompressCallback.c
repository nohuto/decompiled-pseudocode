/*
 * XREFs of PopCompressCallback @ 0x140BF9F70
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
