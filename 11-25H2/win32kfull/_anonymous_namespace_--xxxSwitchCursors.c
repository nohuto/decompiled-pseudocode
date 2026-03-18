/*
 * XREFs of _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401240BC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140124150 (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 */

char __fastcall anonymous_namespace_::xxxSwitchCursors(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int CursorSuppressionConfig; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx

  v2 = a2;
  v3 = a1;
  v4 = 0;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36312) + 88LL) = a1;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 36312) + 92LL) = v3 == 0;
  if ( v3 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v8 = *(unsigned int *)UPDWORDPointer(8222LL);
    if ( v2 )
    {
      if ( (v8 & 0x20) == 0 || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36312), *(_DWORD *)(v8 + 96)) )
      {
        v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36340);
        UserSessionState = W32GetUserSessionState(v11, v10);
        v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36340) - 1);
        if ( *(_DWORD *)(UserSessionState + 36340) != 1 )
        {
          v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36340) - 2);
          if ( *(_DWORD *)(UserSessionState + 36340) != 2 )
          {
            v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36340) - 3);
            if ( *(_DWORD *)(UserSessionState + 36340) != 3 )
            {
              v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36340) - 4);
              if ( *(_DWORD *)(UserSessionState + 36340) != 4 )
              {
                if ( *(_DWORD *)(UserSessionState + 36340) != 5 && *(_DWORD *)(UserSessionState + 36340) != 6 )
                {
                  v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36340) - 8);
                  if ( *(_DWORD *)(UserSessionState + 36340) != 8 )
                  {
                    if ( *(_DWORD *)(UserSessionState + 36340) == 9 )
                    {
                      CursorSuppressionConfig = ReadCursorSuppressionConfig();
                      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 36340) = CursorSuppressionConfig;
                      LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36340) == 0;
                      SetPointerMetaVisibility(v4);
                    }
                    goto LABEL_9;
                  }
                }
                SetPointerMetaVisibility(0LL);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v13, v14) + 36340) = 3;
LABEL_9:
        v16 = W32GetUserSessionState(v13, v15);
        return InputTraceLogging::Cursor::SetCursorSuppression(v9, 3LL, *(unsigned int *)(v16 + 36340));
      }
    }
    v18 = W32GetUserSessionState(v8, v7);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v18 + 36304), 1u);
    return anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors();
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    v21 = W32GetUserSessionState(v20, v19);
    return CursorApiRouter::HidePointer(*(CursorApiRouter **)(v21 + 36304), 1u);
  }
}
