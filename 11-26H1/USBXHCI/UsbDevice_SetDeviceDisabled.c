/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x14001DBB4
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x14001C2EC (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14001C358 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x14001C99C (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14001CA10 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v10; // rsi
  bool v11; // cf
  char result; // al
  unsigned int v13; // edi
  __int64 v14; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(a1 + 143);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      12,
      79,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(_BYTE *)(a1 + 143),
      *(_QWORD *)a1);
  }
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 184), a2);
  v6 = (_QWORD *)(a1 + 192);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 143);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v4 + 16), a1);
    *(_QWORD *)(*(_QWORD *)((-(__int64)(*(_BYTE *)(*(_QWORD *)(v4 + 88) + 80LL) != 0) & 0xFFFFFFFFFFFFFFD0uLL)
                          + *(_QWORD *)(v4 + 88)
                          + 72)
              + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, a1, v8);
  }
  v10 = *(_QWORD *)(a1 + 432);
  result = -*(_BYTE *)(a1 + 440);
  v11 = *(_BYTE *)(a1 + 440) != 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_WORD *)(a1 + 142) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  v13 = v11 ? 0 : 0xC0000001;
  if ( *(_QWORD *)(a1 + 448) )
  {
    v14 = 1LL;
    if ( *(int *)(a1 + 456) < 0 )
      v14 = 2LL;
    result = UsbDevice_QueueConfigureEndpointEvent(a1, v14);
  }
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v10,
             v13);
  return result;
}
