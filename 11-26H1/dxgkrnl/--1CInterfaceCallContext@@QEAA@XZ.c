/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006B414 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1400861A0 (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14008697C (DpiLiveMigrationWaitForFence.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1400928A0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x140092950 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x140092A00 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x140092AA0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x140092B30 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x140092BD0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x140092C90 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x140092D90 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x140092E40 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x140092F00 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x140092FE0 (-DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x140093090 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x140093120 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x14023A418 (DpiMitigatedRangeUpdate.c)
 *     DpiFlexIovMitigationUpdate @ 0x1402496D4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x140249CA8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140249E40 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x14024A138 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x14024FC80 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x14024FE20 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x14024FF20 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x140250020 (DpiIovGetVirtualizationFlags.c)
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkReleaseAdapterStopResetSync @ 0x14019243C (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkReleaseAdapterReference @ 0x1401AA608 (DxgkReleaseAdapterReference.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  PVOID *v1; // rdi
  __int64 v3; // rdx

  v1 = (PVOID *)((char *)this + 8);
  if ( *((_BYTE *)this + 37) )
  {
    *((_BYTE *)*v1 + 5596) = 0;
    ExReleasePushLockExclusiveEx((char *)*v1 + 5552, 0LL);
    LOBYTE(v3) = *((_BYTE *)this + 38);
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, v3);
  }
  if ( *((_BYTE *)this + 39) )
  {
    *((_BYTE *)*v1 + 5596) = 0;
    DxgkReleaseAdapterStopResetSync(*((_QWORD *)*v1 + 504), 0LL);
  }
  if ( *((_BYTE *)this + 40) )
  {
    if ( *((_BYTE *)*v1 + 484) )
      DpiEnableD3Requests(*((_QWORD *)*v1 + 3));
    ExReleaseResourceLite(*((PERESOURCE *)*v1 + 21));
    KeLeaveCriticalRegion();
    v1 = (PVOID *)((char *)this + 8);
  }
  if ( *((_BYTE *)this + 41) )
    DxgkReleaseAdapterReference(*((_QWORD *)this + 2));
  if ( *((_BYTE *)this + 42) )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)*v1 + 3440));
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 36) )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*v1 + 2, *v1, 0x20u);
}
