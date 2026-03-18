/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140089CAC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14008AC84 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x14008B05C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x14008B6B8 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     GreDeleteSpriteDelayDelete @ 0x140322BC0 (GreDeleteSpriteDelayDelete.c)
 *     GreHintSpriteShapeDelayDelete @ 0x14032326C (GreHintSpriteShapeDelayDelete.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // r12d
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  HSEMAPHORE v6; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 *CurrentThreadNonPaged; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // r14d
  int v20; // r15d
  int v21; // eax
  int v22; // ebx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v25; // rcx
  int v26; // r8d
  int v27; // eax
  int v28; // r11d
  HDEV v29; // rcx
  int v30; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 62);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      EngUnlockSurface((SURFOBJ *)((v5 + 24) & -(__int64)(v5 != 0)));
      GreSelectRedirectionBitmap(*(HDC *)this, *((HSURF *)this + 265));
      *((_QWORD *)this + 265) = 0LL;
      *((_DWORD *)this + 9) &= ~0x40000u;
    }
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      v6 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals((Gre::Base *)v4) + 1040LL);
      GreAcquireSemaphoreInternal(v6);
      CurrentThread = KeGetCurrentThread();
      v8 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v8 = *ThreadWin32Thread;
      }
      v10 = (__int64 *)((v8 + 8) & -(__int64)(v8 != 0));
      if ( v10 )
      {
        v11 = *v10;
        if ( (*v10 & 0xFFFFFFFFFFFFFFC0uLL) != 0 && (v11 & 0x40) == 0 )
        {
          v25 = 0LL;
          v26 = 37;
          do
          {
            v27 = v25;
            if ( !_bittest64(&v11, v25) )
              v27 = v26;
            ++v25;
            v26 = v27;
          }
          while ( v25 < 0x40 );
          if ( v27 > 6 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v11, (unsigned int)v27);
        }
        v12 = *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xE);
        *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xE) = v12 + 1;
        if ( !v12 )
          *v10 |= 0x40uLL;
      }
      EngUnlockSurface((SURFOBJ *)((v5 + 24) & -(__int64)(v5 != 0)));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      if ( (*(_DWORD *)(v5 + 324))-- != 1 )
        goto LABEL_53;
      CurrentThreadNonPaged = (unsigned __int64 *)W32GetCurrentThreadNonPaged(v14, v13);
      if ( CurrentThreadNonPaged )
        v17 = *CurrentThreadNonPaged;
      else
        v17 = 0LL;
      v18 = (v17 + 8) & ((unsigned __int128)-(__int128)v17 >> 64);
      if ( v18 )
      {
        v19 = *(_DWORD *)(((v17 + 8) & ((unsigned __int128)-(__int128)v17 >> 64)) + 0x15C);
        *(_DWORD *)(((v17 + 8) & ((unsigned __int128)-(__int128)v17 >> 64)) + 0x15C) = 0;
        v20 = *(_DWORD *)(((v17 + 8) & ((unsigned __int128)-(__int128)v17 >> 64)) + 0x160);
        *(_DWORD *)(((v17 + 8) & ((unsigned __int128)-(__int128)v17 >> 64)) + 0x160) = 0;
      }
      else
      {
        v19 = v30;
        v20 = v30;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v28 = *(_DWORD *)(v5 + 488);
        v29 = *(HDEV *)(v5 + 328);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
          GreHintSpriteShapeDelayDelete(v29, v28, *(_DWORD *)(v5 + 492));
        else
          GreHintSpriteShape(v29, v28, *(_DWORD *)(v5 + 492), 0);
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState() + 96) + 4832LL));
      }
      v21 = *(_DWORD *)(v5 + 116);
      if ( (v21 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v21 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 496), *(HWND *)(v5 + 504), *(HSPRITE *)(v5 + 512));
        v1 = 1;
      }
      if ( v18 )
      {
        *(_DWORD *)(v18 + 348) = v19;
        *(_DWORD *)(v18 + 352) = v20;
      }
      if ( !v1 )
      {
LABEL_53:
        if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v22 = *(_DWORD *)(v5 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
          if ( v22 == 1 )
            bDeleteSurface(*(_QWORD *)v5);
        }
      }
      if ( v6 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Sprite", v6);
        GrepReleaseLockValidate<6>();
        GreReleaseSemaphoreExclusiveInternal(v6);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(HDC *)this, *((HSURF *)this + 265));
    *((_QWORD *)this + 265) = 0LL;
    *((_DWORD *)this + 9) &= ~0x40000u;
  }
}
