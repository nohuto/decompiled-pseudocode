/*
 * XREFs of TransitionCursorSuppressionState @ 0x140123E50
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401240BC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 *     DeferCursorSuppressionOperation @ 0x1401253AC (DeferCursorSuppressionOperation.c)
 */

__int64 __fastcall TransitionCursorSuppressionState(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int CursorSuppressionConfig; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36340);
  UserSessionState = W32GetUserSessionState(v6, v5);
  switch ( *(_DWORD *)(UserSessionState + 36340) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      switch ( v3 )
      {
        case 1u:
          goto LABEL_31;
        case 2u:
          goto LABEL_24;
        case 3u:
          goto LABEL_7;
      }
      if ( v3 != 8 )
        break;
      if ( v2 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36340) = 4;
        goto LABEL_26;
      }
      zzzEnableDwmPointerSupport(1LL, 1LL);
      v20 = W32GetUserSessionState(v19, v18);
      CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36304), 0);
      goto LABEL_18;
    case 5:
    case 6:
    case 8:
      if ( v3 != 8 )
      {
        if ( v3 == 2 )
        {
          if ( v2 )
          {
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36340) = 6;
LABEL_26:
            DeferCursorSuppressionOperation();
            break;
          }
          zzzEnableDwmPointerSupport(0LL, 1LL);
          v23 = W32GetUserSessionState(v22, v21);
          CursorApiRouter::HidePointer(*(CursorApiRouter **)(v23 + 36304), 1u);
LABEL_24:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36340) = 2;
          break;
        }
        if ( v3 == 1 )
        {
          if ( v2 )
          {
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36340) = 5;
            goto LABEL_26;
          }
          SetPointerMetaVisibility(0LL);
LABEL_31:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36340) = 1;
          break;
        }
        if ( v3 != 3 )
          break;
        if ( v2 )
        {
          *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36340) = 7;
          goto LABEL_26;
        }
        SetPointerMetaVisibility(0LL);
LABEL_7:
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36340) = 3;
        break;
      }
LABEL_18:
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36340) = 8;
      break;
    case 9:
      CursorSuppressionConfig = ReadCursorSuppressionConfig();
      *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36340) = CursorSuppressionConfig;
      v17 = W32GetUserSessionState(v16, v15);
      SetPointerMetaVisibility(*(_DWORD *)(v17 + 36340) == 0);
      break;
  }
  v10 = W32GetUserSessionState(v9, v8);
  return InputTraceLogging::Cursor::SetCursorSuppression(v4, v3, *(unsigned int *)(v10 + 36340));
}
