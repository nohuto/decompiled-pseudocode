/*
 * XREFs of RawUnload @ 0x140805930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(*(PVOID *)&NormalizationListLock.WaitBlockFill11[16]);
  ObfDereferenceObject(NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
  return ObfDereferenceObject(NormalizationListLock.WaitBlock[0].WaitListEntry.Flink);
}
