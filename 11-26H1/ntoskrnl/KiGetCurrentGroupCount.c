/*
 * XREFs of KiGetCurrentGroupCount @ 0x1405F2444
 * Callers:
 *     KiUpdateProcessorCount @ 0x140BF9458 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140E66930;
}
