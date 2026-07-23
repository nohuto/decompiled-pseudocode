/*
 * XREFs of HalpHpetQueryCounter @ 0x140535BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(*(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock + 240LL);
}
