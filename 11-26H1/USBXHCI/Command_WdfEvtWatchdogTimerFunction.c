/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilRegister_WriteUlong64 @ 0x1400079C0 (XilRegister_WriteUlong64.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     XilCommand_WriteDoorbell @ 0x1400309E8 (XilCommand_WriteDoorbell.c)
 *     Command_ProcessCrbCompletion @ 0x140032ABC (Command_ProcessCrbCompletion.c)
 *     Command_StartCommandWatchdogTimer @ 0x140032CC8 (Command_StartCommandWatchdogTimer.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_qL @ 0x14003EFA4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x14003F0D8 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003F540 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x14003FAA8 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x14003FCE0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilRegister_ReadUlong64 @ 0x14004A0D0 (XilRegister_ReadUlong64.c)
 *     Etw_CommandCompleteError @ 0x14004F2AC (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  char v1; // bl
  char v2; // r14
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rdi
  char IsControllerAccessible; // r12
  unsigned __int8 v8; // r13
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 Ulong64; // rax
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int128 *v27; // rdx
  _OWORD ***v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 **v33; // rcx
  __int64 *v34; // rax
  __int64 *v35; // rdx
  __int64 *v36; // rdx
  __int64 *result; // rax
  int v38; // edx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 *v41; // rcx
  int v42; // [rsp+20h] [rbp-50h]
  __int64 v43; // [rsp+28h] [rbp-48h]
  __int64 v44; // [rsp+30h] [rbp-40h]
  __int64 v45; // [rsp+38h] [rbp-38h]
  char v46[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v47; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v48; // [rsp+50h] [rbp-20h]
  __int128 v49; // [rsp+58h] [rbp-18h] BYREF
  char v50; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0;
  v2 = 0;
  v49 = 0LL;
  v50 = 0;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2568);
  v4 = 0;
  v46[0] = 0;
  v5 = v3(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v5,
         off_14006B038);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 1001LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      1057);
  if ( !KeGetCurrentIrql() )
    Command_StartCommandWatchdogTimer(v6);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v6 + 8));
  v8 = 0;
  v48 = &v47;
  v47 = (__int64)&v47;
  DynamicLock_Acquire(*(_QWORD *)(v6 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_20;
  if ( *(_DWORD *)(v6 + 36) != 1 )
  {
    v4 = 0;
    goto LABEL_96;
  }
  v9 = *(_QWORD *)(v6 + 80);
  if ( v9 == v6 + 80 )
  {
    v1 = 0;
    goto LABEL_96;
  }
  if ( *(_BYTE *)(v6 + 136) )
  {
    XilCommand_SendQueryIsRingRunningRequest(v6 + 136, v46, &v50);
    v4 = v50;
    v2 = v46[0];
  }
  else
  {
    Ulong64 = XilRegister_ReadUlong64(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 168) + 8LL) + 88LL),
                *(_QWORD *)(v6 + 176));
    if ( Ulong64 == -1 )
    {
      v4 = 1;
    }
    else if ( (Ulong64 & 8) != 0 )
    {
      v2 = 1;
    }
  }
  if ( *(int *)(v9 + 56) > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v43) = HIDWORD(v9);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      4u,
      7u,
      0x1Du,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
  }
  if ( !v4 )
  {
    if ( *(_BYTE *)(v6 + 121) )
    {
      if ( (*(_DWORD *)(v6 + 124))-- == 1 )
      {
        if ( v2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v10,
              7,
              30,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
          }
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v6 + 8),
            0,
            0,
            4096LL,
            "Command abort timed out, command ring still running, resetting the controller",
            (__int128 *)(*(_QWORD *)(v6 + 72) + 16LL * *(unsigned int *)(v6 + 44)),
            0LL);
          v19 = *(_QWORD *)(v6 + 24);
          *(_BYTE *)(v6 + 121) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2560))(
            WdfDriverGlobals,
            v19,
            0LL);
          *(_DWORD *)(v6 + 36) = 2;
          v4 = 1;
          v8 = *(_BYTE *)(v9 + 62) & 1;
          goto LABEL_84;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v10,
            7,
            31,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
        }
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v6 + 8),
          0,
          0,
          0x2000LL,
          "Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
          (__int128 *)(*(_QWORD *)(v6 + 72) + 16LL * *(unsigned int *)(v6 + 44)),
          0LL);
        *(_BYTE *)(v6 + 121) = 0;
        v22 = *(_DWORD *)(v9 + 56);
        switch ( v22 )
        {
          case 0:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v20,
                7,
                34,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                0);
            }
            v23 = *(_QWORD *)v9;
            if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v24 = *(_QWORD **)(v9 + 8), *v24 != v9) )
