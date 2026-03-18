/*
 * XREFs of PopDecompressCallback @ 0x140BFA280
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140BFB3E8 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
