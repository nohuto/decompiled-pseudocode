/*
 * XREFs of PpDeviceRegistration @ 0x1409B4D7C
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v8 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v8;
}
