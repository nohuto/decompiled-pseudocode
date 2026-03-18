/*
 * XREFs of PnpBusTypeGuidGet @ 0x140B0DF0C
 * Callers:
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
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
