/*
 * XREFs of ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A7B8C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     DxgkEngReleaseStableSprite @ 0x1401A7B00 (DxgkEngReleaseStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleaseSemaphoreShared<6,>(__int64 *a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"Sprite", *a1 + 1040);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v4),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v6 = v3 + 8;
  v7 = -v3;
  v8 = (_QWORD *)(v6 & -(__int64)(v7 != 0));
  if ( v8 )
  {
    if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0xE))-- == 1 )
      *v8 &= ~0x40uLL;
    if ( !*v8 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 1040));
}
