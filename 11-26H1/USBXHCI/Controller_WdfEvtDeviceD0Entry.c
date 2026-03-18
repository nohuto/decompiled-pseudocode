/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x140037790
 * Callers:
 *     <none>
 * Callees:
 *     Register_ControllerStop @ 0x140005EBC (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x1400060A4 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Interrupter_D0Entry @ 0x140006DDC (Interrupter_D0Entry.c)
 *     Command_D0Entry @ 0x1400070F4 (Command_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x140007150 (DeviceSlot_D0Entry.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Register_D0Entry @ 0x140007F84 (Register_D0Entry.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x14001C248 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x14001C2EC (DeviceSlot_DisableAllDeviceSlots.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     RootHub_D0Entry @ 0x14002C718 (RootHub_D0Entry.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x140031BB4 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x140031C5C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032598 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x14003C9DC (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     Controller_InUseByDebugger @ 0x14003DA8C (Controller_InUseByDebugger.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1400734FC (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140075CE4 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140080F38 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 v6; // rdi
  int PreProcessedSystemPowerAction; // ebx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // r9d
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int i; // r12d
  __int64 v18; // rbx
  char v19; // r8
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  char v33; // [rsp+40h] [rbp-58h]
  char v34; // [rsp+41h] [rbp-57h]
  int v35; // [rsp+44h] [rbp-54h]
  int v36; // [rsp+48h] [rbp-50h]
  _BYTE v37[12]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v33 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B240);
  *(_QWORD *)v37 = v5;
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2209);
  Controller_LogDiagnosticsOnD0Entry(a1, a2);
  v34 = 0;
  v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v6);
  v35 = PreProcessedSystemPowerAction;
  if ( (unsigned int)XilRegister_ReadUlong(*(_QWORD *)(v6 + 88), *(unsigned int **)(*(_QWORD *)(v6 + 88) + 24LL)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v8, 4, 64, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v34 = 1;
    v9 = -1073741823;
    goto LABEL_75;
  }
  if ( *(_DWORD *)(v6 + 864) && *(_QWORD *)(v6 + 1248) )
    SleepstudyHelper_ComponentActive();
  if ( PreProcessedSystemPowerAction == 2 )
  {
    v10 = *(_QWORD *)(v6 + 824);
    if ( v10 && *(_DWORD *)(v10 + 584) == 4 )
    {
      v11 = Register_ControllerStop(*(_QWORD *)(v6 + 88));
      if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v12,
          4,
          65,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v11);
      }
    }
    else
    {
      v13 = Register_BiosHandoff(*(_QWORD **)(v6 + 88));
      v9 = v13;
      if ( v13 < 0 )
      {
        v4 = 10;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 66;
          goto LABEL_23;
        }
LABEL_75:
        DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v6 + 136));
        if ( v34 )
        {
          if ( (*(_DWORD *)(v5 + 28) & 0x10) == 0 )
            Etw_ReportFatalError(v4, v6, 0, 4150, v4, v9);
          LOBYTE(v25) = 1;
        }
        else
        {
          Controller_ReportFatalErrorEx(v6, 0, 4124, v4, v9, 0LL, 0LL, 0LL);
          v25 = 0LL;
        }
        Controller_SetControllerGone(v6, v25);
        goto LABEL_84;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v6 + 136), a2);
    v13 = Register_ControllerReset(*(_QWORD *)(v6 + 88), 0);
    v9 = v13;
    if ( v13 < 0 )
    {
      v4 = 11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 67;
LABEL_23:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v8,
          4,
          v14,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v13);
        goto LABEL_75;
      }
      goto LABEL_75;
    }
    v33 = 1;
  }
  if ( !*(_BYTE *)(v6 + 840) )
  {
    *(_DWORD *)(v6 + 844) = KeQueryTimeIncrement();
    v15 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v6 + 88) + 40LL) + 1) >> 3) & 0x7FF;
    v8 = _InterlockedExchange64(
           (volatile __int64 *)(v6 + 832),
           (v15 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v6 + 844) / 10000LL - v15) << 21));
    *(_BYTE *)(v6 + 840) = 1;
  }
  LOBYTE(v8) = 1;
  Controller_ExecuteHSICDisconnectInU3Workaround(v6, v8);
  if ( (*(_QWORD *)(v6 + 744) & 1) != 0 )
  {
    LOBYTE(v16) = 1;
    Controller_ExecuteKBLPowerTransitionWorkaround(v6, v16);
  }
  v4 = 5;
  for ( i = 1; i <= 2; ++i )
  {
    if ( i == 2
      || (*(_QWORD *)(v6 + 736) & 2) != 0
      || *(_BYTE *)(v6 + 796)
      || a2 == 5
      || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v6) == 2
      || (*(_QWORD *)(v6 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v6) )
    {
      v19 = 0;
    }
    else
    {
      v18 = *(_QWORD *)(v6 + 88);
      Register_SetClearSSICPortUnused(v18, 0);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v18, 0);
      v19 = 1;
    }
    v20 = Interrupter_D0Entry(*(_QWORD *)(v6 + 128), a2, v19);
    v9 = v20;
    if ( v20 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v24 = 68;
      goto LABEL_73;
    }
    v20 = DeviceSlot_D0Entry(*(_QWORD *)(v6 + 136), a2);
    v9 = v20;
    if ( v20 < 0 )
    {
      v4 = 6;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v24 = 69;
      goto LABEL_73;
    }
    v20 = Command_D0Entry(*(_QWORD *)(v6 + 144), a2);
    v9 = v20;
    if ( v20 < 0 )
    {
      v4 = 7;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v24 = 70;
LABEL_73:
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v21,
        4,
        v24,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v20);
      goto LABEL_74;
    }
    if ( i == 2 || a2 == 5 || v35 == 2 )
      break;
    if ( (*(_QWORD *)(v6 + 736) & 2) != 0
      || *(_BYTE *)(v6 + 796)
      || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v6) == 2
      || (*(_QWORD *)(v6 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v6) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v21, 4, 72, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
    }
    else
    {
      v22 = Controller_D0EntryRestoreState(v6);
      if ( v22 >= 0 )
        break;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v23,
          4,
          71,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v22);
      }
      Controller_HwVerifierBreakIfEnabled(v6, 0, 0, 0x400000LL, "Controller restore state operation failed", 0LL, 0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v6 + 136), a2);
    v20 = Register_ControllerReset(*(_QWORD *)(v6 + 88), 0);
    v9 = v20;
    if ( v20 < 0 )
    {
      v4 = 11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = 73;
        goto LABEL_73;
      }
