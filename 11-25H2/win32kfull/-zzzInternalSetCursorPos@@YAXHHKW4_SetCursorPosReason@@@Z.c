/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8
 * Callers:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x14005F190 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     EditionInternalSetCursorPos @ 0x1400601C0 (EditionInternalSetCursorPos.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     xxxUserResetDisplayDevice @ 0x140125400 (xxxUserResetDisplayDevice.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 *     zzzActiveCursorTracking @ 0x14028203C (zzzActiveCursorTracking.c)
 * Callees:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x1400607F0 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsCurrentDesktopComposed @ 0x140060BF0 (IsCurrentDesktopComposed.c)
 */

__int64 __fastcall zzzInternalSetCursorPos(__int64 a1, __int64 a2, int a3, char a4)
{
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  CCursorSizes *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const struct tagPOINT *v36; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v39[3]; // [rsp+40h] [rbp-18h] BYREF

  v39[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    LogicalToPhysicalDPIPoint(v39, v39, CurrentThreadDpiAwarenessContext, 0LL);
  }
  v5 = v39[0];
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19184) = v5;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 36240);
  v11 = W32GetUserSessionState(v10, v9) + 19184;
  UserSessionState = W32GetUserSessionState(v13, v12);
  CCursorClip::BoundPoint(v8, *(_QWORD *)(UserSessionState + 19184), 0LL, 1LL, v11);
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19184);
  v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19872);
  *(_QWORD *)(v20 + 4960) = v17;
  v22 = *(_QWORD *)(W32GetUserSessionState(v20, v21) + 36304);
  v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19872);
  v26 = *(_DWORD *)(v25 + 4964);
  v28 = *(_QWORD *)(W32GetUserSessionState(v25, v27) + 19872);
  LODWORD(v8) = *(_DWORD *)(v28 + 4960);
  v30 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v29) + 56968) + 48LL);
  InputTraceLogging::Cursor::Api::MovePointerAsync(v8, v26, 1u);
  CursorApiRouter::MovePointerImpl(v22, v30, (unsigned int)v8, v26, 1, 1, 0LL, 0LL);
  v33 = *(CCursorSizes **)(W32GetUserSessionState(v32, v31) + 36344);
  v36 = (const struct tagPOINT *)W32GetUserSessionState(v35, v34);
  CCursorSizes::zzzUpdateGlobalCursorSize(v33, v36 + 2398, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
