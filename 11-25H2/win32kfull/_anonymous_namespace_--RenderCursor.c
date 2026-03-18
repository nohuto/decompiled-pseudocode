/*
 * XREFs of _anonymous_namespace_::RenderCursor @ 0x14005E7DC
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x14005EC10 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::MoveCursor @ 0x14005EEF0 (_anonymous_namespace_--MoveCursor.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401240BC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 */

__int64 __fastcall anonymous_namespace_::RenderCursor(unsigned int *a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  int CursorSuppressionConfig; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // edx
  int v54; // edx
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax

  v3 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36312) + 80LL) )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36340) != 3 )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36312);
      if ( *(_DWORD *)(v8 + 88) || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36312), !*(_DWORD *)(v8 + 92)) )
        v3 = 1;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36340) == 1
      || *(_DWORD *)(W32GetUserSessionState(v10, v9) + 36340) == 5 )
    {
      goto LABEL_13;
    }
    v12 = *(_DWORD *)(W32GetUserSessionState(v10, v11) + 36340);
    v15 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v14, v13) + 36340) - 1);
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        v15 = (unsigned int)(v15 - 1);
        if ( (_DWORD)v15 )
        {
          v15 = (unsigned int)(v15 - 1);
          if ( (_DWORD)v15 )
          {
            v21 = v15 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v17 = (unsigned int)(v22 - 2);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 1 )
                  {
                    CursorSuppressionConfig = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v25, v24) + 36340) = CursorSuppressionConfig;
                    UserSessionState = W32GetUserSessionState(v27, v26);
                    SetPointerMetaVisibility(*(_DWORD *)(UserSessionState + 36340) == 0);
                  }
                  goto LABEL_12;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v43 = W32GetUserSessionState(v42, v41);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v43 + 36304), 1);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v16, v15) + 36340) = 2;
LABEL_12:
    v18 = W32GetUserSessionState(v16, v17);
    InputTraceLogging::Cursor::SetCursorSuppression(v12, 2LL, *(unsigned int *)(v18 + 36340));
LABEL_13:
    UserSessionSwitchLeaveCrit(v10);
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 36312) + 80LL) = 1;
  }
  anonymous_namespace_::MoveCursor((struct tagPOINT *)(a1 + 1));
  if ( v3 )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v36, v35) + 36340) != 1
      && *(_DWORD *)(W32GetUserSessionState(v38, v37) + 36340) != 5 )
    {
      TransitionCursorSuppressionState(8LL);
    }
    v39 = W32GetUserSessionState(v38, v37);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v39 + 36304), 0);
    UserSessionSwitchLeaveCrit(v40);
  }
  result = *a1;
  if ( (result & 2) == 0 )
  {
    EnterCrit(1LL, 0LL);
    v32 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 36312);
    if ( !*(_DWORD *)(v32 + 88) )
    {
      v32 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 36312);
      if ( !*(_DWORD *)(v32 + 92) )
        goto LABEL_25;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v32, v31) + 36340) == 1
      || *(_DWORD *)(W32GetUserSessionState(v32, v44) + 36340) == 5 )
    {
      goto LABEL_25;
    }
    v46 = *(_DWORD *)(W32GetUserSessionState(v32, v45) + 36340);
    v49 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v48, v47) + 36340) - 1);
    if ( (_DWORD)v49 )
    {
      v49 = (unsigned int)(v49 - 1);
      if ( (_DWORD)v49 )
      {
        v49 = (unsigned int)(v49 - 1);
        if ( (_DWORD)v49 )
        {
          v49 = (unsigned int)(v49 - 1);
          if ( (_DWORD)v49 )
          {
            v53 = v49 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( v54 )
              {
                v51 = (unsigned int)(v54 - 2);
                if ( (_DWORD)v51 )
                {
                  if ( (_DWORD)v51 == 1 )
                  {
                    v55 = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v57, v56) + 36340) = v55;
                    v60 = W32GetUserSessionState(v59, v58);
                    SetPointerMetaVisibility(*(_DWORD *)(v60 + 36340) == 0);
                  }
                  goto LABEL_37;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v63 = W32GetUserSessionState(v62, v61);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v63 + 36304), 1);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v50, v49) + 36340) = 2;
LABEL_37:
    v52 = W32GetUserSessionState(v50, v51);
    InputTraceLogging::Cursor::SetCursorSuppression(v46, 2LL, *(unsigned int *)(v52 + 36340));
LABEL_25:
    UserSessionSwitchLeaveCrit(v32);
    result = W32GetUserSessionState(v34, v33);
    *(_DWORD *)(*(_QWORD *)(result + 36312) + 80LL) = 0;
  }
  return result;
}
