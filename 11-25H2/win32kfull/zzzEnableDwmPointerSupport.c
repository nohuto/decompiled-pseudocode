/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x140122C1C
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     PowerOnGdi @ 0x1401257F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GreDwmHasSoftwareCursor @ 0x140123660 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140123744 (GreDwmEnableSoftwareCursorRendering.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

void __fastcall zzzEnableDwmPointerSupport(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int HasSoftwareCursor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  BOOL v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rax

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70600);
  v7 = W32GetUserSessionState(v6, v5);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v7 + 56968) + 48LL));
  v10 = W32GetUserSessionState(v9, v8);
  GreLockPointer(*(_QWORD *)(*(_QWORD *)(v10 + 56968) + 48LL));
  v13 = W32GetUserSessionState(v12, v11);
  GreLockSprite(*(_QWORD *)(*(_QWORD *)(v13 + 56968) + 48LL));
  v16 = W32GetUserSessionState(v15, v14);
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL), 0LL);
  if ( !v2 || HasSoftwareCursor || v3 )
  {
    if ( HasSoftwareCursor == v3 )
    {
      v22 = 0;
    }
    else
    {
      SetPointerInternal(0LL, 6LL);
      v22 = 1;
      *(_DWORD *)(W32GetUserSessionState(v21, v20) + 36292) = 0;
    }
    v23 = W32GetUserSessionState(v19, v18);
    GreDwmEnableSoftwareCursorRendering(*(_QWORD *)(*(_QWORD *)(v23 + 56968) + 48LL), v3);
    if ( v22 )
    {
      v24 = *(_DWORD *)(W32GetUserSessionState(v19, v18) + 36288) > 0;
      v27 = W32GetUserSessionState(v26, v25);
      LOBYTE(v28) = 1;
      *(_DWORD *)(v27 + 36292) = v24;
      SetPointerInternal(v28, 6LL);
      if ( !v2 )
      {
        v36 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19872);
        v37 = *(_DWORD *)(v36 + 4964);
        v39 = W32GetUserSessionState(v36, v38);
        zzzInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(v39 + 19872) + 4960LL), v37, 2, 0);
      }
    }
  }
  v29 = W32GetUserSessionState(v19, v18);
  GreUnlockSprite(*(_QWORD *)(*(_QWORD *)(v29 + 56968) + 48LL));
  v32 = W32GetUserSessionState(v31, v30);
  GreUnlockPointer(*(_QWORD *)(*(_QWORD *)(v32 + 56968) + 48LL));
  v35 = W32GetUserSessionState(v34, v33);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v35 + 56968) + 48LL));
  zzzEndDeferWinEventNotify();
}
