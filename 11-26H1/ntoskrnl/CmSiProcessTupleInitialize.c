/*
 * XREFs of CmSiProcessTupleInitialize @ 0x1406E7B30
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  *(_OWORD *)&CmpFreezeListLock.ThreadLock = 0LL;
  *(_OWORD *)&CmpFreezeListLock.CurrentRunTime = 0LL;
  *(_OWORD *)&CmpFreezeListLock.StateSaveArea = 0LL;
}
