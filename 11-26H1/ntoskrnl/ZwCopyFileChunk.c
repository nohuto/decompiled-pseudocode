/*
 * XREFs of ZwCopyFileChunk @ 0x1407248D0
 * Callers:
 *     DifZwCopyFileChunkWrapper @ 0x14069E020 (DifZwCopyFileChunkWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCopyFileChunk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
