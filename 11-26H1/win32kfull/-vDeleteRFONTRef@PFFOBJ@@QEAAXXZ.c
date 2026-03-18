/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     vKillRFONTList @ 0x140327774 (vKillRFONTList.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x140328240 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BB@@@YAXXZ @ 0x1400C693C (--$GrepAcquireLockValidate@$0BB@@@YAXXZ.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1400D3914 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x140166A90 (GrepReleasePublicPFTSemaphoreEx.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v5; // r14d
  HSEMAPHORE v6; // rbx
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]

  v3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v6 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20320LL);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<17>();
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v7 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v7 + 152) && !*(_DWORD *)(v7 + 68) && !*(_DWORD *)(v7 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v17);
    v3 = v18;
    v5 = 1;
  }
  if ( v6 == (HSEMAPHORE)-2LL )
  {
    GrepReleasePublicPFTSemaphoreEx();
  }
  else if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v6);
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    v11 = v9 + 8;
    v12 = -v9;
    v13 = (_QWORD *)(v11 & -(__int64)(v12 != 0));
    if ( v13 )
    {
      if ( (*(_BYTE *)((v11 & -(__int64)(v12 != 0)) + 0x19))-- == 1 )
        *v13 &= ~0x20000uLL;
      if ( !*v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v6);
  }
  if ( v5 && *((_QWORD *)&v17 + 1) && !v3 )
    (*(void (**)(void))(v17 + 3048))();
}
