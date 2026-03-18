/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570
 * Callers:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140013E20 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140071CD0 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007482C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9834 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB2EC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB930 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400BBED4 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14018CF90 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?SetSurfaceEff@XDCOBJ@@QEAA_NPEAVSURFACE@@@Z @ 0x1401C3278 (-SetSurfaceEff@XDCOBJ@@QEAA_NPEAVSURFACE@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401D02B8 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14027D524 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct _ERESOURCE ***a2, struct XDCOBJ *a3)
{
  HSURF *v3; // rbx
  HSURF *v5; // rsi
  int v9; // ebx
  int v10; // ebp
  struct _ERESOURCE **v11; // rsi
  struct _ERESOURCE **v12; // rcx
  __int64 v13; // rdx
  struct _ERESOURCE **v14; // r9
  int v15; // r10d
  int v16; // r8d
  int v17; // eax
  struct SURFACE *v18; // rax
  unsigned int v19; // r8d
  struct _ERESOURCE **v20; // rdx
  DC *v21; // r10
  __int64 v22; // r8
  DC *v23; // r10
  struct _GRETHREAD *v24; // rax
  struct _GRETHREAD *v25; // r13
  struct _ERESOURCE *v26; // rbx
  DC *v27; // rcx
  unsigned __int64 v28; // rcx
  int v29; // eax
  struct _GRETHREAD *v30; // rax
  bool v31; // zf
  unsigned __int64 v32; // rax
  int v33; // ebx
  int v34; // eax
  __int64 v35; // r8
  HDC v36; // rdx
  struct _ERESOURCE **v37; // rdx
  __int64 v38; // r8
  struct _GRETHREAD *v39; // rax
  struct _GRETHREAD *CurrentThread; // rax
  struct _ERESOURCE *v41; // r9
  int v42; // edx
  struct _ERESOURCE *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  signed __int32 v46[18]; // [rsp+0h] [rbp-48h] BYREF
  struct _ERESOURCE *v47; // [rsp+50h] [rbp+8h] BYREF

  v3 = (HSURF *)((char *)this + 320);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v5 = (HSURF *)((char *)this + 328);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 39) = **a2;
  *((_QWORD *)this + 42) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(
          (struct XDCOBJ *)a2,
          (HSURF *)this + 38,
          (HSURF *)this + 37,
          (unsigned int *)this + 19)
    || !TrapAppContainerRenderingWorker(a3, v5, v3, 0LL) )
  {
    goto LABEL_2;
  }
  *((_QWORD *)this + 10) = 0LL;
  v9 = 1;
  *((_QWORD *)this + 23) = 0LL;
  v10 = 0;
  v11 = a2[2];
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 || *a2 && (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    v12 = a2[2];
    *((_QWORD *)this + 2) = *v11 + 6;
    GreAcquireSemaphoreShared<1,>(v12);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v11) )
    {
      GreAcquireSemaphoreShared<2,>(v11);
      v10 = 1;
    }
    v13 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      goto LABEL_17;
    v14 = *a2;
    if ( *a2 )
    {
      v15 = *((_DWORD *)v14 + 9);
      v16 = *(_DWORD *)(v13 + 36);
      if ( ((v16 ^ v15) & 0x200) != 0 )
      {
        if ( (**(_BYTE **)(v13 + 976) & 1) != 0 && (v15 & 0x8000) != 0
          || ((__int64)v14[122]->SystemResourcesList.Flink & 1) != 0 && (*(_DWORD *)(v13 + 36) & 0x8000) != 0 )
        {
          goto LABEL_16;
        }
      }
      else if ( (v15 & v16 & 0x8200) == 0x8200 )
      {
        goto LABEL_16;
      }
      v9 = 0;
    }
LABEL_16:
    v47 = *(struct _ERESOURCE **)(v13 + 48);
    v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v47);
