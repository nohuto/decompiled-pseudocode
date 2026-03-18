/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x14009CDEC (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreGradientFill @ 0x1400A0CB0 (GreGradientFill.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007818C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1400786E8 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A1C4 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007AAA0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007E530 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400893A4 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A230 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14009B30C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140132150 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016CB84 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  int v4; // r15d
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DC *v13; // r10
  struct _GRETHREAD *v14; // rax
  struct _GRETHREAD *v15; // rbp
  __int64 v16; // rbx
  bool v18; // zf
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v4 = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = **(_QWORD **)a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 37, (HSURF *)this + 36, (unsigned int *)this + 29) )
    goto LABEL_33;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v5 = *((_QWORD *)a2 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x80000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 2) = *(_QWORD *)v5 + 624LL;
  GreAcquireSemaphoreShared<1,>(v6);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount()
    && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v5) )
  {
    GreAcquireSemaphoreShared<2,>(v5);
    v4 = 1;
  }
  v7 = *(_QWORD *)a2;
  v21 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (**(_DWORD **)(v7 + 976) & 1) != 0 || (*(_DWORD *)(v7 + 36) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v21) )
      goto LABEL_9;
    v7 = *(_QWORD *)a2;
  }
  v19 = *(_QWORD *)(v7 + 64);
  *(_QWORD *)this = v19;
  *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( v4 && v19 == *(_QWORD *)v5 + 1144LL )
  {
    GreReleaseSemaphoreShared<2,>((__int64 *)v5);
    v4 = 0;
  }
  if ( *(_QWORD *)this == *(_QWORD *)v5 + 1144LL )
  {
    *((_DWORD *)this + 28) |= 0x100000u;
    GreAcquireSemaphore<2,>(v5);
  }
  else
  {
    GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
  }
  v20 = *((_DWORD *)this + 28);
  if ( (v20 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
    *((_DWORD *)this + 28) = v20 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    CurrentThread = GreGetCurrentThread(v9, v8);
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreShared<3,>(v5);
  }
  if ( (unsigned int)DC::bInFullScreen(*(DC **)a2) )
  {
    v18 = (*((_DWORD *)this + 28) & 0x1000) == 0;
    goto LABEL_45;
  }
LABEL_14:
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0 )
    {
LABEL_43:
      v18 = *((_QWORD *)this + 2) == 0LL;
LABEL_45:
      if ( !v18 )
        GreReleaseSemaphoreShared<3,>((__int64 *)v5);
      if ( v4 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v5);
      goto LABEL_33;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0 && !DC::bCompute(*(DC **)a2) )
    goto LABEL_43;
LABEL_17:
  if ( !DC::prgnRao(*(DC **)a2) && !DC::prgnVisSnap(v13) )
  {
LABEL_33:
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  if ( (*((_DWORD *)v13 + 9) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_26;
    if ( !*((_QWORD *)this + 36) )
      DC::vSetRendering(v13);
    v14 = GreGetCurrentThread(v12, v11);
    v15 = v14;
    if ( v14 )
    {
      *((_QWORD *)v14 + 37) = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
      {
        *((_DWORD *)v14 + 86) |= 1u;
        *(_QWORD *)(*(_QWORD *)a2 + 1976LL) = 0LL;
        v16 = *(_QWORD *)v5;
        GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*(_QWORD *)v5 + 832LL));
        GrepAcquireLockValidate<14>();
        *((_DWORD *)v15 + 89) = *(_DWORD *)(v5 + 4280);
        GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v16 + 832);
      }
    }
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>((__int64 *)v5);
LABEL_26:
  if ( v4 )
    GreReleaseSemaphoreShared<2,>((__int64 *)v5);
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 0) )
    goto LABEL_33;
  if ( (*((_DWORD *)this + 28) & 0x81000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 120), **(HDC **)a2);
  return 1LL;
}
