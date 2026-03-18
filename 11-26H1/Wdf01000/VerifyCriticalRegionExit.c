/*
 * XREFs of VerifyCriticalRegionExit @ 0x140090140
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1400E33F0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400E3520 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1400E35C0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1400E36F0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1400E3790 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1400E38C0 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1400E3950 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1400E39E0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1400E3A80 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1400E3BB0 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1400E3C40 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1400E3CD0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1400E3D60 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1400E3DF0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1400E3E80 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1400E3F10 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1400E3FC0 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1400E4070 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1400E4100 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E42C0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E44A0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E4680 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1400E4850 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1400E48E0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1400E49D0 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyCriticalRegionExit(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int8 OldCritRegion,
        ULONG_PTR Pfn)
{
  if ( KeGetCurrentIrql() <= 1u && OldCritRegion != KeAreApcsDisabled() )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_VERIFIER_CRITICAL_REGION_MISMATCH, Pfn, 0LL);
}
