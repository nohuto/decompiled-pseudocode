/*
 * XREFs of PopDecompressCallback @ 0x140C00280
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
