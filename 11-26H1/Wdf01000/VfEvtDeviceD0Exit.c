/*
 * XREFs of VfEvtDeviceD0Exit @ 0x1400E35C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008FD44 (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1400900A4 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x14009010C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x140090140 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1400901A8 (VerifyIrqlExit.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0Exit(unsigned __int64 Device, unsigned int TargetState)
{
  unsigned int v4; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(unsigned __int64, _QWORD); // rbp
  _MCGEN_TRACE_CONTEXT *v7; // rcx
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(unsigned __int64, _QWORD))*((_QWORD *)TypedContext + 4);
  if ( v6 )
  {
    activityId = 0LL;
    if ( PerfEvtDeviceD0ExitStart(Device, &activityId) )
    {
      v4 = v6(Device, TargetState);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      {
        v7 = (_MCGEN_TRACE_CONTEXT *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v7 = (_MCGEN_TRACE_CONTEXT *)((char *)v7 - LOWORD(v7->RegistrationHandle));
        McTemplateK0pp_EtwWriteTransfer(
          v7,
          &FX_POWER_D0_EXIT_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(v7->MatchAnyKeyword + 80) + 176LL),
          (const void *)Device);
      }
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v4 = v6(Device, TargetState);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (ULONG_PTR)v6);
    }
  }
  return v4;
}
