/*
 * XREFs of IopAllocateGenericTableEntry @ 0x1407941A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 IopAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
