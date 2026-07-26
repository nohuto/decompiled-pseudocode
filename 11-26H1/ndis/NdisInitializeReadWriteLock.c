/*
 * XREFs of NdisInitializeReadWriteLock @ 0x1400662D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisInitializeReadWriteLock(PNDIS_RW_LOCK Lock)
{
  memset(Lock, 0, sizeof(struct _NDIS_RW_LOCK));
  KeInitializeSpinLock(&Lock->SpinLock);
  if ( ndisMaxNumberOfProcessors > 0x100 )
    KeInitializeSpinLock((PKSPIN_LOCK)&Lock->16);
}
