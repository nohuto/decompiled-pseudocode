/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserDestroyCursor @ 0x14007AAF0 (NtUserDestroyCursor.c)
 *     DestroyClassSmIcon @ 0x1400B3A20 (DestroyClassSmIcon.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x140125EE8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1401D1E64 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1401E8700 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1401EB5D0 (DestroyUnlockedCursor.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14005FD1C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14007A83C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400C7A00 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401850D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x14019C46C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1401AF164 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall _DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  struct tagCURSOR *v2; // r12
  unsigned int v3; // r13d
  int v5; // esi
  int v6; // r14d
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  struct tagCURSOR *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct tagCURSOR *v28; // rcx
  int v29; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760) )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 963LL);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19760) )
  {
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v29, a1);
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(v12, v11);
  v14 = *((_QWORD *)a1 + 3);
  v15 = *((_QWORD *)CurrentLogicalCursorThread + 58);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v29);
    return 1;
  }
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !v14 )
      {
        v5 = 1;
        v7 = *((_DWORD *)a1 + 20) & 1;
        goto LABEL_25;
      }
      if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
      {
LABEL_11:
        v5 = 1;
        goto LABEL_25;
      }
      if ( v14 != v15 )
      {
        UserSetLastError(1435);
LABEL_23:
        v5 = 1;
        v7 = 0;
        goto LABEL_25;
      }
    }
    else if ( v3 == 2 && !v14 )
    {
      goto LABEL_11;
    }
  }
  else
  {
    UserGdiSessionState = W32GetUserGdiSessionState();
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    v19 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v19 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( *(_QWORD *)(_HMPkheFromObject(a1) + 8) == v19 )
    {
      v20 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
      if ( PsGetCurrentProcess() == v20 )
        FixupGlobalCursor(a1, v15);
    }
  }
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    goto LABEL_23;
  *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_25:
  if ( v2 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v6 = 1;
  if ( v5 )
  {
    if ( v6 )
    {
      v21 = a1;
      do
      {
        *((_QWORD *)v21 + 6) = a1;
        v21 = (struct tagCURSOR *)*((_QWORD *)v21 + 5);
      }
      while ( v21 );
    }
  }
  else
  {
    v23 = *(_QWORD *)(W32GetUserSessionState(v16, 1LL) + 36320);
    if ( v23 == *((_QWORD *)a1 + 6) )
    {
      *(_QWORD *)(W32GetUserSessionState(v23, v22) + 36320) = 0LL;
      *(_QWORD *)(W32GetUserSessionState(v25, v24) + 36328) = 0LL;
    }
    if ( v2 == a1 || v6 )
    {
      v28 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v28 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v28, v3);
      }
    }
    else
    {
      v26 = *((_QWORD *)a1 + 6);
      while ( v26 )
      {
        v27 = v26;
        v26 = *(_QWORD *)(v26 + 40);
        if ( (struct tagCURSOR *)v26 == a1 )
        {
          *(_QWORD *)(v27 + 40) = *((_QWORD *)a1 + 5);
          break;
        }
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject(a1);
    DestroyEmptyCursorObject(a1);
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v29);
  return v7 != 0;
}
