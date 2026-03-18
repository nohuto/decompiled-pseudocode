/*
 * XREFs of HUBMISC_WaitForSignal @ 0x14003436C
 * Callers:
 *     HUBHTX_GetPortStatusForBootDevice @ 0x140004DF4 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x14000D210 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x14000D4E0 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x14000D960 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1400155A0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1400159E0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015C40 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceDisableWakeAtBus @ 0x1400160B0 (HUBPDO_EvtDeviceDisableWakeAtBus.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017F18 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x140018270 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x14007C540 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1400836F0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x140083A90 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_dqqs @ 0x140034B7C (WPP_RECORDER_SF_dqqs.c)
 *     WPP_RECORDER_SF_qsqd @ 0x140034D20 (WPP_RECORDER_SF_qsqd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall HUBMISC_WaitForSignal(PVOID Object, const char *a2, const void *a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  NTSTATUS result; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int Timeout; // [rsp+20h] [rbp-48h]
  int Timeouta; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v17.QuadPart = -600000000LL;
  for ( result = KeWaitForSingleObject(Object, Executive, 0, 0, &v17);
        result == 258;
        result = KeWaitForSingleObject(Object, Executive, 0, 0, &v17) )
  {
    DbgPrint(
      "\nUSBHUB3 Watchdog: Thread 0x%p has waited %d minutes for %s to complete for WDF object 0x%p\n",
      KeGetCurrentThread(),
      ++v6,
      a2,
      a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsqd(
        *(_QWORD *)(v7 + 64),
        v12,
        v13,
        v14,
        Timeouta,
        (char)KeGetCurrentThread(),
        (__int64)a2,
        (char)a3,
        v6);
  }
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_dqqs(
             *(_QWORD *)(v7 + 64),
             v9,
             v10,
             v11,
             Timeout,
             result,
             (char)KeGetCurrentThread(),
             (char)a3,
             (__int64)a2);
  return result;
}
