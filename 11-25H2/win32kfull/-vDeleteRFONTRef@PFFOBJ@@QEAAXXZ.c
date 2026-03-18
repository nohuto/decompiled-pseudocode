/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14001774C
 * Callers:
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x140017728 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400B9908 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401FCDC8 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     vKillRFONTList @ 0x140207388 (vKillRFONTList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x14030FB90 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14010C034 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x140160FD0 (GrepReleasePublicPFTSemaphoreEx.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // r15d
  HSEMAPHORE v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rdi
  __int64 v8; // r8
  char v9; // cl
  __int64 v10; // rax
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  int v18; // edx
  unsigned __int64 i; // rcx
  int v20; // eax
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  int v23; // edi
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-28h]

  v25 = 0LL;
  v26 = 0LL;
  v2 = 0;
  v3 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState() + 96) + 20344LL);
  GreAcquireSemaphoreInternal(v3);
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
  v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*v7 & 0x20000) == 0 )
    {
      v18 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v20 = i;
        if ( !_bittest64(&v8, i) )
          v20 = v18;
        v18 = v20;
      }
      if ( v20 > 17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v20, v8);
    }
    v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x19);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x19) = v9 + 1;
    if ( !v9 )
      *v7 |= 0x20000uLL;
  }
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v10 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 56LL)
    && !*(_DWORD *)(v10 + 60)
    && !*(_QWORD *)(v10 + 152)
    && !*(_DWORD *)(v10 + 68)
    && !*(_DWORD *)(v10 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v25);
    v2 = 1;
  }
  if ( v3 == (HSEMAPHORE)-2LL )
  {
    GrepReleasePublicPFTSemaphoreEx();
  }
  else if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v3);
    v11 = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v23 = W32GetCurrentWin32kSessionId(),
          v24 = PsGetCurrentThreadProcess(),
          v23 == (unsigned int)PsGetProcessSessionIdEx(v24)) )
    {
      v13 = (__int64 *)PsGetThreadWin32Thread(v11);
      if ( v13 )
        v12 = *v13;
    }
    v14 = v12 + 8;
    v15 = -v12;
    v16 = (_QWORD *)(v14 & -(__int64)(v15 != 0));
    if ( v16 )
    {
      if ( (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 0x19))-- == 1 )
        *v16 &= ~0x20000uLL;
      if ( !*v16 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v3);
  }
  if ( v2 && *((_QWORD *)&v25 + 1) && !v26 )
    (*(void (**)(void))(v25 + 3048))();
}
