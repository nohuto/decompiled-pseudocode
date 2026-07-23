/*
 * XREFs of PnpBusTypeGuidGet @ 0x140B0F65C
 * Callers:
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PnpBusTypeGuidGet(unsigned __int16 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = a1;
  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  if ( v2 >= PnpBusTypeGuidCount )
  {
    v5 = -1073741772;
  }
  else
  {
    v4 = 2LL * v2;
    v5 = 0;
    *a2 = *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v4);
  }
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return v5;
}
