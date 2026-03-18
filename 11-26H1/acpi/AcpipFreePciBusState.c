/*
 * XREFs of AcpipFreePciBusState @ 0x14003F90C
 * Callers:
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpipFreePciBusState(KSPIN_LOCK *a1)
{
  KIRQL v2; // al

  if ( a1 < (KSPIN_LOCK *)gPreAllocPciPool || a1 >= &gPreAllocPciPoolSpinLock )
  {
    ExFreePoolWithTag(a1, 0x46706341u);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    *((_BYTE *)a1 + 136) = 0;
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v2);
  }
}
