/*
 * XREFs of CmSiProcessTupleInitialize @ 0x1406E2E84
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  *(_OWORD *)&CmpFreezeListLock.Teb = 0LL;
  *(_OWORD *)&CmpFreezeListLock.Timer.Header.Lock = 0LL;
  *(_OWORD *)&CmpFreezeListLock.Timer.Header.WaitListHead.Blink = 0LL;
}
