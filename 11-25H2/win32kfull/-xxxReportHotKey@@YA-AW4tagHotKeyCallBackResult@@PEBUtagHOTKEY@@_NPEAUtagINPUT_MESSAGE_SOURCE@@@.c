/*
 * XREFs of ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1400208EC (_PostMessageExtended.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012FB38 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 *     ?GetDestination@tagHOTKEY@@QEBA?AUDestination@1@XZ @ 0x140205AB8 (-GetDestination@tagHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x14021CB04 (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x1402258D0 (-GetDestination@CHILDHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x14022BDB8 (-HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x14028B784 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1402B8450 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxReportHotKey(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rbx
  char v14; // r13
  __int64 v15; // rax
  struct tagWND *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  char v20; // r15
  __int64 (__fastcall *v21)(_QWORD, __int64); // r13
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // r15
  unsigned int v26; // edx
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct tagTHREADINFO *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *v38; // rax
  struct tagWND *ShellWindow; // rax
  __int16 v40; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall *v41)(_QWORD, __int64); // [rsp+38h] [rbp-40h]
  _QWORD v42[2]; // [rsp+40h] [rbp-38h] BYREF
  struct tagTHREADINFO *v43; // [rsp+50h] [rbp-28h] BYREF
  struct tagWND *v44; // [rsp+58h] [rbp-20h]
  __int64 v45; // [rsp+60h] [rbp-18h] BYREF
  struct tagWND *v46; // [rsp+68h] [rbp-10h]
  char v47; // [rsp+C0h] [rbp+48h]
  bool v49; // [rsp+D8h] [rbp+60h]

  v4 = *(_DWORD *)(a1 + 40);
  v49 = *(_DWORD *)(a3 + 4) == 1;
  v5 = v49;
  if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline()
    && !*(_DWORD *)(a1 + 36) )
  {
    v5 = v49 | 2;
  }
  if ( v4 == -7 || v4 == 61744 )
  {
    v38 = PtiCurrent(2LL, v6);
    ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v38 + 62));
    if ( ShellWindow )
      xxxReportWindowHotKey(a1, ShellWindow, v5);
    return 0LL;
  }
  v40 = *(_WORD *)(a1 + 34);
  if ( (v40 & 0x100) != 0 )
    return 0LL;
  tagHOTKEY::GetDestination(a1, &v45);
  if ( !(_DWORD)v45 )
    return 0LL;
  v9 = *(unsigned __int8 *)(a1 + 36);
  v47 = *(_BYTE *)(a1 + 36);
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = *(unsigned __int16 *)(a1 + 34);
  i = (_QWORD *)(a1 + 56);
  v13 = *(unsigned __int16 *)(UserSessionState + 14040);
  v14 = (unsigned __int8)*(_WORD *)(a1 + 34) >> 7;
  v15 = v9;
  v42[0] = *(_QWORD *)(a1 + 24);
  v16 = v46;
  v17 = (v15 << 16) | v13;
  v41 = *(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 8);
  v43 = *(struct tagTHREADINFO **)a1;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 != a1 + 56 )
  {
    if ( (v11 & 0x1000) != 0 )
    {
      v19 = v18 - 32;
      v20 = 1;
      CHILDHOTKEY::GetDestination(v18 - 32, (__int64)v42);
      i = 0LL;
      if ( !LODWORD(v42[0]) )
        return 0LL;
      v21 = 0LL;
      v16 = (struct tagWND *)v42[1];
      v4 = *(_DWORD *)(v19 + 20);
      v42[0] = *(_QWORD *)(v19 + 24);
      v22 = *(_WORD *)(v19 + 16);
      v45 = 3LL;
      goto LABEL_27;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(i, v11) + 18888) )
    {
      v20 = v14;
      i = *(_QWORD **)(W32GetUserSessionState(i, v11) + 18888);
      if ( !i[16] )
        goto LABEL_26;
      if ( (*(_DWORD *)(W32GetUserSessionState(i, v11) + 66808) & 0x200) != 0 )
      {
        v23 = W32GetUserSessionState(i, v11);
        if ( IsPenQuickLaunchHotKey(*(_DWORD *)(v23 + 14040), v47) )
          goto LABEL_26;
      }
      v24 = W32GetUserSessionState(i, v11);
      v11 = a1 + 56;
      for ( i = *(_QWORD **)(a1 + 56); i != (_QWORD *)v11; i = (_QWORD *)*i )
      {
        v25 = i - 4;
        if ( *(_QWORD *)(*(i - 4) + 472LL) == *(_QWORD *)(v24 + 18888) )
        {
          CHILDHOTKEY::GetDestination((__int64)(i - 4), (__int64)&v43);
          if ( !(_DWORD)v43 )
            return 0LL;
          v16 = v44;
          v46 = v44;
          v45 = 3LL;
          if ( !v44 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2023);
          v26 = *(_DWORD *)(a1 + 36);
          v4 = *((_DWORD *)v25 + 5);
          v43 = (struct tagTHREADINFO *)*v25;
          v41 = 0LL;
          v40 = *((_WORD *)v25 + 8);
          TraceLoggingYieldedHotkey(*(unsigned __int16 *)(a1 + 32), v26);
          break;
        }
      }
    }
  }
  v20 = v14;
LABEL_26:
  v21 = v41;
  v22 = v40;
LABEL_27:
  v27 = v45;
  if ( (v22 & 0x4000) != 0 && v17 == *(_QWORD *)(W32GetUserSessionState(i, v11) + 14000) )
    return 0LL;
  if ( v20 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v11) + 14000) != v17 )
      *(_QWORD *)(W32GetUserSessionState(v29, v28) + 14000) = v17;
    xxxReportHotKeyToShell(v16, v17, v4, v42[0], v5);
    return 0LL;
  }
  if ( v27 == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v11) + 14000) != v17 )
      *(_QWORD *)(W32GetUserSessionState(v36, v35) + 14000) = v17;
    W32GetUserSessionState(v36, v35);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    if ( v21 )
      return v21(v4, v17);
    PostThreadMessageEx(v43, 0x312u, v4, v17, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v34 = v43;
    goto LABEL_46;
  }
  if ( v27 == 2 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(i, v11) + 18888) )
      return 0LL;
    i = *(_QWORD **)(W32GetUserSessionState(0LL, v30) + 18888);
    v16 = (struct tagWND *)i[15];
  }
  if ( v16 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(i, v11) + 14000) != v17 )
      *(_QWORD *)(W32GetUserSessionState(v32, v31) + 14000) = v17;
    W32GetUserSessionState(v32, v31);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    PostMessageExtended(v16, 0x312u, v4, v17, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v34 = (struct tagTHREADINFO *)*((_QWORD *)v16 + 2);
LABEL_46:
    LOBYTE(v33) = v49;
    LastWokenThread::Set(v34, 1LL, v33);
  }
  return 0LL;
}
