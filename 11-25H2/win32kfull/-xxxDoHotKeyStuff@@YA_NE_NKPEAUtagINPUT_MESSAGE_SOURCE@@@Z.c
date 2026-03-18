/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08
 * Callers:
 *     EditionDoHotKeys @ 0x1401B2EB0 (EditionDoHotKeys.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HasRawInputForegroundTarget @ 0x14011C80C (HasRawInputForegroundTarget.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1401B3858 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401C71B4 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401D27B4 (-xxxHandleVolumeUpDownKey@@YAXE_N@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401D2ADC (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401EEB58 (zzzDesktopSwitchSideEffects.c)
 *     _CancelMagnificationInputTransform @ 0x1402032D0 (_CancelMagnificationInputTransform.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x14021CA40 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?ReportPenKey@@YAXIE@Z @ 0x140220C8C (-ReportPenKey@@YAXIE@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14022C174 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     ?HandleAltF4@@YAHPEBUtagHOTKEY@@@Z @ 0x14024614C (-HandleAltF4@@YAHPEBUtagHOTKEY@@@Z.c)
 *     xxxActivateDebugger @ 0x14025E0C0 (xxxActivateDebugger.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C (Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028A92C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x14028AAD4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x14028B920 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline @ 0x14028B974 (Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline @ 0x14028B9C8 (Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxDoHotKeyStuff(__int64 a1, __int64 a2, unsigned int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  char v4; // bl
  int v5; // r13d
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 UserSessionState; // rdi
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  bool v25; // bp
  struct tagHOTKEY *v26; // r14
  int v27; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebp
  __int64 v32; // rdx
  bool v33; // di
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  struct tagHOTKEY *v41; // rax
  struct tagHOTKEY *v42; // rax
  __int64 v43; // rdx
  TooltipDismiss *v44; // rcx
  __int16 v45; // ax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  bool v58; // zf
  bool v59; // zf
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  int v75; // [rsp+28h] [rbp-90h]
  __int16 v76; // [rsp+30h] [rbp-88h]
  _BYTE v77[8]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v78; // [rsp+50h] [rbp-68h]
  __int128 v79; // [rsp+58h] [rbp-60h] BYREF
  __int64 v80; // [rsp+68h] [rbp-50h]
  bool v81; // [rsp+C0h] [rbp+8h]
  unsigned int v82; // [rsp+C8h] [rbp+10h]

  v4 = 0;
  v5 = (unsigned __int8)a2;
  v6 = 0;
  v82 = 0;
  v7 = 0;
  v8 = (unsigned __int8)a1;
  v77[0] = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v78 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v77);
  v11 = 1;
  switch ( v8 )
  {
    case 0x10u:
      v7 = 4;
      break;
    case 0x11u:
      v7 = 2;
      break;
    case 0x12u:
      v7 = 1;
      break;
    default:
      if ( v8 - 91 < 2 )
        v7 = 8;
      else
        *(_DWORD *)(UserSessionState + 14044) = 0;
      break;
  }
  v12 = *(unsigned int *)(UserSessionState + 14040);
  if ( (_BYTE)v5 )
  {
    *(_DWORD *)(UserSessionState + 14040) = v12 & ~v7;
    if ( v7 )
    {
      v6 = *(_DWORD *)(UserSessionState + 14044);
      v82 = v6;
      *(_DWORD *)(UserSessionState + 14044) = 0;
    }
    else if ( (unsigned int)Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline() )
    {
      ResetWindowKeyProcessing(0LL);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v12, v10) + 14000) )
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 14000) = 0LL;
  }
  else
  {
    v15 = v7 | v12;
    *(_DWORD *)(UserSessionState + 14040) = v15;
    if ( v7 )
      *(_DWORD *)(UserSessionState + 14044) = v15;
    if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 66092) || *(_DWORD *)(UserSessionState + 14044) != 8 )
      {
        if ( (unsigned int)Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline() )
        {
          ResetWindowKeyProcessing(0LL);
        }
        else
        {
          v23 = *(_DWORD *)(UserSessionState + 14048);
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              v24 = W32GetUserSessionState(v22, v21);
              UpdateWindowKeyWindowCloak(*(_QWORD *)(v24 + 19144), 0LL);
            }
            *(_DWORD *)(UserSessionState + 14048) = 0;
          }
        }
      }
      else if ( !*(_DWORD *)(UserSessionState + 14048) )
      {
        v20 = W32GetUserSessionState(v19, v18);
        if ( (unsigned __int8)UpdateWindowKeyWindowCloak(*(_QWORD *)(v20 + 19144), 1LL) )
          *(_DWORD *)(UserSessionState + 14048) = 1;
      }
    }
  }
  v81 = IsSAS(v8, (unsigned int *)(UserSessionState + 14040));
  v25 = v81;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v77);
  xxxHandleVolumeUpDownKey(v8, v5);
  if ( !v81 && (*(_BYTE *)(UserSessionState + 14704) & 1) != 0 )
    return 0;
  if ( !v6 || !(_BYTE)v5 )
  {
    v26 = IsHotKey(*(_DWORD *)(UserSessionState + 14040), v8);
    if ( !v26 || !v81 )
    {
      if ( (unsigned int)((__int64 (*)(void))Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline)() )
      {
        if ( *(_DWORD *)(UserSessionState + 14040) != *(_DWORD *)(UserSessionState + 14008) )
        {
          v41 = IsUninterceptable(v8);
          if ( v41 )
            v26 = v41;
        }
      }
      else
      {
        v42 = IsUninterceptable(v8);
        if ( v42 )
          v26 = v42;
      }
    }
    goto LABEL_56;
  }
  v26 = IsHotKey(v6, 0);
  if ( !(unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_56;
  v27 = *(_DWORD *)(UserSessionState + 14048);
  if ( !v26 )
  {
    if ( v27 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2324LL);
    goto LABEL_56;
  }
  if ( !v27 )
    goto LABEL_42;
  if ( *((_DWORD *)v26 + 10) != -7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2329LL);
LABEL_42:
    if ( *((_DWORD *)v26 + 10) != -7 )
      goto LABEL_56;
  }
  IsEnabledDeviceUsageNoInline = Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline();
  v31 = *(_DWORD *)(UserSessionState + 14048);
  if ( IsEnabledDeviceUsageNoInline )
  {
    ResetWindowKeyProcessing(0LL);
    if ( v31 == 2 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32) + 69160);
      v76 = 13;
      goto LABEL_116;
    }
  }
  else
  {
    *(_DWORD *)(UserSessionState + 14048) = 0;
    if ( v31 == 2 )
      return 0;
    if ( v31 == 1 )
    {
      v37 = W32GetUserSessionState(v30, v29);
      UpdateWindowKeyWindowCloak(*(_QWORD *)(v37 + 19144), 0LL);
    }
  }
  v25 = v81;
