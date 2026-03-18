/*
 * XREFs of Controller_LogDiagnosticsOnD0Entry @ 0x14003C9DC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140022A88 (WPP_RECORDER_SF_qLLL.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38 (Controller_GetPreProcessedSystemPowerAction.c)
 *     McTemplateK0pqqhq_EtwWriteTransfer @ 0x1400450D8 (McTemplateK0pqqhq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall Controller_LogDiagnosticsOnD0Entry(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int PreProcessedSystemPowerAction; // eax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // ebp
  _UNKNOWN **result; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v4);
  v9 = PreProcessedSystemPowerAction;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqhq_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 868),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START_V1,
      v8,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 868),
      PreProcessedSystemPowerAction);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v9;
    LODWORD(v13) = a2;
    result = (_UNKNOWN **)WPP_RECORDER_SF_qLLL(
                            *(_QWORD *)(v4 + 72),
                            v7,
                            4u,
                            0x3Fu,
                            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                            a1,
                            v13,
                            v14,
                            v5);
  }
  v11 = *(_DWORD *)(v4 + 820);
  v12 = 0LL;
  if ( v5 )
  {
    if ( v11 == 1 || v11 == 2 )
      return result;
  }
  else if ( v11 == 7 || !v11 )
  {
    return result;
  }
  if ( *(_DWORD *)(v4 + 644) == 1 )
    v12 = *(unsigned __int16 *)(v4 + 652) | (*(unsigned __int16 *)(v4 + 648) << 16);
  return (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredArgsMsgKM(
                        "USBXHCI.SYS",
                        v12,
                        v11 | (unsigned int)(v5 << 16),
                        "D0 Entry - WDF and Pre Processed System Power Action are different");
}
