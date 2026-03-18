/*
 * XREFs of RawUnload @ 0x1407FFF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(NormalizationListLock.Timer.TimerListEntry.Blink);
  ObfDereferenceObject(*(PVOID *)&NormalizationListLock.Timer.Processor);
  return ObfDereferenceObject(NormalizationListLock.Timer.Dpc);
}
