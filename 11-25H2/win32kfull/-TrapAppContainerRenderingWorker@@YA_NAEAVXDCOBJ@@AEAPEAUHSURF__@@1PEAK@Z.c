/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x140088EE0 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A1C4 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007AAA0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x14008BD68 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400DE2BC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall TrapAppContainerRenderingWorker(__int64 **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  Gre::Base **CurrentThreadNonPaged; // rax
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 *v20; // r13
  unsigned int v21; // esi
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 CompatibleBitmap; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  SURFACE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // esi
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // r9
  SURFACE *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  SURFACE *v41; // rcx
  char v42; // [rsp+30h] [rbp-D0h]
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v45[32]; // [rsp+48h] [rbp-B8h] BYREF
  struct SURFACE *v46; // [rsp+68h] [rbp-98h]
  _BYTE v47[32]; // [rsp+70h] [rbp-90h] BYREF
  SURFACE *v48; // [rsp+90h] [rbp-70h]
  _BYTE v49[128]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[96]; // [rsp+120h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  CurrentThreadNonPaged = (Gre::Base **)W32GetCurrentThreadNonPaged(v9, v8);
  if ( CurrentThreadNonPaged )
  {
    v11 = *CurrentThreadNonPaged;
    if ( *CurrentThreadNonPaged )
    {
      if ( v11 != (Gre::Base *)-8LL && (*((_DWORD *)v11 + 88) & 4) != 0 )
        return 1;
    }
  }
  v12 = Gre::Base::Globals(v11);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v43, v12);
  v14 = (*a1)[62];
  if ( !v14 )
    goto LABEL_10;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( *(_QWORD **)(v14 + 640) == CurrentProcessWin32Process && *(int *)(v14 + 112) >= 0 )
    goto LABEL_10;
  v18 = *a1;
  if ( (*a1)[59] && *((_DWORD *)v18 + 122) && !*((_DWORD *)v18 + 123) )
  {
    v19 = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
    if ( v19 && !*v19 )
      v19 = 0LL;
    if ( v19 == (_QWORD *)(*a1)[60] )
    {
LABEL_10:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v43);
      return 1;
    }
  }
  SURFREF::SURFREF((SURFREF *)v47);
  SURFREF::SURFREF((SURFREF *)v45);
  v20 = a1[2];
  if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
  {
    v42 = 0;
    if ( !(unsigned int)GreGetLockCount()
      && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v20) )
    {
      GreAcquireSemaphore<2,>(v20);
      v42 = 1;
    }
    SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v44);
    DC::vSetRendering((DC *)*a1);
    v21 = *(_DWORD *)(v14 + 56);
    v22 = *(_DWORD *)(v14 + 60);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, (struct XDCOBJ *)a1);
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
    CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v49, v21, v22, 0, 0LL, 0LL);
    if ( CompatibleBitmap )
    {
      LOBYTE(v23) = 5;
      v27 = (SURFACE *)HmgShareLock(*(_QWORD *)(*a1)[62], v23, v25, v26);
      LOBYTE(v28) = 5;
      v48 = v27;
      v46 = (struct SURFACE *)HmgShareLock(CompatibleBitmap, v28, v29, v30);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v49);
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v44);
      if ( v42 )
        GreReleaseSemaphoreShared<2,>(v20);
      goto LABEL_30;
    }
    DC::vClearRendering((DC *)*a1);
    if ( v42 )
      GreReleaseSemaphoreShared<2,>(v20);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v49);
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v44);
LABEL_37:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v43);
    return 0;
  }
  v31 = *(_DWORD *)(v14 + 56);
  v32 = *(_DWORD *)(v14 + 60);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, (struct XDCOBJ *)a1);
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  v34 = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v49, v31, v32, 0, 0LL, 0LL);
  if ( !v34 )
  {
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v49);
    goto LABEL_37;
  }
  LOBYTE(v33) = 5;
  v37 = (SURFACE *)HmgShareLock(*(_QWORD *)(*a1)[62], v33, v35, v36);
  LOBYTE(v38) = 5;
  v48 = v37;
  v46 = (struct SURFACE *)HmgShareLock(v34, v38, v39, v40);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v49);
LABEL_30:
  v41 = v48;
  *a2 = *(HSURF *)v48;
  *a3 = *(HSURF *)v46;
  INC_SHARE_REF_CNT(v41);
  if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v48) )
    ++*((_DWORD *)v46 + 81);
  (*a1)[63] = (__int64)*a2;
  DC::pSurface((DC *)*a1, v46);
  INC_SHARE_REF_CNT(v46);
  if ( a4 )
  {
    *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
    *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
  }
  GreAcquireSemaphoreShared<1,>(v20);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v43);
  return 1;
}
