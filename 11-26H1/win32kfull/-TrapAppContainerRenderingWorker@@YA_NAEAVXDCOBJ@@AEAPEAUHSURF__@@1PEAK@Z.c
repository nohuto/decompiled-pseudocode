/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1400BAF10 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall TrapAppContainerRenderingWorker(__int64 **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  Gre::Base **CurrentThreadWin32Thread; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // r13
  int v21; // esi
  int v22; // edi
  Gre::Base *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  __int64 v27; // r8
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  struct SURFACE *v32; // rax
  HSURF v33; // rcx
  struct Gre::Base::SESSION_GLOBALS *v34; // rax
  __int64 v35; // r8
  Gre::Base *v36; // rcx
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  int v38; // esi
  int v39; // edi
  __int64 CompatibleBitmap; // rsi
  Gre::Base *v41; // rcx
  __int64 v42; // rdi
  struct Gre::Base::SESSION_GLOBALS *v43; // rax
  __int64 v44; // r8
  Gre::Base *v45; // rcx
  struct Gre::Base::SESSION_GLOBALS *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  char v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v55[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct SURFACE *v56; // [rsp+68h] [rbp-98h]
  _OWORD v57[2]; // [rsp+70h] [rbp-90h] BYREF
  SURFACE *v58; // [rsp+90h] [rbp-70h]
  _QWORD v59[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v60[40]; // [rsp+E0h] [rbp-20h] BYREF
  char v61; // [rsp+108h] [rbp+8h]
  _BYTE v62[96]; // [rsp+110h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  CurrentThreadWin32Thread = (Gre::Base **)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
  {
    v10 = *CurrentThreadWin32Thread;
    v11 = 0LL;
    v12 = *CurrentThreadWin32Thread == 0LL;
    v13 = (__int64)*CurrentThreadWin32Thread + 8;
    if ( !v12 )
      v11 = v13;
    if ( v11 && (*(_DWORD *)(v11 + 336) & 4) != 0 )
      return 1;
  }
  v15 = Gre::Base::Globals(v10);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v53, v15);
  v16 = (_DWORD *)(*a1)[62];
  if ( !v16 || v16[160] == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && (int)v16[28] >= 0 )
    goto LABEL_11;
  v18 = *a1;
  if ( (*a1)[59] && *((_DWORD *)v18 + 122) && !*((_DWORD *)v18 + 123) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    if ( CurrentProcessWin32Process == (_QWORD *)(*a1)[60] )
    {
LABEL_11:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v53);
      return 1;
    }
  }
  memset(v57, 0, sizeof(v57));
  PushThreadGuardedObject(
    v57,
    v57,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v58 = 0LL;
  memset(v55, 0, sizeof(v55));
  PushThreadGuardedObject(
    v55,
    v55,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v19 = *a1;
  v20 = a1[2];
  v56 = 0LL;
  if ( (*((_DWORD *)v19 + 9) & 0x200) == 0 )
  {
    v38 = v16[14];
    v39 = v16[15];
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v59, (struct XDCOBJ *)a1);
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
    CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v59, v38, v39, 0, 0LL, 0LL);
    if ( CompatibleBitmap )
    {
      v41 = (Gre::Base *)(*a1)[62];
      v42 = *(_QWORD *)v41;
      v43 = Gre::Base::Globals(v41);
      LOBYTE(v44) = 5;
      v58 = (SURFACE *)HmgShareLock(v43, v42, v44, 1LL);
      v46 = Gre::Base::Globals(v45);
      LOBYTE(v47) = 5;
      v56 = (struct SURFACE *)HmgShareLock(v46, CompatibleBitmap, v47, 1LL);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
      v48 = v59[0];
      if ( !v61 )
        v48 = 0LL;
      v59[0] = v48;
      PopThreadGuardedObject(v60);
      DCOBJ::~DCOBJ((DCOBJ *)v59);
      goto LABEL_22;
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
    v51 = v59[0];
    if ( !v61 )
      v51 = 0LL;
    v59[0] = v51;
    PopThreadGuardedObject(v60);
    DCOBJ::~DCOBJ((DCOBJ *)v59);
LABEL_42:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v57);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v53);
    return 0;
  }
  v52 = 0;
  if ( !(unsigned int)GreGetLockCount()
    && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v20) )
  {
    GreAcquireSemaphore<2,>(v20);
    v52 = 1;
  }
  SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v54);
  DC::vSetRendering((DC *)*a1);
  v21 = v16[14];
  v22 = v16[15];
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v59, (struct XDCOBJ *)a1);
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
  v24 = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v59, v21, v22, 0, 0LL, 0LL);
  if ( !v24 )
  {
    DC::vClearRendering((DC *)*a1);
    if ( v52 )
      GreReleaseSemaphoreShared<2,>(v20);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
    v50 = v59[0];
    if ( !v61 )
      v50 = 0LL;
    v59[0] = v50;
    PopThreadGuardedObject(v60);
    DCOBJ::~DCOBJ((DCOBJ *)v59);
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v54);
    goto LABEL_42;
  }
  v25 = *(_QWORD *)(*a1)[62];
  v26 = Gre::Base::Globals(v23);
  LOBYTE(v27) = 5;
  v58 = (SURFACE *)HmgShareLock(v26, v25, v27, 1LL);
  v29 = Gre::Base::Globals(v28);
  LOBYTE(v30) = 5;
  v56 = (struct SURFACE *)HmgShareLock(v29, v24, v30, 1LL);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
  v31 = v59[0];
  if ( !v61 )
    v31 = 0LL;
  v59[0] = v31;
  PopThreadGuardedObject(v60);
  DCOBJ::~DCOBJ((DCOBJ *)v59);
  GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v54);
  if ( v52 )
    GreReleaseSemaphoreShared<2,>(v20);
LABEL_22:
  v32 = v56;
  *a2 = *(HSURF *)v58;
  v33 = *(HSURF *)v32;
  *a3 = *(HSURF *)v32;
  v34 = Gre::Base::Globals((Gre::Base *)v33);
  INC_SHARE_REF_CNT(v34, v58);
  if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v58) )
    ++*((_DWORD *)v56 + 81);
  (*a1)[63] = (__int64)*a2;
  DC::pSurface((DC *)*a1, v56, v35);
  v37 = Gre::Base::Globals(v36);
  INC_SHARE_REF_CNT(v37, v56);
  if ( a4 )
  {
    *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
    *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
  }
  GreAcquireSemaphoreShared<1,>(v20);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v57);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v53);
  return 1;
}
