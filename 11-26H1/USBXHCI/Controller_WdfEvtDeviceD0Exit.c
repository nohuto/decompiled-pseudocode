/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x14002BD60
 * Callers:
 *     <none>
 * Callees:
 *     Controller_D0Exit @ 0x140005DD4 (Controller_D0Exit.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Interrupter_D0ExitStopped @ 0x140006E74 (Interrupter_D0ExitStopped.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x14002CDBC (CommonBuffer_FlushWorkItems.c)
 *     Controller_D0ExitSaveState @ 0x14002D350 (Controller_D0ExitSaveState.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x140031BB4 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x140031C5C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032598 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x140033900 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     Controller_InUseByDebugger @ 0x14003DA8C (Controller_InUseByDebugger.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041F28 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F608 (Etw_ReportControllerHealthWithPortInfo.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140075CE4 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140080F38 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  __int64 v5; // rdi
  int v6; // r15d
  unsigned int PreProcessedSystemPowerAction; // esi
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  const signed __int64 *v11; // rsi
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d

  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v5);
  Controller_LogDiagnosticsOnD0Exit(a1, a2);
  *(_DWORD *)(v5 + 792) = a2;
  if ( *(_QWORD *)(v5 + 824) && a2 == 6 )
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v5 + 760),
      v8);
    v11 = (const signed __int64 *)(v5 + 736);
  }
  else
  {
    if ( *(_QWORD *)(v5 + 120) )
      CommonBuffer_FlushWorkItems();
    RootHub_D0Exit(*(_QWORD *)(v5 + 152), a2, PreProcessedSystemPowerAction);
    Controller_D0Exit((_QWORD *)v5, a2, v12);
    Interrupter_D0ExitStopped(*(_QWORD *)(v5 + 128), a2);
    v11 = (const signed __int64 *)(v5 + 736);
    if ( (*(_QWORD *)(v5 + 736) & 2) != 0
      || *(_BYTE *)(v5 + 796)
      || a2 == 5
      || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v5) == 5
      || (*(_QWORD *)(v5 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), v9, 4, 89, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
    }
    else
    {
      v13 = Controller_D0ExitSaveState(v5);
      v4 = v13;
      if ( v13 < 0 )
      {
        *(_BYTE *)(v5 + 796) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            v14,
            4,
            90,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v13);
        }
        Controller_HwVerifierBreakIfEnabled(v5, 0, 0, 0x400000LL, "Controller save state operation failed", 0LL, 0LL);
      }
      v15 = *(_QWORD *)(v5 + 88);
      LOBYTE(v14) = 1;
      Register_SetClearSSICPortUnused(v15, v14);
      LOBYTE(v16) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v15, v16);
      Controller_ExecuteHSICDisconnectInU3Workaround(v5, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v5);
      if ( (*(_QWORD *)(v5 + 744) & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v5, 0LL);
    }
  }
  if ( _bittest64(v11, 0x2Bu) )
  {
    if ( v6 == 5 )
    {
      LOBYTE(v9) = 1;
      v17 = Register_ControllerReset(*(_QWORD *)(v5 + 88), v9);
      v4 = v17;
      if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v18,
          4,
          91,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v17);
      }
    }
  }
  if ( a2 == 5 && *(_BYTE *)(v5 + 872) )
  {
    Etw_ReportControllerHealthWithPortInfo(v5, 0LL, 0LL, 0LL);
    *(_BYTE *)(v5 + 872) = 0;
  }
  if ( v4 < 0 )
    Etw_ReportFatalError(v10, v5, 0, 4146, v4, 0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 768));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 1232));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 968));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 1112));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v19,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v20,
      *(_QWORD *)(v5 + 8),
      a2,
      v6,
      0);
  return 0LL;
}
