/*
 * XREFs of ACPISetDeviceWorker @ 0x14002AAD4
 * Callers:
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     ACPIFanDeviceControl @ 0x140017F70 (ACPIFanDeviceControl.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPIRootPowerCallBack @ 0x140043150 (ACPIRootPowerCallBack.c)
 *     ACPICMButtonNotify @ 0x14004819C (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1400559D8 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400B4070 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepQueueWorker @ 0x1400CD730 (ACPIPepQueueWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPISetDeviceWorker(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // si
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  *(_DWORD *)(a1 + 160) |= a2;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 168);
  if ( !*v6 )
  {
    v7 = (_QWORD *)qword_14008F6F8;
    if ( *(__int64 **)qword_14008F6F8 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v6 = &ACPIDeviceWorkQueue;
    v6[1] = v7;
    *v7 = v6;
    qword_14008F6F8 = (__int64)v6;
    v5 = ACPIWorkerBusy == 0;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
