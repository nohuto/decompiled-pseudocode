/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48
 * Callers:
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14006B880 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14007350C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400A8E68 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x140188474 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14018CD74 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401D02B8 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // eax
  int v7; // eax
  HSEMAPHORE v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // r8
  Gre::Base *v25; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  Gre::Base *v27; // rcx
  struct Gre::Base::SESSION_GLOBALS *v28; // rax
  __int64 v29; // rdx
  Gre::Base *v30; // rcx
  struct Gre::Base::SESSION_GLOBALS *v31; // rbx
  char v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rdx
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-99h] BYREF
  int v42; // [rsp+20h] [rbp-79h]
  _OWORD v43[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v44; // [rsp+50h] [rbp-49h]
  _OWORD v45[2]; // [rsp+58h] [rbp-41h] BYREF
  struct SURFACE *v46; // [rsp+78h] [rbp-21h]
  DC *v47[8]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v48[16]; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v49; // [rsp+100h] [rbp+67h] BYREF

  if ( _bittest((const signed __int32 *)this + 18, 0xCu) )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
  }
  v5 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    v38 = (_QWORD *)*((_QWORD *)this + 8);
    if ( *v38 )
    {
      LOBYTE(a4) = 5;
      GrepSelectBitmap(v48, v38, *((_QWORD *)this + 7), a4);
    }
    if ( *v5 )
    {
      v39 = Gre::Base::Globals(this);
      DEC_SHARE_REF_CNT(v39, *v5);
    }
    v40 = Gre::Base::Globals(this);
    bDeleteSurface(v40, *(HSURF *)(*v5 + 32LL));
    *v5 = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = *((_DWORD *)this + 18);
  if ( (v6 & 0x1000) != 0 )
  {
    if ( (v6 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, a2, a3);
      _InterlockedOr(v41, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v9, v10);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, a2, a3);
      _InterlockedOr(v41, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v12, v13);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread();
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v6 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 18) & 0x100000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 18) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 3));
    }
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( (*((_DWORD *)this + 18) & 0x200000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 18) &= ~0x200000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
    }
  }
  v7 = *((_DWORD *)this + 18);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 18) = v7 & 0xFFFFFFF7;
  v8 = (HSEMAPHORE)*((_QWORD *)this + 2);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", *((_QWORD *)this + 2));
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v8);
  }
  UntrapAppContainerRenderingWorker(
    (HDC *)this + 39,
    (HSURF *)this + 38,
    (HSURF *)this + 37,
    (const unsigned int *)this + 19);
  if ( *((_QWORD *)this + 41) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v47, *((HDC *)this + 42));
    memset(v43, 0, sizeof(v43));
    PushThreadGuardedObject(
      v43,
      v43,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v44 = 0LL;
    memset(v45, 0, sizeof(v45));
    PushThreadGuardedObject(
      v45,
      v45,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v14 = *((_QWORD *)this + 40);
    v46 = 0LL;
    v16 = Gre::Base::Globals(v15);
    LOBYTE(v17) = 5;
    v18 = HmgShareLock(v16, v14, v17, 1LL);
    v19 = *((_QWORD *)this + 41);
    v44 = (__int64 *)v18;
    v21 = Gre::Base::Globals(v20);
    LOBYTE(v22) = 5;
    v46 = (struct SURFACE *)HmgShareLock(v21, v19, v22, 1LL);
    v23 = *v44;
    DC::pSurface(v47[0], v46, v24);
    v26 = Gre::Base::Globals(v25);
    DEC_SHARE_REF_CNT(v26, v44);
    v44 = 0LL;
    v28 = Gre::Base::Globals(v27);
    DEC_SHARE_REF_CNT(v28, v46);
    v46 = 0LL;
    LOBYTE(v29) = 5;
    GreDereferenceObject(v23, v29, 1LL);
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    v31 = Gre::Base::Globals(v30);
    if ( (*((_DWORD *)v47[0] + 9) & 0x200) != 0 )
    {
      v32 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v31) )
      {
        GreAcquireSemaphoreShared<2,>(v31);
        v32 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v49);
      v33 = *((_QWORD *)this + 41);
      LOBYTE(v42) = 5;
      v34 = HmgShareUnlockRemoveObject(v33, 0LL, 0LL, 0LL, v42);
      if ( v34 )
        SURFACE::bDeleteSurface(v34, v31, 0LL, 1LL);
      *((_QWORD *)v47[0] + 63) = 0LL;
      DC::vClearRendering(v47[0]);
      v35 = v49;
      *((_QWORD *)this + 41) = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v35);
      if ( v32 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v31);
    }
    else
    {
      v36 = *((_QWORD *)this + 41);
      LOBYTE(v42) = 5;
      v37 = HmgShareUnlockRemoveObject(v36, 0LL, 0LL, 0LL, v42);
      if ( v37 )
        SURFACE::bDeleteSurface(v37, v31, 0LL, 1LL);
      *((_QWORD *)v47[0] + 63) = 0LL;
      *((_QWORD *)this + 41) = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v31);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
    DCOBJ::~DCOBJ((DCOBJ *)v47);
  }
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 184));
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 80));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
