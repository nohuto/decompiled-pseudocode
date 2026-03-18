/*
 * XREFs of Controller_InternalReset @ 0x1400416D0
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x14003D868 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x14004130C (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1400438A0 (Controller_UcxEvtReset.c)
 * Callees:
 *     Register_ControllerStop @ 0x140005EBC (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x140007680 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 *     Interrupter_InterruptEnable @ 0x140008910 (Interrupter_InterruptEnable.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     RootHub_D0Entry @ 0x14002C718 (RootHub_D0Entry.c)
 *     CommonBuffer_FlushWorkItems @ 0x14002CDBC (CommonBuffer_FlushWorkItems.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003380C (McTemplateK0p_EtwWriteTransfer.c)
 *     Interrupter_Initialize @ 0x140035DB4 (Interrupter_Initialize.c)
 *     Command_ControllerResetPostReset @ 0x14003DF04 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003E0C0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003E18C (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x140040E98 (Controller_DisableController.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1400496FC (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

int __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  _QWORD *v16; // rcx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rbx
  int v20; // edx
  unsigned int j; // esi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  _QWORD *v25; // rsi
  int result; // eax
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // [rsp+20h] [rbp-48h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 187, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 816)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 804), 1u);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1260), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1256), 0, 0) )
  {
    ++*(_DWORD *)(a1 + 876);
    ++*(_DWORD *)(a1 + 920);
    *(_BYTE *)(a1 + 872) = 1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 808), 1u);
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 760),
    a3);
  v5 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112));
  v6 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v6);
  v7 = *(_QWORD *)(a1 + 136);
  for ( i = 1; i <= *(_DWORD *)(v7 + 96); ++i )
  {
    v9 = *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v7) + 8LL * i);
    if ( v9 )
    {
      v10 = (__int64 *)(v9 + 184);
      v11 = 31LL;
      do
      {
        if ( *v10 )
          ESM_AddEsmEvent(*v10);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  v12 = (int)Register_ControllerStop(*(_QWORD *)(a1 + 88));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  if ( (int)v12 >= 0 )
  {
    v14 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v14;
    if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v15,
        4,
        189,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v14);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v13,
        4,
        188,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v12);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  v16 = *(_QWORD **)(a1 + 120);
  if ( v16 )
    CommonBuffer_FlushWorkItems(v16);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( (int)v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v17,
        4,
        190,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v12);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v18 = 4107;
LABEL_45:
    Controller_ReportFatalErrorEx(a1, 4u, v18, 0LL, v12, 0LL, 0LL, 0LL);
LABEL_46:
    Command_FailAllCommands(*(_QWORD *)(a1 + 144));
    v25 = (_QWORD *)(a1 + 8);
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BC20)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v27,
                 4,
                 194,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                 v12);
    }
    goto LABEL_51;
  }
  v19 = *(_QWORD *)(a1 + 128);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v19 + 8)) )
  {
    Interrupter_Initialize(v19);
    Interrupter_InterrupterRegisterIntialize(v19);
    for ( j = 0; j < *(_DWORD *)(v19 + 92); ++j )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 8LL * j);
      if ( v22 )
      {
        *(_DWORD *)(v22 + 112) &= ~0x10u;
        if ( (*(_DWORD *)(v22 + 112) & 4) != 0 )
          Interrupter_InterruptEnable(v22);
      }
    }
  }
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v20,
        4,
        191,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v4);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalErrorEx(a1, 4u, 4103, 0LL, v4, 0LL, 0LL, 0LL);
    LODWORD(v12) = v4;
    goto LABEL_46;
  }
  v23 = Controller_Start(a1);
  v12 = v23;
  if ( v23 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v24,
        4,
        192,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v23);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      32LL,
      "During controller reset recovery, controller start timed out",
      0LL,
      0LL);
    v18 = 4104;
    goto LABEL_45;
  }
  LODWORD(v12) = 0;
  result = Command_ControllerResetPostResetSuccess(*(_QWORD *)(a1 + 144));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(a1 + 72),
               4,
               4,
               193,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  v25 = (_QWORD *)(a1 + 8);
LABEL_51:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    LODWORD(v30) = v12;
    result = McTemplateK0pq_EtwWriteTransfer(v28, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v29, *v25, v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 816));
  return result;
}
