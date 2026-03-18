/*
 * XREFs of Controller_InUseByDebugger @ 0x14003DA8C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_LPEEnterExitCallback @ 0x140041DC0 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140044750 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
