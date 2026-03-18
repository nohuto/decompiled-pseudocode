/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x14001CDA0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(struct _ERESOURCE **this, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = *this;
  if ( *this )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)this,
        (unsigned int)&LockRelease,
        a3,
        (unsigned int)*this,
        (__int64)L"GreLock");
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v6 = *ThreadWin32Thread;
    }
    v8 = v6 + 8;
    v9 = -v6;
    if ( (v8 & -(__int64)(v9 != 0)) != 0 && (*(_BYTE *)((v8 & -(__int64)(v9 != 0)) + 0xA))-- == 1 )
      *(_QWORD *)(v8 & -(__int64)(v9 != 0)) &= ~4uLL;
    GreReleaseSemaphoreSharedInternal(v3);
    *this = 0LL;
  }
}
