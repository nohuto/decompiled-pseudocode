/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850
 * Callers:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140123804 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     SetPointer @ 0x140123830 (SetPointer.c)
 *     RemoteShadowCleanup @ 0x140124E84 (RemoteShadowCleanup.c)
 *     xxxUserResetDisplayDevice @ 0x140125400 (xxxUserResetDisplayDevice.c)
 * Callees:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C8FC (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14004C98C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14011CDA4 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1401AF0D8 (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z @ 0x1401AFC50 (-SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401AFCBC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1401B3FCC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     Feature_FixCursorShadowUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140273ECC (Feature_FixCursorShadowUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall SetPointerInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagCURSOR *CurrentCursorFrame; // rax
  __int64 UserSessionState; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagCURSOR *v21; // rsi
  __int64 v22; // rdx
  struct tagCURSOR *v23; // rax
  struct tagCURSOR *v24; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  struct _CURSINFO *v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r15d
  CursorApiRouter *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rax
  unsigned int CurrentCursorSize; // eax
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  CursorApiRouter *v45; // rcx
  unsigned int v46; // r8d

  v2 = a2;
  if ( !(_BYTE)a1 )
  {
    v42 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36292);
    v11 = 1;
    v45 = *(CursorApiRouter **)(W32GetUserSessionState(v44, v43) + 36304);
    v46 = 32;
    if ( v42 != 1 )
      v46 = 0;
    CursorApiRouter::SetPointerShape(v45, 0LL, v46, 0, 0);
    InputTraceLogging::Cursor::SetCursorImageNull(v2);
    goto LABEL_26;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888)
    || (v5 = W32GetUserSessionState(v4, v3),
        v6 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(v5 + 18888)),
        v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18888),
        *(int *)(v4 + 408) >= 0)
    || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v6), !(_BYTE)CurrentCursorFrame) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v11 = *(_QWORD *)(UserSessionState + 19176) == 0LL ? 3 : 0;
    CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(-*(_QWORD *)(UserSessionState + 19176), v12);
    if ( *((_QWORD *)CurrentCursorFrame + 2397) )
    {
      CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v14, v13);
      v16 = *((_QWORD *)CurrentCursorFrame + 2397);
      if ( *(int *)(v16 + 408) >= 0 )
      {
        CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v16, v15);
        v18 = *((_QWORD *)CurrentCursorFrame + 2397);
        if ( *(_QWORD *)(v18 + 400) )
        {
          CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v18, v17);
          v20 = *((_QWORD *)CurrentCursorFrame + 2484);
          if ( *(_DWORD *)(v20 + 1972) )
          {
            v21 = *(struct tagCURSOR **)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 19176) + 400LL);
            v23 = FixupCursorForMonitor(v21, v22);
            CurrentCursorFrame = GetCurrentCursorFrame(v23);
            v24 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              IsEnabledDeviceUsageNoInline = Feature_FixCursorShadowUpdate__private_IsEnabledDeviceUsageNoInline();
              v26 = (struct tagCURSOR *)((char *)v21 + 80);
              if ( !IsEnabledDeviceUsageNoInline )
                v26 = (struct tagCURSOR *)((char *)v24 + 80);
              v27 = 16 * FCursorShadowed(v26);
              v32 = v27 | 0x20;
              if ( *(_DWORD *)(W32GetUserSessionState(v29, v28) + 36292) != 1 )
                v32 = v27;
              v33 = *(CursorApiRouter **)(W32GetUserSessionState(v31, v30) + 36304);
              if ( (unsigned int)IsRemoteConnection() )
                v36 = 0;
              else
                v36 = *(_DWORD *)(W32GetUserSessionState(v35, v34) + 16296);
              CursorApiRouter::SetPointerShape(v33, (struct tagCURSOR *)((char *)v24 + 80), v32, v36, 0x32u);
              v11 = 2;
              if ( (unsigned int)IsRemoteConnection() )
                v39 = 0;
              else
                v39 = *(_DWORD *)(W32GetUserSessionState(v38, v37) + 16296);
              v40 = W32GetUserSessionState(v38, v37);
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v40 + 36344));
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v24,
                                             v21,
                                             CurrentCursorSize,
                                             v2,
                                             v32,
                                             v39);
            }
          }
        }
      }
    }
    if ( v11 )
LABEL_26:
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v11);
  }
  return (char)CurrentCursorFrame;
}
