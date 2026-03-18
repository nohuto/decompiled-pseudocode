/*
 * XREFs of zzzUpdateCursorImage @ 0x14004D350
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14004C710 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005F7A8 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x140126310 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 *     HideAutorunCursor @ 0x140273F80 (HideAutorunCursor.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C8FC (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14004C98C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14011CDA4 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1401AF0D8 (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401AFCBC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1401B3FCC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetRITTimer @ 0x1401C8EB0 (SetRITTimer.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?IsCursorImageSuppressed@@YA_NXZ @ 0x140273A7C (-IsCursorImageSuppressed@@YA_NXZ.c)
 *     ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x140273D00 (-zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x140273F20 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall zzzUpdateCursorImage(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbp
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct tagCURSOR *v42; // rax
  struct tagCURSOR *CurrentCursorFrame; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // edi
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // ebx
  CursorApiRouter *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rax
  unsigned int CurrentCursorSize; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rcx
  unsigned int v75; // ebx
  unsigned int v76; // [rsp+70h] [rbp+8h]
  __int64 v77; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v7 = 3;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888)
    || (UserSessionState = W32GetUserSessionState(v6, v5),
        v9 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(UserSessionState + 18888)),
        !TestRawInputModeCaptureMouse(v9))
    || (v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18888), *(int *)(v6 + 408) >= 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176) )
      return;
    if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
      && IsCursorImageSuppressed() )
    {
      v4 = 7;
    }
    else
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
      if ( *(int *)(v6 + 408) >= 0 )
      {
        v4 = 3;
        v10 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
        v3 = *(_QWORD *)(v10 + 400);
        if ( *(_DWORD *)(W32GetUserSessionState(v10, v11) + 36248)
          || *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62712) )
        {
          v12 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
          if ( *(_QWORD *)(v12 + 400) == *(_QWORD *)(W32GetUserSessionState(v14, v13) + 21880)
            || (v15 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176),
                *(_QWORD *)(v15 + 400) == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 30712))
            || (v18 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176),
                *(_QWORD *)(v18 + 400) == *(_QWORD *)(W32GetUserSessionState(v20, v19) + 27952)) )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62712) )
            {
              v4 = 1;
              v3 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 30712);
            }
            else if ( !(unsigned __int8)isChildPartition() )
            {
              v4 = 2;
              v3 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 27952);
            }
          }
        }
      }
      else
      {
        v4 = 4;
      }
    }
  }
  v77 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36320);
  if ( v3 != *(_QWORD *)(W32GetUserSessionState(v24, v23) + 36320) )
  {
    v28 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 36272);
    if ( v3 && (*(_DWORD *)(v3 + 80) & 8) != 0 && *(_QWORD *)(v3 + 112) )
    {
      if ( !v28 )
      {
        *(_DWORD *)(v3 + 120) = 0;
        v29 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v27) + 36336) = v29;
        v30 = (unsigned int)(100 * **(_DWORD **)(v3 + 112));
        LODWORD(v31) = (2863311531u * (unsigned __int64)(unsigned int)v30) >> 32;
        LODWORD(v29) = (unsigned int)v30 / 6;
        v32 = W32GetUserSessionState(v30, v31);
        v33 = SetRITTimer(*(_QWORD *)(v32 + 36272), (unsigned int)v29, zzzAnimateCursor, 1LL);
        *(_QWORD *)(W32GetUserSessionState(v35, v34) + 36272) = v33;
      }
    }
    else if ( v28 )
    {
      v36 = W32GetUserSessionState(v28, v27);
      FindTimer(0LL, *(_QWORD *)(v36 + 36272), 4u, 1, 0LL);
      *(_QWORD *)(W32GetUserSessionState(v38, v37) + 36272) = 0LL;
    }
    v39 = W32GetUserSessionState(v28, v27);
    EtwTraceWaitCursor(v3, *(_QWORD *)(v39 + 36320));
    *(_QWORD *)(W32GetUserSessionState(v41, v40) + 36320) = v3;
  }
  v42 = FixupCursorForMonitor((struct tagCURSOR *)v3, v25);
  CurrentCursorFrame = GetCurrentCursorFrame(v42);
  if ( *(struct tagCURSOR **)(W32GetUserSessionState(v45, v44) + 36328) == CurrentCursorFrame )
  {
    if ( !(unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
      return;
    goto LABEL_50;
  }
  v50 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 36328);
  *(_QWORD *)(W32GetUserSessionState(v52, v51) + 36328) = CurrentCursorFrame;
  if ( !CurrentCursorFrame )
  {
    SetPointerInternal(0LL, v4);
    goto LABEL_47;
  }
  v53 = *(_DWORD *)(v3 + 80) & 8;
  v56 = v53 | 0x10;
  if ( !FCursorShadowed((struct _CURSINFO *)(v3 + 80)) )
    v56 = v53;
  v59 = v56 | 0x20;
  if ( *(_DWORD *)(W32GetUserSessionState(v55, v54) + 36292) != 1 )
    v59 = v56;
  v76 = v59;
  v60 = *(CursorApiRouter **)(W32GetUserSessionState(v58, v57) + 36304);
  if ( (unsigned int)IsRemoteConnection() )
    v63 = 0;
  else
    v63 = *(_DWORD *)(W32GetUserSessionState(v62, v61) + 16296);
  CursorApiRouter::SetPointerShape(v60, (struct tagCURSOR *)((char *)CurrentCursorFrame + 80), v59, v63, 0x32u);
  if ( v77 == v3 )
  {
    if ( *((_DWORD *)CurrentCursorFrame + 19) == *(_DWORD *)(v50 + 76) )
      goto LABEL_47;
    v4 = 5;
  }
  if ( (unsigned int)IsRemoteConnection() )
    v66 = 0;
  else
    v66 = *(_DWORD *)(W32GetUserSessionState(v65, v64) + 16296);
  v67 = W32GetUserSessionState(v65, v64);
  CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v67 + 36344));
  InputTraceLogging::Cursor::SetCursorImage(CurrentCursorFrame, v3, CurrentCursorSize, v4, v76, v66);
LABEL_47:
  if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v49) = *(_QWORD *)(W32GetUserSessionState(v70, v69) + 36328) != 0LL;
    LOBYTE(v2) = v50 != 0;
    if ( (unsigned __int8)v49 != v2 )
      SendVisibilityChanged();
LABEL_50:
    v71 = W32GetUserSessionState(v49, v48);
    zzzSendCursorChangeWinEvent(*(struct tagCURSOR **)(v71 + 36328), CurrentCursorFrame);
    return;
  }
  v73 = *(_QWORD *)(W32GetUserSessionState(v70, v69) + 36328);
  LOBYTE(v74) = v73 != 0;
  if ( (v73 != 0) != (v50 != 0) )
    SendVisibilityChanged();
  v75 = 32780;
  if ( v73 )
  {
    if ( !v50 )
      v75 = 32770;
  }
  else
  {
    v75 = 32771;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v74, v72) + 70600) )
    v7 = 1;
  xxxWindowEvent(v75, 0LL, -9, 0, v7);
}
