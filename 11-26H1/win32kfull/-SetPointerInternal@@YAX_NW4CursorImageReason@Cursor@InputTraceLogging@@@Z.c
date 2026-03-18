/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     RemoteShadowCleanup @ 0x1400F6EE4 (RemoteShadowCleanup.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x1400F7204 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     xxxUserResetDisplayDevice @ 0x140248210 (xxxUserResetDisplayDevice.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14002AB0C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14002AB9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x140172930 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1401BF3C4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z @ 0x1401CA558 (-SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401CA5CC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1401E25DC (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
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
  __int64 v10; // rax
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
  __int64 v21; // r15
  __int64 v22; // rdx
  struct tagCURSOR *v23; // rax
  struct tagCURSOR *v24; // r14
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebp
  CursorApiRouter *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rax
  unsigned int CurrentCursorSize; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // esi
  __int64 UserSessionState; // rax

  v2 = a2;
  if ( !(_BYTE)a1 )
  {
    v42 = 32;
    v11 = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36324) != 1 )
      v42 = 0;
    UserSessionState = W32GetUserSessionState(v41, v40);
    CursorApiRouter::SetPointerShape(*(CursorApiRouter **)(UserSessionState + 36336), 0LL, v42, 0, 0);
    InputTraceLogging::Cursor::SetCursorImageNull(v2);
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928)
    || (v5 = W32GetUserSessionState(v4, v3),
        v6 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(v5 + 18928)),
        v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18928),
        *(int *)(v4 + 432) >= 0)
    || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v6), !(_BYTE)CurrentCursorFrame) )
  {
    v10 = W32GetUserSessionState(v4, v3);
    v11 = *(_QWORD *)(v10 + 19208) == 0LL ? 3 : 0;
    CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(-*(_QWORD *)(v10 + 19208), v12);
    if ( *((_QWORD *)CurrentCursorFrame + 2401) )
    {
      CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v14, v13);
      v16 = *((_QWORD *)CurrentCursorFrame + 2401);
      if ( *(int *)(v16 + 432) >= 0 )
      {
        CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v16, v15);
        v18 = *((_QWORD *)CurrentCursorFrame + 2401);
        if ( *(_QWORD *)(v18 + 424) )
        {
          CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v18, v17);
          v20 = *((_QWORD *)CurrentCursorFrame + 2488);
          if ( *(_DWORD *)(v20 + 1972) )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 19208) + 424LL);
            v23 = FixupCursorForMonitor((struct tagCURSOR *)v21, v22);
            CurrentCursorFrame = GetCurrentCursorFrame(v23);
            v24 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v25 = 16 * FCursorShadowed((struct _CURSINFO *)(v21 + 80));
              v30 = v25 | 0x20;
              if ( *(_DWORD *)(W32GetUserSessionState(v27, v26) + 36324) != 1 )
                v30 = v25;
              v31 = *(CursorApiRouter **)(W32GetUserSessionState(v29, v28) + 36336);
              if ( (unsigned int)IsRemoteConnection() )
                v34 = 0;
              else
                v34 = *(_DWORD *)(W32GetUserSessionState(v33, v32) + 16288);
              CursorApiRouter::SetPointerShape(v31, (struct tagCURSOR *)((char *)v24 + 80), v30, v34, 0x32u);
              v11 = 2;
              if ( (unsigned int)IsRemoteConnection() )
                v37 = 0;
              else
                v37 = *(_DWORD *)(W32GetUserSessionState(v36, v35) + 16288);
              v38 = W32GetUserSessionState(v36, v35);
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v38 + 36376));
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v24,
                                             v21,
                                             CurrentCursorSize,
                                             v2,
                                             v30,
                                             v37);
            }
          }
        }
      }
    }
    if ( v11 )
LABEL_24:
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v11);
  }
  return (char)CurrentCursorFrame;
}