LABEL_105:
              __fastfail(3u);
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            v25 = (unsigned int)++*(_DWORD *)(v6 + 44);
            if ( (_DWORD)v25 == *(_DWORD *)(v6 + 48) )
            {
              *(_DWORD *)(v6 + 44) = 0;
              v25 = 0LL;
            }
            XilCommand_AdvanceCommandRingControlDequeuePointer(v6, v25);
            goto LABEL_53;
          case 5:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v20,
                7,
                33,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                5);
            }
            break;
          case 10:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v20,
                7,
                32,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                10);
            }
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v20,
                7,
                35,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                *(_DWORD *)(v9 + 56));
            }
LABEL_53:
            if ( *(_QWORD *)(v6 + 80) != v6 + 80 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v20) = 4;
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v6 + 16),
                  v20,
                  7,
                  36,
                  (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
              }
              XilCommand_WriteDoorbell(v6);
            }
            v26 = *(_QWORD *)(v6 + 96);
            if ( v26 != v6 + 96 )
            {
              v49 = *(_OWORD *)(v6 + 96);
              *(_QWORD *)(v26 + 8) = &v49;
              **((_QWORD **)&v49 + 1) = &v49;
              *(_QWORD *)(v6 + 104) = v6 + 96;
              *(_QWORD *)(v6 + 96) = v6 + 96;
              goto LABEL_60;
            }
            v27 = &v49;
            *((_QWORD *)&v49 + 1) = &v49;
            *(_QWORD *)&v49 = &v49;
            while ( v27 != &v49 )
            {
              if ( *((__int128 **)v27 + 1) != &v49 )
                goto LABEL_105;
              v28 = *(_OWORD ****)v27;
              if ( *(__int128 **)(*(_QWORD *)v27 + 8LL) != v27 )
                goto LABEL_105;
              *(_QWORD *)&v49 = *(_QWORD *)v27;
              v28[1] = (_OWORD **)&v49;
              Command_InternalSendCommand(v6, (__int64)v27, v21);
LABEL_60:
              v27 = (__int128 *)v49;
            }
            if ( v9 )
            {
              DynamicLock_Release(*(_QWORD *)(v6 + 112));
              *(_BYTE *)(v9 + 60) = 25;
              Etw_CommandCompleteError(v29, v6, v9, 2LL);
              Command_ProcessCrbCompletion(v9);
              DynamicLock_Acquire(*(_QWORD *)(v6 + 112));
            }
            goto LABEL_94;
        }
        v9 = 0LL;
        goto LABEL_53;
      }
    }
    else
    {
      v30 = *(_DWORD *)(v9 + 56) - 1;
      *(_DWORD *)(v9 + 56) = v30;
      if ( v30 == 5 || !v30 )
      {
        if ( v2 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v30,
              7,
              39,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
            WdfDriverGlobals,
            *(_QWORD *)(v6 + 24),
            0LL);
          *(_DWORD *)(v6 + 36) = 2;
          v4 = 1;
          if ( (*(_BYTE *)(v9 + 62) & 1) != 0 )
          {
            v8 = 1;
LABEL_84:
            v1 = 0;
            goto LABEL_96;
          }
LABEL_95:
          v1 = 0;
          goto LABEL_96;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLd(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v30,
            v11,
            v12,
            v42,
            v9,
            (unsigned __int16)*(_DWORD *)(v9 + 36) >> 10,
            v30);
        if ( (unsigned __int8)HIBYTE(*(_WORD *)(v9 + 36)) >> 2 != 11 || ((*(_DWORD *)(v9 + 36) >> 9) & 1) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v45) = (unsigned __int8)HIBYTE(*(_WORD *)(v9 + 36)) >> 2;
            LODWORD(v44) = (*(_DWORD *)(v9 + 36) >> 9) & 1;
            LODWORD(v43) = 5;
            WPP_RECORDER_SF_ddL(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              2u,
              7u,
              0x26u,
              (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
              v43,
              v44,
              v45);
          }
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v6 + 8),
            0,
            0,
            0x4000LL,
            "A command timed out, aborting command next",
            (__int128 *)(v9 + 24),
            0LL);
        }
        *(_DWORD *)(v6 + 124) = 5;
        *(_BYTE *)(v6 + 121) = 1;
        if ( *(_BYTE *)(v6 + 136) )
        {
          XilCommand_SendAbortRingCommandRequest(v6 + 136);
        }
        else
        {
          v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 168) + 8LL) + 88LL);
          v32 = XilRegister_ReadUlong64(v31, *(_QWORD *)(v6 + 176));
          XilRegister_WriteUlong64(v31, *(_DWORD **)(v6 + 176), v32 | 4);
        }
      }
    }
