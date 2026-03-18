/*
 * XREFs of EmonSaveProfilingContext @ 0x140BED6D0
 * Callers:
 *     <none>
 * Callees:
 *     EmonSaveProfilingContextInternal @ 0x140596834 (EmonSaveProfilingContextInternal.c)
 */

__int64 EmonSaveProfilingContext()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  EmonSaveProfilingContextInternal(0, Number);
  return EmonSaveProfilingContextInternal(1, Number);
}
