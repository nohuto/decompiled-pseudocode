/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000
 * Callers:
 *     NtUserDestroyCursor @ 0x140028CC0 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     DestroyClassSmIcon @ 0x14014FCA0 (DestroyClassSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x140152004 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x14015242C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x140152C84 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1402183FC (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x14021B7A0 (DestroyUnlockedCursor.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x140029334 (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400296A0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002980C (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002985C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  struct tagCURSOR *v2; // r12
  unsigned int v3; // r13d
  int v5; // esi
  int v6; // r14d
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagCURSOR *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagCURSOR *v23; // rax
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct tagCURSOR *v29; // rcx
  struct tagCURSOR *v30; // rax
  struct tagCURSOR *v31; // rdx
  int v32; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19792) )
  {
    v32 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 963LL);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19792) )
  {
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v32, a1);
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v11 = *((_QWORD *)a1 + 3);
  v12 = *((_QWORD *)CurrentLogicalCursorThread + 57);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
  {
    if ( (_BYTE)v32 )
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19800) = 0LL;
    return 1;
  }
  if ( !v3 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v14);
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    v26 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v26 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( *(_QWORD *)(_HMPkheFromObject(a1) + 8) == v26 )
    {
      v28 = *(_QWORD *)(W32GetUserGdiSessionState(v27) + 40);
      if ( PsGetCurrentProcess() == v28 )
        FixupGlobalCursor(a1, v12);
    }
    goto LABEL_11;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 && !v11 )
      goto LABEL_9;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)a1 + 20);
  if ( v11 )
  {
    if ( (v15 & 0x84) != 0 )
    {
LABEL_9:
      v5 = 1;
LABEL_13:
      v16 = 1LL;
      goto LABEL_14;
    }
    if ( v11 != v12 )
    {
      UserSetLastError(1435);
LABEL_27:
      v5 = 1;
      v16 = 1LL;
      v7 = 0;
      goto LABEL_14;
    }
LABEL_11:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  v16 = 1LL;
  v5 = 1;
  v7 = v15 & 1;
LABEL_14:
  if ( v2 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v6 = 1;
  if ( v5 )
  {
    if ( v6 )
    {
      v23 = a1;
      do
      {
        *((_QWORD *)v23 + 6) = a1;
        v23 = (struct tagCURSOR *)*((_QWORD *)v23 + 5);
      }
      while ( v23 );
    }
  }
  else
  {
    v18 = *(_QWORD *)(W32GetUserSessionState(v14, 1LL) + 36352);
    if ( v18 == *((_QWORD *)a1 + 6) )
    {
      *(_QWORD *)(W32GetUserSessionState(v18, v17) + 36352) = 0LL;
      *(_QWORD *)(W32GetUserSessionState(v22, v21) + 36360) = 0LL;
    }
    if ( v2 == a1 || v6 )
    {
      v19 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v19 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v19, v3);
      }
    }
    else
    {
      v29 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
      if ( v29 )
      {
        while ( 1 )
        {
          v30 = (struct tagCURSOR *)*((_QWORD *)v29 + 5);
          v31 = v29;
          v29 = v30;
          if ( v30 == a1 )
            break;
          if ( !v30 )
            goto LABEL_43;
        }
        *((_QWORD *)v31 + 5) = *((_QWORD *)a1 + 5);
      }
LABEL_43:
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject(a1);
    DestroyEmptyCursorObject(a1);
  }
  if ( (_BYTE)v32 )
    *(_QWORD *)(W32GetUserSessionState(v14, v16) + 19800) = 0LL;
  return v7;
}