LABEL_17:
    if ( *a2 )
    {
      v47 = (*a2)[6];
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v47);
    }
  }
  v17 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v17 & 0x200) != 0 )
  {
    if ( (v17 & 0x8000) == 0 || !v9 )
    {
      v43 = *(struct _ERESOURCE **)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v43;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      if ( v10 && v43 == &(*v11)[11] )
      {
        GreReleaseSemaphoreShared<2,>((__int64 *)v11);
        v10 = 0;
      }
      if ( *((struct _ERESOURCE **)this + 1) == &(*v11)[11] )
      {
        *((_DWORD *)this + 18) |= 0x200000u;
        GreAcquireSemaphore<2,>((__int64 *)v11);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
    }
    if ( (!*a2 || (*((_DWORD *)*a2 + 9) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread )
      {
        *((_QWORD *)CurrentThread + 38) = 0LL;
        *((_QWORD *)CurrentThread + 37) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v11);
    }
    if ( DC::bInFullScreen(*(DC **)a3) )
    {
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>((__int64 *)v11);
      *((_DWORD *)this + 18) &= ~1u;
      if ( v10 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v11);
      return 0LL;
    }
  }
  v18 = XDCOBJ::pSurfaceEff(a3);
  *((_DWORD *)this + 18) ^= (*((_DWORD *)this + 18) ^ ((unsigned int)SrcSurfaceAccessCheck(v18) << 22)) & 0x400000;
  v19 = *((_DWORD *)this + 18) & 0xFF7FFFFF | ~(*((_DWORD *)XDCOBJ::pSurfaceEff(a3) + 28) >> 5) & 0x800000;
  *((_DWORD *)this + 18) = v19;
  v20 = *a2;
  if ( *a2 )
  {
    v29 = *((_DWORD *)v20 + 9);
    if ( (v29 & 0x200) == 0 )
      goto LABEL_63;
    if ( (v29 & 0x8000) == 0 || !v9 )
    {
      v41 = v20[8];
      *(_QWORD *)this = v41;
      *((_QWORD *)this + 3) = (*a2)[6];
      if ( v10 && v41 == &(*v11)[11] )
      {
        GreReleaseSemaphoreShared<2,>((__int64 *)v11);
        v19 = *((_DWORD *)this + 18);
        v10 = 0;
      }
      if ( *(struct _ERESOURCE **)this == &(*v11)[11] )
      {
        *((_DWORD *)this + 18) = v19 | 0x100000;
        GreAcquireSemaphore<2,>((__int64 *)v11);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
      }
      v42 = *((_DWORD *)this + 18);
      if ( (v42 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 18) = v42 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      v30 = GreGetCurrentThread();
      if ( v30 )
      {
        *((_QWORD *)v30 + 38) = 0LL;
        *((_QWORD *)v30 + 37) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v11);
    }
    if ( DC::bInFullScreen((DC *)*a2) )
    {
      v31 = (*((_DWORD *)this + 18) & 0x1000) == 0;
      goto LABEL_65;
    }
    if ( v20 )
    {
LABEL_63:
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && (*((_DWORD *)v20 + 9) & 0x80000) != 0 )
      {
LABEL_64:
        v31 = *((_QWORD *)this + 2) == 0LL;
LABEL_65:
        if ( !v31 )
          GreReleaseSemaphoreShared<3,>((__int64 *)v11);
        if ( v10 )
          GreReleaseSemaphoreShared<2,>((__int64 *)v11);
        goto LABEL_2;
      }
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
    || v20
    && ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*((_DWORD *)v20 + 9) & 0x200) == 0)
    && (*((_DWORD *)v20 + 9) & 0x10) != 0
    && !DC::bCompute((DC *)v20) )
  {
    goto LABEL_64;
  }
  if ( !DC::prgnRao((DC *)*a2) && !DC::prgnVisSnap(v21) )
    goto LABEL_2;
  if ( ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    goto LABEL_64;
  }
  if ( !DC::prgnRao(*(DC **)a3) && !DC::prgnVisSnap(v23) )
    goto LABEL_2;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 || (*((_DWORD *)v23 + 9) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
      {
        if ( *((_QWORD *)this + 37) )
          UserIsCurrentProcessImmersiveAppContainer();
        else
          DC::vSetRendering((DC *)*a2);
        v24 = GreGetCurrentThread();
        v25 = v24;
        if ( v24 )
        {
          *((_QWORD *)v24 + 37) = *a2;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *((_DWORD *)v24 + 84) |= 1u;
            (*a2)[247] = 0LL;
            v26 = *v11;
            GreAcquireSemaphoreSharedInternal((HSEMAPHORE)&(*v11)[8]);
            GrepAcquireLockValidate<14>();
            *((_DWORD *)v25 + 87) = *((_DWORD *)v11 + 1098);
            GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)&v26[8]);
          }
        }
      }
      v27 = *(DC **)a3;
      if ( **(struct _ERESOURCE ***)a3 != **a2 && (*((_DWORD *)v27 + 9) & 0x200) != 0 )
      {
        if ( *((_QWORD *)this + 40) )
          UserIsCurrentProcessImmersiveAppContainer();
        else
          DC::vSetRendering(v27);
        v39 = GreGetCurrentThread();
        if ( v39 )
          *((_QWORD *)v39 + 38) = *(_QWORD *)a3;
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x80000u;
    GreIncLockCount();
  }
  if ( _bittest((const signed __int32 *)this + 18, 0xCu) && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>((__int64 *)v11);
  if ( v10 )
    GreReleaseSemaphoreShared<2,>((__int64 *)v11);
  if ( !_bittest((const signed __int32 *)this + 18, 0xCu) )
    goto LABEL_83;
  v28 = *(_QWORD *)a3 ? *(_QWORD *)(*(_QWORD *)a3 + 496LL) : 0LL;
  v37 = *a2;
  v32 = *a2 ? (unsigned __int64)v37[62] : 0LL;
  v33 = 0;
  if ( v28 && v32 && v28 != v32 )
  {
    if ( v28 >= v32 )
    {
      LOBYTE(v33) = (unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1LL) == 0;
      _InterlockedOr(v46, 0);
      v34 = DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v38, 1);
    }
    else
    {
      *((_DWORD *)this + 18) |= 0x8000u;
      LOBYTE(v33) = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v22, 1) == 0;
      _InterlockedOr(v46, 0);
      v34 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1LL);
    }
    if ( !v34 )
      v33 = 1;
  }
  else
  {
    if ( v37 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1LL) )
      v33 = 1;
    if ( (!*a2 || **a2 != **(struct _ERESOURCE ***)a3) && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v22, 0) )
      goto LABEL_2;
  }
  if ( v33 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0 && (*a2)[62] && *(_QWORD *)this )
    goto LABEL_2;
  if ( ((__int64)(*a2)[6]->ExclusiveWaiters & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a3 + 496LL)
    && *((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 8) = a3;
    *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
    if ( bCopySurface(
           (DEVLOCKBLTOBJ *)((char *)this + 40),
           (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL))
      && XDCOBJ::SetSurfaceEff(a3, *((struct SURFACE **)this + 5)) )
    {
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v44, v45);
      if ( (*((_DWORD *)this + 18) & 0x200000) != 0 )
      {
        GreReleaseSemaphoreExclusive<2>();
        *((_DWORD *)this + 18) &= ~0x200000u;
      }
      else if ( *((_QWORD *)this + 1) )
      {
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
      *((_QWORD *)this + 1) = 0LL;
      *((_QWORD *)this + 4) = 0LL;
      if ( *((_QWORD *)this + 2) )
      {
        GreReleaseSemaphoreShared<1,>((__int64 *)v11);
        *((_QWORD *)this + 2) = 0LL;
      }
      goto LABEL_83;
    }
LABEL_2:
    *((_DWORD *)this + 18) &= ~1u;
    return 0LL;
  }
LABEL_83:
  if ( (*((_DWORD *)this + 18) & 0x81000) != 0 )
  {
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 80), (HDC)**a2, v22);
    v36 = **(HDC **)a3;
    if ( v36 != (HDC)**a2 )
      DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 184), v36, v35);
  }
  return 1LL;
}
