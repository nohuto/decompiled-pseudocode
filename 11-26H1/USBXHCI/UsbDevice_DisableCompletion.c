/*
 * XREFs of UsbDevice_DisableCompletion @ 0x14001CA4C
 * Callers:
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x14001C780 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_DisableCompletionReturnFailure @ 0x14004E2F0 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x14004E5D0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14001C358 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x14001C99C (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14001CA10 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dqL @ 0x1400247EC (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

_UNKNOWN **__fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char v6; // r15
  char v7; // cl
  __int64 v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  _QWORD *XilCoreDeviceSlotData; // rax
  _UNKNOWN **result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rdx
  int v19; // edx
  int v20; // edx

  v3 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(v3 + 143);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v19,
        12,
        76,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_BYTE *)(v3 + 143),
        *(_QWORD *)v3);
    }
    result = (_UNKNOWN **)UsbDevice_SetDeviceDisabled(v3);
    goto LABEL_24;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 && v7 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v20, a3, 78);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x100000,
      (__int64)"Disable Slot Command failed",
      a1 + 24,
      0LL);
    result = (_UNKNOWN **)Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0, 0LL, 0LL, 0LL);
LABEL_24:
    v6 = 0;
    v14 = 3221225473LL;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v17,
      12,
      77,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(_QWORD *)(v3 + 184), a2);
  }
  v9 = (_QWORD *)(v3 + 192);
  v10 = 30LL;
  do
  {
    if ( *v9 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v9, a2);
      *v9 = 0LL;
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = *(unsigned __int8 *)(v3 + 143);
  if ( *(_BYTE *)(v8 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v8 + 16), v3);
    result = *(_UNKNOWN ***)((-(__int64)(*(_BYTE *)(*(_QWORD *)(v8 + 88) + 80LL) != 0) & 0xFFFFFFFFFFFFFFD0uLL)
                           + *(_QWORD *)(v8 + 88)
                           + 72);
    result[v11] = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v8 + 88));
    result = XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, v11);
  }
  *(_WORD *)(v3 + 142) = 0;
  v14 = 0LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 464), 0, 0x60uLL);
    v15 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 504) = UsbDevice_EnableCompletion;
    v16 = *(_DWORD *)(v3 + 500) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 512) = v3;
    *(_QWORD *)(v3 + 536) = 0LL;
    *(_DWORD *)(v3 + 500) = v16 | 0x2400;
    *(_QWORD *)(v3 + 544) = 0LL;
    *(_QWORD *)(v3 + 552) = 0LL;
    return (_UNKNOWN **)Command_SendCommand(*(_QWORD *)(v15 + 144), v3 + 464);
  }
LABEL_16:
  if ( a3 == 1 )
    v14 = 3221225473LL;
  if ( v6 )
  {
    v18 = *(_QWORD *)(v3 + 432);
    *(_QWORD *)(v3 + 432) = 0LL;
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                          WdfDriverGlobals,
                          v18,
                          v14);
  }
  return result;
}