LABEL_56:
  if ( (unsigned int)((__int64 (*)(void))Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline)() )
  {
    if ( v26
      && *(_DWORD *)(W32GetUserSessionState(v39, v38) + 66092)
      && !_bittest16((const signed __int16 *)v26 + 17, 0xDu) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v40) + 69160);
      v76 = 14;
      goto LABEL_116;
    }
  }
  else if ( v26
         && *(_DWORD *)(W32GetUserSessionState(v39, v38) + 66092)
         && !v25
         && !_bittest16((const signed __int16 *)v26 + 17, 0xDu) )
  {
    return 0;
  }
  WindowArrangementSequence::TestSequence(
    v26,
    (const struct tagHOTKEY *const)v8,
    v7,
    *(_DWORD *)(UserSessionState + 14040),
    v5 ^ 1,
    v75);
  if ( v82 == 2 && (_BYTE)v5 || *(_DWORD *)(UserSessionState + 14040) == 6 && (_BYTE)v8 == 121 && !(_BYTE)v5 )
    TooltipDismiss::DismissTooltips(v44);
  if ( !v26 )
    return 0;
  v45 = *((_WORD *)v26 + 17);
  if ( v45 < 0 && !v25 && a4 && *((_DWORD *)a4 + 1) != 4 )
    return 0;
  v80 = 0LL;
  v79 = 0LL;
  if ( (v45 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(&v79, v43)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v79 + 1) + 464LL) + 824LL) + 100LL) & 0x200) != 0 )
  {
    return 0;
  }
  v46 = *((_DWORD *)v26 + 10);
  if ( v46 == -7 )
    goto LABEL_154;
  if ( (unsigned int)(v46 + 6) > 1 )
  {
    if ( !(unsigned int)((__int64 (*)(void))Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline)() )
    {
      v49 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v47) + 19144) + 40LL) + 64LL);
      if ( (v49 & 1) != 0 )
      {
        v49 = *(_QWORD *)(W32GetUserSessionState(v49, v54) + 62976);
        if ( *(_QWORD *)(*(_QWORD *)v26 + 496LL) != v49
          && !*((_QWORD *)v26 + 1)
          && *(_DWORD *)(W32GetUserSessionState(v49, v55) + 66092)
          && !_bittest16((const signed __int16 *)v26 + 17, 0xDu) )
        {
          return 0;
        }
      }
      goto LABEL_123;
    }
    v49 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v47) + 19144) + 40LL) + 64LL);
    if ( (v49 & 1) == 0 )
      goto LABEL_123;
    v49 = *(_QWORD *)v26;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v26 + 528LL), 0, 0) & 4) != 0 )
    {
      if ( _bittest16((const signed __int16 *)v26 + 17, 0xDu) )
        goto LABEL_123;
    }
    if ( (unsigned int)Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v51, v50) + 66092) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v11 = 0;
        }
        v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52) + 69160);
        v76 = 15;
        goto LABEL_116;
      }
