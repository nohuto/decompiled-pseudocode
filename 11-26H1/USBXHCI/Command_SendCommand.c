/*
 * XREFs of Command_SendCommand @ 0x14000D4AC
 * Callers:
 *     Endpoint_OnResetEndpointConfigure @ 0x1400048E4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1400054F4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x140005768 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x140005860 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001E158 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14001E588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_SM_ResetEndpoint @ 0x140031344 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x140032D24 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x140032FA0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 *     Command_SendInternalCommandSynchronously @ 0x14003E5A4 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004E990 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004EA38 (UsbDevice_SetResourceAssignment.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_qL @ 0x14003EFA4 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // bp
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 (__fastcall *v12)(__int64, __int64); // rax

  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v4,
        7,
        58,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
    goto LABEL_11;
  }
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql(v6);
      v5 = 1;
    }
  }
  v7 = (_QWORD *)(a1 + 112);
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v8 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(v8 + 16);
    if ( v12 )
    {
      v11 = v12(v8, a2);
      if ( v11 != 4 )
      {
        DynamicLock_Release(*v7);
        if ( v5 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        v10 = v11;
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v10, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*v7);
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_11:
    v10 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v10, 0LL);
  }
  Command_InternalSendCommand(a1, a2);
  result = DynamicLock_Release(*v7);
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
