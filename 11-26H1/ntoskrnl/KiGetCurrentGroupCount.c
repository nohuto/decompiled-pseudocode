/*
 * XREFs of KiGetCurrentGroupCount @ 0x1405EFAD4
 * Callers:
 *     KiUpdateProcessorCount @ 0x140BF3458 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140E66758;
}