LABEL_123:
      if ( !v82 && (_BYTE)v5 )
        return 0;
      if ( v25 || (_BYTE)v8 == 27 && *(_DWORD *)(UserSessionState + 14040) == 2 )
      {
        zzzDesktopSwitchSideEffects();
        if ( *(_QWORD *)(*((_QWORD *)PtiCurrent(v57, v56) + 62) + 224LL) )
          CancelMagnificationInputTransform();
        CancelCapturedMipOverride();
      }
      if ( !a3 )
        goto LABEL_150;
      if ( (_BYTE)v8 == 9 )
      {
        v58 = (a3 & 1) == 0;
      }
      else
      {
        v49 = 13LL;
        switch ( (_BYTE)v8 )
        {
          case 0xD:
            v58 = (a3 & 8) == 0;
            break;
          case 0x1B:
            if ( (a3 & 2) != 0 && (*(_DWORD *)(UserSessionState + 14040) & 3) == 1 )
              return 0;
            if ( (a3 & 0x40) != 0 )
            {
              v59 = (*(_DWORD *)(UserSessionState + 14040) & 3) == 2;
              goto LABEL_149;
            }
LABEL_150:
            Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v49, a3, 2LL);
            if ( !(unsigned int)Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v61, v60, v62)
              && *((_DWORD *)v26 + 10) == -17 )
            {
              return (unsigned int)HandleAltF4(v26) != 0;
            }
            if ( IsPenQuickLaunchAndShouldBeDisabled(*(_DWORD *)(UserSessionState + 14040), v8) )
              return 0;
LABEL_154:
            if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
            {
              ReportPenKey(*(_DWORD *)(UserSessionState + 14040), v8);
              v69 = Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v67, v66, v68);
              LOBYTE(v70) = v5;
              if ( v69 )
              {
                v71 = xxxReportHotKey(v26, v70, a4) - 1;
                if ( !v71 )
                  return 0;
                if ( v71 != 1 )
                  return v82 == 0;
                return 1;
              }
              xxxReportHotKey(v26, v70, a4);
            }
            else
            {
              v72 = Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v64, v63, v65);
              LOBYTE(v73) = v5;
              if ( v72 )
              {
                v74 = xxxReportHotKey(v26, v73, a4) - 1;
                if ( !v74 )
                  return 0;
                if ( v74 == 1 )
                  return 1;
              }
              else
              {
                xxxReportHotKey(v26, v73, a4);
              }
              ReportPenKey(*(_DWORD *)(UserSessionState + 14040), v8);
            }
            return v82 == 0;
          case 0x20:
            v58 = (a3 & 4) == 0;
            break;
          case 0x2C:
            if ( (a3 & 0x20) != 0 && (*(_DWORD *)(UserSessionState + 14040) & 3) == 0 )
              return 0;
            v58 = (a3 & 0x10) == 0;
            break;
          default:
            goto LABEL_150;
        }
      }
      if ( !v58 )
      {
        v59 = (*(_DWORD *)(UserSessionState + 14040) & 3) == 1;
LABEL_149:
        if ( v59 )
          return 0;
        goto LABEL_150;
      }
      goto LABEL_150;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50) + 69160);
    v76 = 16;
LABEL_116:
    LOBYTE(v35) = v33;
    LOBYTE(v34) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v34,
      v35,
      v36,
      4,
      6,
      v76,
      (__int64)&WPP_432efc7bf3b536e41dd1d6a6b78a846f_Traceguids);
    return 0;
  }
  if ( !(_BYTE)v5 )
    return (unsigned int)xxxActivateDebugger(*((unsigned __int16 *)v26 + 16)) != 0;
  return v4;
}