LABEL_74:
      v5 = *(_QWORD *)v37;
      goto LABEL_75;
    }
    v33 = 1;
  }
  v20 = Register_D0Entry(*(_QWORD *)(v6 + 88));
  v9 = v20;
  if ( v20 < 0 )
  {
    v4 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_74;
    v24 = 74;
    goto LABEL_73;
  }
  v20 = RootHub_D0Entry(*(_QWORD *)(v6 + 152));
  v9 = v20;
  if ( v20 < 0 )
  {
    v4 = 13;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_74;
    v24 = 75;
    goto LABEL_73;
  }
  *(_DWORD *)(v6 + 792) = 1;
  if ( v33 == 1 )
  {
    v28 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)&v37[4] = 0LL;
    *(_DWORD *)v37 = 12;
    ((void (__fastcall *)(__int64, __int64, _BYTE *))qword_14006BC18)(UcxDriverGlobals, v28, v37);
  }
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v6);
  *(_DWORD *)(v6 + 820) = 7;
LABEL_84:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v32) = v9;
    LODWORD(v31) = v36;
    LODWORD(v30) = a2;
    McTemplateK0pqqq_EtwWriteTransfer(
      v26,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v27,
      *(_QWORD *)(v6 + 8),
      v30,
      v31,
      v32);
  }
  return (unsigned int)v9;
}
