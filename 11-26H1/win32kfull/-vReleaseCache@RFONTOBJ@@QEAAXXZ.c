/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x140070268 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1401BB23C (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  void *v2; // rcx
  HSEMAPHORE v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v2 = *(void **)(*(_QWORD *)this + 616LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
  }
  v3 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
  EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v3);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  v9 = (_QWORD *)(v7 & -(__int64)(v8 != 0));
  if ( v9 )
  {
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xD))-- == 1 )
      *v9 &= ~0x20uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v3);
}
