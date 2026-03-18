/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4
 * Callers:
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140013E20 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140071CD0 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007482C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9834 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB2EC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB930 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct _ERESOURCE ***a2)
{
  int v4; // r15d
  struct _ERESOURCE **v5; // rsi
  struct _ERESOURCE **v6; // rcx
  struct _ERESOURCE **v7; // rdx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v9; // r8
  DC *v10; // r10
  struct _GRETHREAD *v11; // rax
  struct _GRETHREAD *v12; // rbp
  struct _ERESOURCE *v13; // rbx
  bool v15; // zf
  struct _ERESOURCE *v16; // r8
  int v17; // edx
  struct _ERESOURCE *v18; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 18) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = **a2;
  if ( !TrapAppContainerRenderingWorker(
          (struct XDCOBJ *)a2,
          (HSURF *)this + 38,
          (HSURF *)this + 37,
          (unsigned int *)this + 19) )
  {
LABEL_39:
    *((_DWORD *)this + 18) &= ~1u;
    return 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  v5 = a2[2];
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x80000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  v6 = a2[2];
  *((_QWORD *)this + 2) = *v5 + 6;
  GreAcquireSemaphoreShared<1,>(v6);
  *((_DWORD *)this + 18) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v5) )
  {
    GreAcquireSemaphoreShared<2,>(v5);
    v4 = 1;
  }
  v7 = *a2;
  v18 = (*a2)[6];
  if ( ((__int64)v7[122]->SystemResourcesList.Flink & 1) != 0 || (*((_DWORD *)v7 + 9) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      goto LABEL_9;
    v7 = *a2;
  }
  v16 = v7[8];
  *(_QWORD *)this = v16;
  *((_QWORD *)this + 3) = (*a2)[6];
  if ( v4 && v16 == &(*v5)[11] )
  {
    GreReleaseSemaphoreShared<2,>(v5);
    v4 = 0;
  }
  if ( *(struct _ERESOURCE **)this == &(*v5)[11] )
  {
    *((_DWORD *)this + 18) |= 0x100000u;
    GreAcquireSemaphore<2,>((__int64 *)v5);
  }
  else
  {
    GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
  }
  v17 = *((_DWORD *)this + 18);
  if ( (v17 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 18) = v17 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x1000u;
    CurrentThread = GreGetCurrentThread();
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreShared<3,>(v5);
  }
  if ( DC::bInFullScreen((DC *)*a2) )
  {
    v15 = (*((_DWORD *)this + 18) & 0x1000) == 0;
LABEL_35:
    if ( !v15 )
      GreReleaseSemaphoreShared<3,>((__int64 *)v5);
    if ( v4 )
      GreReleaseSemaphoreShared<2,>(v5);
    goto LABEL_39;
  }
LABEL_14:
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
LABEL_47:
      v15 = *((_QWORD *)this + 2) == 0LL;
      goto LABEL_35;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_17;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !DC::bCompute((DC *)*a2) )
    goto LABEL_47;
LABEL_17:
  if ( !DC::prgnRao((DC *)*a2) && !DC::prgnVisSnap(v10) )
    goto LABEL_39;
  if ( (*((_DWORD *)v10 + 9) & 0x200) != 0 && (*((_DWORD *)this + 18) & 0x1000) != 0 )
  {
    if ( !*((_QWORD *)this + 37) )
      DC::vSetRendering(v10);
    v11 = GreGetCurrentThread();
    v12 = v11;
    if ( v11 )
    {
      *((_QWORD *)v11 + 37) = *a2;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *((_DWORD *)v11 + 84) |= 1u;
        (*a2)[247] = 0LL;
        v13 = *v5;
        GreAcquireSemaphoreSharedInternal((HSEMAPHORE)&(*v5)[8]);
        GrepAcquireLockValidate<14>();
        *((_DWORD *)v12 + 87) = *((_DWORD *)v5 + 1098);
        GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)&v13[8]);
      }
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>((__int64 *)v5);
  if ( v4 )
    GreReleaseSemaphoreShared<2,>(v5);
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0
    && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0LL) )
  {
    goto LABEL_39;
  }
  if ( (*((_DWORD *)this + 18) & 0x81000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 80), (HDC)**a2, v9);
  return 1LL;
}
