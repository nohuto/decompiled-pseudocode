/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14006F670 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x140071F20 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x140189A40 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1400151B0 (GreSelectRedirectionBitmap.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreDeleteSpriteDelayDelete @ 0x140344DC0 (GreDeleteSpriteDelayDelete.c)
 *     GreHintSpriteShapeDelayDelete @ 0x140345484 (GreHintSpriteShapeDelayDelete.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // edi
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  HSEMAPHORE v7; // rbp
  __int64 v8; // rcx
  bool v9; // zf
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r14d
  int v14; // r15d
  int v15; // eax
  int v16; // ebx
  SURFOBJ *v17; // rcx
  int v18; // edx
  int v19; // r10d
  HDEV v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+70h] [rbp+8h]

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
      v17 = (SURFOBJ *)(v5 + 24);
      if ( !v5 )
        v17 = 0LL;
      EngUnlockSurface(v17);
      GreSelectRedirectionBitmap(*(Gre::Base **)this, *((HSURF *)this + 268));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 268) = 0LL;
    }
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      v6 = Gre::Base::Globals((Gre::Base *)v4);
      v7 = (HSEMAPHORE)(*(_QWORD *)v6 + 1040LL);
      GreAcquireSemaphoreInternal(v7);
      GrepAcquireLockValidate<6>();
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      v9 = (*(_DWORD *)(v5 + 324))-- == 1;
      if ( !v9 )
        goto LABEL_40;
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v8);
      v11 = 0LL;
      if ( !CurrentThreadWin32Thread )
        goto LABEL_29;
      v9 = *CurrentThreadWin32Thread == 0LL;
      v12 = *CurrentThreadWin32Thread + 8LL;
      if ( !v9 )
        v11 = v12;
      if ( v11 )
      {
        v13 = *(_DWORD *)(v11 + 340);
        v14 = *(_DWORD *)(v11 + 344);
        *(_QWORD *)(v11 + 340) = 0LL;
      }
      else
      {
LABEL_29:
        v14 = v24;
        v13 = v24;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v18 = *(_DWORD *)(v5 + 492);
        v19 = *(_DWORD *)(v5 + 488);
        v20 = *(HDEV *)(v5 + 328);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
          GreHintSpriteShapeDelayDelete(v20, *(HWND *)(v5 + 336), *(HBITMAP *)(v5 + 344), v19, v18);
        else
          GreHintSpriteShape(v20, v19, v18, 0);
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v22, v21, v23) + 96) + 4824LL));
      }
      v15 = *(_DWORD *)(v5 + 116);
      if ( (v15 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v15 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 496), *(HWND *)(v5 + 504), *(void **)(v5 + 512));
        v1 = 1;
      }
      if ( v11 )
      {
        *(_DWORD *)(v11 + 340) = v13;
        *(_DWORD *)(v11 + 344) = v14;
      }
      if ( !v1 )
      {
LABEL_40:
        if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v16 = *(_DWORD *)(v5 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
          if ( v16 == 1 )
            bDeleteSurface(v6, *(HSURF *)v5);
        }
      }
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Sprite", v7);
        GrepReleaseLockValidate<6>();
        GreReleaseSemaphoreExclusiveInternal(v7);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(Gre::Base **)this, *((HSURF *)this + 268));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 268) = 0LL;
  }
}