LABEL_94:
    v4 = 0;
    goto LABEL_95;
  }
  IsControllerAccessible = 0;
  v1 = 1;
LABEL_20:
  if ( *(_BYTE *)(v6 + 128) )
  {
    v14 = (__int64 **)(v6 + 80);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 == (__int64 *)v14 )
        break;
      if ( (__int64 **)v15[1] != v14 )
        goto LABEL_105;
      v16 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) != v15 )
        goto LABEL_105;
      *v14 = v16;
      v16[1] = (__int64)v14;
      v17 = v48;
      if ( (__int64 *)*v48 != &v47 )
        goto LABEL_105;
      v15[1] = (__int64)v48;
      *v15 = (__int64)&v47;
      *v17 = (__int64)v15;
      v48 = v15;
    }
    v33 = (__int64 **)(v6 + 96);
    while ( 1 )
    {
      v34 = *v33;
      if ( *v33 == (__int64 *)v33 )
        break;
      if ( (__int64 **)v34[1] != v33 )
        goto LABEL_105;
      v35 = (__int64 *)*v34;
      if ( *(__int64 **)(*v34 + 8) != v34 )
        goto LABEL_105;
      *v33 = v35;
      v35[1] = (__int64)v33;
      v36 = v48;
      if ( (__int64 *)*v48 != &v47 )
        goto LABEL_105;
      v34[1] = (__int64)v48;
      *v34 = (__int64)&v47;
      *v36 = (__int64)v34;
      v48 = v34;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(v6 + 24),
    0LL);
  v4 = 0;
LABEL_96:
  result = (__int64 *)DynamicLock_Release(*(_QWORD *)(v6 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v1 == 1 )
      Controller_SetControllerGone(*(_QWORD *)(v6 + 8), 1);
    while ( 1 )
    {
      v39 = v47;
      result = &v47;
      if ( (__int64 *)v47 == &v47 )
        break;
      if ( *(__int64 **)(v47 + 8) != &v47 )
        goto LABEL_105;
      v40 = *(_QWORD *)v47;
      if ( *(_QWORD *)(*(_QWORD *)v47 + 8LL) != v47 )
        goto LABEL_105;
      v41 = &v47;
      v47 = *(_QWORD *)v47;
      *(_QWORD *)(v40 + 8) = &v47;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v38,
          7,
          40,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v39,
          (unsigned __int8)HIBYTE(*(_WORD *)(v39 + 36)) >> 2);
      }
      Etw_CommandCompleteError(v41, v6, v39, 3LL);
      Command_ProcessCrbCompletion(v39);
    }
  }
  if ( v4 == 1 )
    return (__int64 *)Controller_ReportFatalError(*(_QWORD *)(v6 + 8), (v8 ^ 1u) + 1, 4105, 0, 0LL, 0LL, 0LL);
  return result;
}
