/*
 * XREFs of Controller_IsControllerAccessible @ 0x14000B90C
 * Callers:
 *     Register_ControllerStop @ 0x140005EBC (Register_ControllerStop.c)
 *     Interrupter_D0Entry @ 0x140006DDC (Interrupter_D0Entry.c)
 *     DeviceSlot_Initialize @ 0x1400071AC (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x140007328 (Command_Initialize.c)
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x14000B150 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtAddress @ 0x1400253C0 (UsbDevice_UcxEvtAddress.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x140031A88 (Register_WaitForControllerReady.c)
 *     UsbDevice_UcxEvtEnable @ 0x140032FA0 (UsbDevice_UcxEvtEnable.c)
 *     Control_EP_Disable @ 0x140034A10 (Control_EP_Disable.c)
 *     Isoch_EP_Disable @ 0x140035C50 (Isoch_EP_Disable.c)
 *     Bulk_EP_Disable @ 0x14003ACB0 (Bulk_EP_Disable.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_UcxEvtReset @ 0x1400438A0 (Controller_UcxEvtReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004AE90 (RootHub_UcxEvtGetPortErrorCount.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x14004EB10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  int v2; // ecx
  _BYTE *v3; // rax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 16LL);
  v3 = (_BYTE *)(a1 + 797);
  if ( (_BYTE)v2 && !*v3 )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = (unsigned __int8)*v3;
    v5 = v2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xF5u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      v5,
      v6);
  }
  return 0;
}
