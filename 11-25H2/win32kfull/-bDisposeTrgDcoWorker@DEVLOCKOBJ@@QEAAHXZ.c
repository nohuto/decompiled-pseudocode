/*
 * XREFs of ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14008AC84
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x14008A850 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14008B1E4 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026D2C4 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDcoWorker(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rsi
  __int64 v2; // rbx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  SURFACE *v7; // rcx
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  XDCOBJ *v10; // rcx
  __int64 v11; // rdx
  HSEMAPHORE v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v21; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  v2 = *((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 105) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *(_QWORD *)(v2 + 48);
    if ( (v4 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 105) )
      {
        if ( (v4 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v4 = *((_DWORD *)this + 6);
        }
        if ( (v4 & 0x2000) != 0 )
        {
          bUnHookBmpDrv(v1);
          *((_DWORD *)this + 6) &= ~0x2000u;
          v4 = *((_DWORD *)this + 6);
        }
        v6 = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 && *((_BYTE *)v1 + 73) && (v4 & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(v6 + 44) & 1) == 0 )
          {
            v7 = *(SURFACE **)(v6 + 496);
            if ( v7 )
              SURFACE::bUnMap(v7);
          }
          *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~1u;
          v8 = *((_QWORD *)this + 4);
          if ( _bittest((const signed __int32 *)(v8 + 36), 0xEu) && *(_QWORD *)(v8 + 472) && *(_DWORD *)(v8 + 488) )
            GrepUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x40000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v5 + 2544));
      }
      v9 = (Gre::Base *)*((_QWORD *)this + 4);
      if ( v9
        && *((_BYTE *)this + 105)
        && _bittest((const signed __int32 *)this + 6, 0xCu)
        && (*((_DWORD *)v9 + 9) & 0x200) != 0 )
      {
        v13 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v9) + 728LL);
        GreAcquireSemaphoreSharedInternal(v13);
        GrepAcquireLockValidate<3>();
        if ( !*((_QWORD *)this + 14) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( !_bittest((const signed __int32 *)(*((_QWORD *)this + 4) + 36LL), 0xEu) )
        {
          CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v15, v14);
          v17 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
          v18 = v17 + 8;
          v19 = -v17;
          if ( (v18 & -(__int64)(v19 != 0)) != 0 )
            *(_DWORD *)((v18 & -(__int64)(v19 != 0)) + 0x158) &= ~1u;
        }
        EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v13);
        CurrentThread = KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v21 = *ThreadWin32Thread;
        }
        v23 = v21 + 8;
        v24 = -v21;
        v25 = (_QWORD *)(v23 & -(__int64)(v24 != 0));
        if ( v25 )
        {
          if ( (*(_BYTE *)((v23 & -(__int64)(v24 != 0)) + 0xB))-- == 1 )
            *v25 &= ~8uLL;
          if ( !*v25 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreSharedInternal(v13);
      }
    }
    v10 = (DEVLOCKOBJ *)((char *)this + 32);
    v11 = *((_QWORD *)this + 4);
    if ( v11 && *((_BYTE *)this + 104) )
    {
      *(_DWORD *)(v11 + 40) &= ~2u;
      *((_BYTE *)this + 104) = 0;
    }
    if ( *(_QWORD *)v10 )
      XDCOBJ::vUnlockFast(v10);
    *((_QWORD *)this + 4) = 0LL;
  }
  return 1LL;
}
