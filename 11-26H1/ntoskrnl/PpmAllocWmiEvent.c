/*
 * XREFs of PpmAllocWmiEvent @ 0x14060F98C
 * Callers:
 *     PpmFireWmiEvent @ 0x14060FA28 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14060FAB0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x14048FDC0 (IoWMIDeviceObjectToProviderId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmAllocWmiEvent(PDEVICE_OBJECT DeviceObject, __int128 *a2, int a3)
{
  int v3; // esi
  __int64 Pool2; // rbx
  __int128 v8; // xmm0

  v3 = a3 + 64;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)Pool2 = v3;
    *(_DWORD *)(Pool2 + 4) = IoWMIDeviceObjectToProviderId(DeviceObject);
    v8 = *a2;
    *(_DWORD *)(Pool2 + 44) = 138;
    *(_DWORD *)(Pool2 + 56) = 64;
    *(_OWORD *)(Pool2 + 24) = v8;
    *(_DWORD *)(Pool2 + 60) = a3;
  }
  return Pool2;
}
