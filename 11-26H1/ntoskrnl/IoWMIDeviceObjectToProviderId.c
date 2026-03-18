/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x140496270
 * Callers:
 *     PpmAllocWmiEvent @ 0x14060C82C (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140B49CFC (WmipSetTraceNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x1404962B8 (WmipDoFindRegEntryByDevice.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  ULONG v6; // ebx

  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject, v3, v2);
  v6 = 0;
  if ( RegEntryByDevice )
    v6 = *(_DWORD *)(RegEntryByDevice + 56);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  return v6;
}
