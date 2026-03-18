/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x14009CDEC (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreGradientFill @ 0x1400A0CB0 (GreGradientFill.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A1C4 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007BCFC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     GreDereferenceObject @ 0x14007BF50 (GreDereferenceObject.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14007D7D0 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140089CAC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x14008AF54 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x14008BD68 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14008C988 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140152E60 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x14018BBBC (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x140300150 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  _QWORD *v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  HSEMAPHORE v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  HSURF v19; // rbx
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  HSURF v32; // rbx
  Gre::Base *v33; // rcx
  struct Gre::Base::SESSION_GLOBALS *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  _QWORD *v46; // rdx
  signed __int32 v47[8]; // [rsp+0h] [rbp-A9h] BYREF
  int v48; // [rsp+20h] [rbp-89h]
  _BYTE v49[32]; // [rsp+30h] [rbp-79h] BYREF
  HSURF *v50; // [rsp+50h] [rbp-59h]
  _BYTE v51[32]; // [rsp+58h] [rbp-51h] BYREF
  struct SURFACE *v52; // [rsp+78h] [rbp-31h]
  DC *v53[10]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v54[16]; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v55; // [rsp+110h] [rbp+67h] BYREF
  __int64 v56; // [rsp+118h] [rbp+6Fh] BYREF

  if ( _bittest((const signed __int32 *)this + 28, 0xCu) )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
  }
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::vUnguard((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcThreadCleanup(0LL);
    v46 = (_QWORD *)*((_QWORD *)this + 13);
    if ( *v46 )
    {
      LOBYTE(v45) = 5;
      GrepSelectBitmap(v54, v46, *((_QWORD *)this + 12), v45);
    }
    if ( *v2 )
      DEC_SHARE_REF_CNT(*v2);
    bDeleteSurface(*(_QWORD *)(*v2 + 32LL));
    *v2 = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v3 = *((_DWORD *)this + 28);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v47, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v47, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
    if ( CurrentThreadNonPaged )
      v7 = *CurrentThreadNonPaged;
    else
      v7 = 0LL;
    v8 = (v7 + 8) & -(__int64)(v7 != 0);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 304) = 0LL;
      *(_QWORD *)(v8 + 296) = 0LL;
    }
  }
  else if ( (v3 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 28) & 0x100000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 28) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 3));
    }
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( (*((_DWORD *)this + 28) & 0x200000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 28) &= ~0x200000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
    }
  }
  v9 = *((_DWORD *)this + 28);
  if ( (v9 & 8) != 0 )
    *((_DWORD *)this + 28) = v9 & 0xFFFFFFF7;
  v10 = (HSEMAPHORE)*((_QWORD *)this + 2);
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", *((_QWORD *)this + 2));
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v10);
  }
  if ( *((_QWORD *)this + 37) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v53, *((HDC *)this + 38));
    SURFREF::SURFREF((SURFREF *)v49);
    SURFREF::SURFREF((SURFREF *)v51);
    LOBYTE(v11) = 5;
    v14 = HmgShareLock(*((_QWORD *)this + 36), v11, v12, v13);
    v15 = *((_QWORD *)this + 37);
    LOBYTE(v16) = 5;
    v50 = (HSURF *)v14;
    v52 = (struct SURFACE *)HmgShareLock(v15, v16, v17, v18);
    v19 = *v50;
    DC::pSurface(v53[0], v52);
    DEC_SHARE_REF_CNT(v50);
    v50 = 0LL;
    DEC_SHARE_REF_CNT(v52);
    v52 = 0LL;
    GreDereferenceObject(v19, 1u);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
    {
      v20 = v53[0];
      *((_DWORD *)v53[0] + 9) |= *((_DWORD *)this + 29);
    }
    v21 = Gre::Base::Globals(v20);
    if ( (*((_DWORD *)v53[0] + 9) & 0x200) != 0 )
    {
      v37 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v21) )
      {
        GreAcquireSemaphoreShared<2,>(v21);
        v37 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v55);
      v38 = *((_QWORD *)this + 37);
      LOBYTE(v48) = 5;
      v39 = HmgShareUnlockRemoveObject(v38, 0LL, 0LL, 0LL, v48);
      if ( v39 )
        SURFACE::bDeleteSurface(v39, 0LL, 1LL);
      *((_QWORD *)v53[0] + 63) = 0LL;
      DC::vClearRendering(v53[0]);
      v40 = v55;
      *((_QWORD *)this + 37) = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v40);
      if ( v37 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v21);
    }
    else
    {
      v22 = *((_QWORD *)this + 37);
      LOBYTE(v48) = 5;
      v23 = HmgShareUnlockRemoveObject(v22, 0LL, 0LL, 0LL, v48);
      if ( v23 )
        SURFACE::bDeleteSurface(v23, 0LL, 1LL);
      *((_QWORD *)v53[0] + 63) = 0LL;
      *((_QWORD *)this + 37) = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v21);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v49);
    DCOBJ::~DCOBJ((DCOBJ *)v53);
  }
  if ( *((_QWORD *)this + 40) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v53, *((HDC *)this + 41));
    SURFREF::SURFREF((SURFREF *)v49);
    SURFREF::SURFREF((SURFREF *)v51);
    LOBYTE(v24) = 5;
    v27 = HmgShareLock(*((_QWORD *)this + 39), v24, v25, v26);
    v28 = *((_QWORD *)this + 40);
    LOBYTE(v29) = 5;
    v50 = (HSURF *)v27;
    v52 = (struct SURFACE *)HmgShareLock(v28, v29, v30, v31);
    v32 = *v50;
    DC::pSurface(v53[0], v52);
    DEC_SHARE_REF_CNT(v50);
    v50 = 0LL;
    DEC_SHARE_REF_CNT(v52);
    v52 = 0LL;
    GreDereferenceObject(v32, 1u);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    v34 = Gre::Base::Globals(v33);
    if ( (*((_DWORD *)v53[0] + 9) & 0x200) != 0 )
    {
      v41 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v34) )
      {
        GreAcquireSemaphoreShared<2,>(v34);
        v41 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v56);
      v42 = *((_QWORD *)this + 40);
      LOBYTE(v48) = 5;
      v43 = HmgShareUnlockRemoveObject(v42, 0LL, 0LL, 0LL, v48);
      if ( v43 )
        SURFACE::bDeleteSurface(v43, 0LL, 1LL);
      *((_QWORD *)v53[0] + 63) = 0LL;
      DC::vClearRendering(v53[0]);
      v44 = v56;
      *((_QWORD *)this + 40) = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v44);
      if ( v41 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v34);
    }
    else
    {
      v35 = *((_QWORD *)this + 40);
      LOBYTE(v48) = 5;
      v36 = HmgShareUnlockRemoveObject(v35, 0LL, 0LL, 0LL, v48);
      if ( v36 )
        SURFACE::bDeleteSurface(v36, 0LL, 1LL);
      *((_QWORD *)v53[0] + 63) = 0LL;
      *((_QWORD *)this + 40) = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v34);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v49);
    DCOBJ::~DCOBJ((DCOBJ *)v53);
  }
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 200));
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  if ( *((_DWORD *)this + 22) )
  {
    PopThreadGuardedObject((char *)this + 56);
    *((_DWORD *)this + 22) = 0;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
