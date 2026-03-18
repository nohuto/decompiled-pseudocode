/*
 * XREFs of Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140028380 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x14003C9DC (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041F28 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1400734FC (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_GetPreProcessedSystemPowerAction(__int64 a1)
{
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3104))(
         WdfDriverGlobals,
         *(_QWORD *)a1) )
  {
    return *(unsigned int *)(a1 + 820);
  }
  else
  {
    return 7LL;
  }
}
