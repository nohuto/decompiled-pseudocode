/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140028380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140022A88 (WPP_RECORDER_SF_qLLL.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1400284C0 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x14002879C (ControllerPreInterruptsDisableAcpiCallout.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1400321FC (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032598 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38 (Controller_GetPreProcessedSystemPowerAction.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rdx
  int v7; // r8d
  int PreProcessedSystemPowerAction; // r15d
  int v9; // ecx
  int v10; // r8d
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 868),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 868));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = v5;
    v13 = PreProcessedSystemPowerAction;
    LODWORD(v12) = a2;
    WPP_RECORDER_SF_qLLL(
      *(_QWORD *)(v4 + 72),
      v6,
      4u,
      0x55u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a1,
      v12,
      v13,
      v14);
  }
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 128));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v9,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_COMPLETE,
      v10,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      0);
  return 0LL;
}
