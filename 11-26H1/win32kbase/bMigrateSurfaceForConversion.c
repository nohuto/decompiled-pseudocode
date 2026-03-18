/*
 * XREFs of bMigrateSurfaceForConversion @ 0x14002F4E0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140024FB0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x14002EEB4 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     HmgSwapLockedHandleContents @ 0x14002EEE0 (HmgSwapLockedHandleContents.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x14002FF8C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1400300E0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     HmgQueryAltLock @ 0x140030250 (HmgQueryAltLock.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x14003029C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1400572C0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x14017CD30 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x140190374 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140193F74 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80 (-set_AppContainerW32PID@SURFACE@@QEAAXK@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1401BF6BC (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401F1200 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     MulReplaceRedirectionChild @ 0x140248C18 (MulReplaceRedirectionChild.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x140248D00 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, SURFACE *a2, int a3, _DWORD *a4)
{
  char *v4; // rbx
  SURFACE *v5; // r14
  unsigned int v9; // r12d
  SURFACE *v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  SURFACE *v14; // r13
  __int64 v15; // rbx
  unsigned __int16 AltLock; // bx
  unsigned __int16 v17; // ax
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v19; // rdx
  struct SFMLOGICALSURFACE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int16 v26; // dx
  __int16 v27; // dx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  int v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // r8
  struct SFMLOGICALSURFACE *v68; // rbx
  __int64 v70; // rcx
  int (*v71)(void); // rax
  __int64 v72; // rcx
  __int64 HLSURFCloneWrap; // rbx
  __int64 SessionState; // rax
  __int64 v75; // r8
  __int64 v76; // rax
  unsigned __int16 v77; // bx
  unsigned __int16 v78; // ax
  int (*v79)(void); // rax
  __int64 v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  BOOL (__stdcall *v84)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v85; // rcx
  __int64 v86; // rax
  int v87; // xmm1_4
  int v88; // xmm0_4
  __int64 v89; // rcx
  int (*v90)(void); // rax
  BOOL v92; // [rsp+40h] [rbp-C0h]
  int v93; // [rsp+44h] [rbp-BCh]
  int v94; // [rsp+48h] [rbp-B8h]
  SURFACE *v95; // [rsp+50h] [rbp-B0h] BYREF
  int v96; // [rsp+58h] [rbp-A8h]
  SURFACE *v97; // [rsp+60h] [rbp-A0h] BYREF
  int v98; // [rsp+68h] [rbp-98h]
  __int64 v99; // [rsp+70h] [rbp-90h]
  _DWORD *v100; // [rsp+78h] [rbp-88h]
  struct SFMLOGICALSURFACE *v101; // [rsp+80h] [rbp-80h]
  _OWORD v102[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h]
  int v104; // [rsp+B0h] [rbp-50h]
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  int v106; // [rsp+C0h] [rbp-40h]
  int v107; // [rsp+C4h] [rbp-3Ch]
  _BYTE v108[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v109; // [rsp+100h] [rbp+0h]
  __int128 v110; // [rsp+110h] [rbp+10h]
  __int128 v111; // [rsp+120h] [rbp+20h]
  __int128 v112; // [rsp+130h] [rbp+30h]
  __int128 v113; // [rsp+140h] [rbp+40h]
  __int128 v114; // [rsp+150h] [rbp+50h]
  __int128 v115; // [rsp+160h] [rbp+60h]
  __int64 v116; // [rsp+170h] [rbp+70h]

  v4 = (char *)this + 24;
  v5 = 0LL;
  v106 = *((_DWORD *)this + 14);
  v107 = *((_DWORD *)this + 15);
  v100 = a4;
  v105 = 0LL;
  v97 = 0LL;
  v9 = 1;
  v10 = 0LL;
  v11 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  if ( v11 )
  {
    v10 = (SURFACE *)(v11 - 24);
    v98 = SURFACE::Map(v11 - 24);
    if ( v98 == 2 )
      v10 = 0LL;
    v97 = v10;
  }
  v95 = 0LL;
  if ( a2 )
  {
    if ( a2 != (SURFACE *)-24LL )
    {
      v5 = a2;
      v95 = a2;
      v96 = SURFACE::Map((__int64)a2);
      if ( v96 == 2 )
      {
        v5 = 0LL;
        v95 = 0LL;
      }
    }
  }
  *a4 = 0;
  v12 = *(_QWORD *)(W32GetSessionState(v11) + 88);
  v13 = *((_DWORD *)this + 28);
  v99 = v12;
  if ( (v13 & 0x100000) != 0 || v13 < 0 )
  {
    if ( v5 )
      SURFACE::bUnMapImmediate(v5);
    v95 = 0LL;
    if ( v10 )
      SURFACE::bUnMapImmediate(v10);
    v97 = 0LL;
    goto LABEL_73;
  }
  if ( *((_WORD *)v4 + 38) == 3 )
  {
LABEL_12:
    v14 = this;
    goto LABEL_13;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v13 & 0x400000) != 0 )
      goto LABEL_12;
    if ( !_bittest((const signed __int32 *)a2 + 28, 0x16u) )
    {
LABEL_73:
      SURFREFVIEW::bUnMap((SURFREFVIEW *)&v95);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)&v97);
      return 0LL;
    }
  }
  v14 = a2;
LABEL_13:
  v15 = *((_QWORD *)v14 + 6);
  if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v14 + 28) & 0x400) == 0
      ? (v84 = EngCopyBits)
      : (v84 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2832)),
        !a2 ? (v85 = 0LL) : (v85 = (char *)a2 + 24),
        ((unsigned int (__fastcall *)(char *, char *, _QWORD, __int64, __int64 *, __int64 *))v84)(
          v85,
          (char *)this + 24,
          0LL,
          v12 + 4664,
          &v105,
          &v105)) )
  {
    if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v94 = *((_DWORD *)this + 29) & 0x80;
    v92 = SURFACE::bStockSurface(this);
    AltLock = HmgQueryAltLock(*((_QWORD *)this + 4));
    v17 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
    if ( (unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)this + 4), AltLock, *((_QWORD *)a2 + 4), v17, 5) )
    {
      v93 = 0;
      memset(v102, 0, sizeof(v102));
      PushThreadGuardedObject(
        v102,
        v102,
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
      v103 = 0LL;
      v104 = 0;
      FirstLSurf = SURFACE::GetFirstLSurf(this);
      v101 = FirstLSurf;
      v20 = FirstLSurf;
      if ( FirstLSurf )
      {
        v93 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
        if ( __CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
        {
          ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v108, v19);
          v71 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v70) + 24) + 736LL);
          if ( v71
            && v71() >= 0
            && (HLSURFCloneWrap = SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)this + 6), v20)) != 0 )
          {
            SessionState = W32GetSessionState(v72);
            LOBYTE(v75) = 18;
            v76 = HmgLock(*(_QWORD *)(SessionState + 88), HLSURFCloneWrap, v75, 0LL);
            v103 = v76;
          }
          else
          {
            v76 = v103;
          }
          v9 = v76 != 0;
          ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v108);
          if ( !v9 )
            goto LABEL_47;
        }
      }
      OBJECT::SwapShareCount(this, a2);
      v21 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 70) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v22 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v21;
      v23 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v22;
      v24 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v23;
      v25 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v24;
      v26 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v25;
      LOWORD(v25) = v26 & 0x70;
      v27 = *((_WORD *)this + 7) & 0x70 | v26 & 0x80;
      *((_WORD *)this + 7) = *((_WORD *)this + 7) & 0x80 | v25;
      LODWORD(v24) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v27;
      LODWORD(v25) = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = v24;
      v28 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v25;
      v29 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v28;
      v30 = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 22) = v29;
      v31 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v30;
      v32 = *((_QWORD *)a2 + 16);
      *((_QWORD *)a2 + 19) = v31;
      v33 = *((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = v32;
      LODWORD(v32) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v33;
      LODWORD(v33) = *((_DWORD *)this + 80);
      *((_DWORD *)this + 80) = v32;
      LODWORD(v32) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v33;
      LODWORD(v33) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 81) = v32;
      *((_DWORD *)a2 + 81) = v33;
      v34 = *((_QWORD *)this + 61);
      v35 = *(_OWORD *)((char *)this + 344);
      *(_OWORD *)v108 = *(_OWORD *)((char *)this + 328);
      v36 = *(_OWORD *)((char *)this + 360);
      *(_OWORD *)&v108[16] = v35;
      v37 = *(_OWORD *)((char *)this + 376);
      *(_OWORD *)&v108[32] = v36;
      v38 = *(_OWORD *)((char *)this + 392);
      v109 = v37;
      v39 = *(_OWORD *)((char *)this + 408);
      v110 = v38;
      v40 = *(_OWORD *)((char *)this + 424);
      v111 = v39;
      v41 = *(_OWORD *)((char *)this + 440);
      v112 = v40;
      v42 = *(_OWORD *)((char *)this + 456);
      v113 = v41;
      v43 = *(_OWORD *)((char *)this + 472);
      v114 = v42;
      v115 = v43;
      v116 = v34;
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)this + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)this + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)this + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)this + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)this + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)this + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)this + 61) = *((_QWORD *)a2 + 61);
      v44 = *(_OWORD *)&v108[16];
      *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)v108;
      v45 = *(_OWORD *)&v108[32];
      *(_OWORD *)((char *)a2 + 344) = v44;
      v46 = v109;
      *(_OWORD *)((char *)a2 + 360) = v45;
      v47 = v110;
      *(_OWORD *)((char *)a2 + 376) = v46;
      v48 = v111;
      *(_OWORD *)((char *)a2 + 392) = v47;
      v49 = v112;
      *(_OWORD *)((char *)a2 + 408) = v48;
      v50 = v113;
      *(_OWORD *)((char *)a2 + 424) = v49;
      v51 = v114;
      *(_OWORD *)((char *)a2 + 440) = v50;
      v52 = v115;
      v53 = v116;
      *(_OWORD *)((char *)a2 + 456) = v51;
      v54 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v52;
      *((_QWORD *)a2 + 61) = v53;
      v55 = *((_OWORD *)this + 31);
      v56 = *((_OWORD *)this + 32);
      *((_OWORD *)this + 31) = v54;
      *((_OWORD *)this + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v53) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v55;
      *((_OWORD *)a2 + 32) = v56;
      v57 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v53 ^ (v57 ^ v53) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v57 ^ (*((_DWORD *)a2 + 28) ^ v57) & 0x3B5EF;
      v58 = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v58 ^ (*((_DWORD *)a2 + 29) ^ v58) & 0x7FFF;
      *((_DWORD *)a2 + 29) ^= (v58 ^ *((_DWORD *)a2 + 29)) & 0x7FFF;
      v59 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v59 ^ (*((_DWORD *)a2 + 28) ^ v59) & 0xE00000;
      *((_DWORD *)a2 + 28) ^= (v59 ^ *((_DWORD *)a2 + 28)) & 0xE00000;
      v60 = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v60 ^ (*((_DWORD *)a2 + 29) ^ v60) & 0x390D;
      LODWORD(v33) = v60 ^ *((_DWORD *)a2 + 29);
      v61 = *((_DWORD *)a2 + 160);
      *((_DWORD *)a2 + 29) ^= v33 & 0x390D;
      v62 = *((_DWORD *)this + 160);
      SURFACE::set_AppContainerW32PID(this, v61);
      SURFACE::set_AppContainerW32PID(a2, v62);
      if ( (*((_DWORD *)this + 29) & 0x800) != 0 )
      {
        v86 = *(_QWORD *)((char *)this + 668);
        v87 = *((_DWORD *)this + 166);
        v88 = *((_DWORD *)this + 165);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v88;
        *((_DWORD *)a2 + 166) = v87;
        *(_QWORD *)((char *)a2 + 668) = v86;
      }
      if ( v92 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        if ( (*(_DWORD *)a2 & 0x800000) != 0 )
          *((_WORD *)a2 + 51) |= 0x200u;
        *v100 = 1;
      }
      if ( v101 )
      {
        memset(v108, 0, 32);
        PushThreadGuardedObject(
          v108,
          v108,
          UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
        v65 = *(_QWORD *)v101;
        *(_QWORD *)&v108[32] = 0LL;
        *(_DWORD *)&v108[40] = 1;
        if ( v65 )
        {
          v66 = W32GetSessionState(v64);
          LOBYTE(v67) = 18;
          *(_QWORD *)&v108[32] = HmgLock(*(_QWORD *)(v66 + 88), v65, v67, 0LL);
        }
        if ( v93 )
        {
          v79 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v64) + 24) + 640LL);
          if ( v79 )
          {
            if ( v79() >= 0 )
              vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v14 + 6), *(_QWORD *)&v108[32], a2, v103);
          }
        }
        while ( 1 )
        {
          v68 = SURFACE::GetFirstLSurf(this);
          if ( !v68 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v14 + 6), v68, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v108);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        *(_QWORD *)v108 = HmgShareLock(v99, *((_QWORD *)a2 + 18), 5, 1);
        memset(&v108[8], 0, 32);
        PushThreadGuardedObject(
          &v108[8],
          v108,
          UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
        if ( *(_QWORD *)v108 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v108 + 24LL) )
          {
            v90 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v89) + 24) + 672LL);
            if ( v90 )
            {
              if ( v90() >= 0 )
                MulReplaceRedirectionChild(*(_QWORD *)(*(_QWORD *)v108 + 24LL), (char *)this + 24, (char *)a2 + 24);
            }
          }
        }
        HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(v108);
      }
      if ( v94 )
      {
        HmgDecrementShareReferenceCount(v99, (unsigned int *)this);
        HmgIncrementShareReferenceCount(v99, (unsigned int *)a2);
      }
      if ( *((_DWORD *)this + 2) )
      {
        *v100 = 1;
      }
      else
      {
        v80 = *((_QWORD *)this + 4);
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v108, v63);
        *(_QWORD *)&v108[32] = HmgShareLock(v99, v80, 5, 0);
        if ( v5 )
          SURFACE::bUnMapImmediate(v5);
        v5 = 0LL;
        if ( v10 )
          SURFACE::bUnMapImmediate(v10);
        v10 = 0LL;
        v9 = SURFACE::bDeleteSurface(*(__int64 **)&v108[32], v99, 0, 0);
        if ( v9 )
        {
          v82 = 0LL;
          *(_QWORD *)&v108[32] = 0LL;
        }
        else
        {
          v82 = *(_QWORD *)&v108[32];
          *((_QWORD *)this + 70) = 0LL;
        }
        if ( v82 )
        {
          v83 = W32GetSessionState(v81);
          HmgDecrementShareReferenceCount(*(_QWORD *)(v83 + 88), *(unsigned int **)&v108[32]);
        }
        PopThreadGuardedObject(v108);
      }
      if ( !v9 )
      {
LABEL_47:
        v77 = HmgQueryAltLock(*((_QWORD *)this + 4));
        v78 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
        HmgSwapLockedHandleContents(*((_QWORD *)a2 + 4), v78, *((_QWORD *)this + 4), v77, 5);
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v102);
      if ( v9 )
        goto LABEL_36;
    }
    else
    {
      v9 = 0;
    }
    if ( v92 )
    {
      *((_WORD *)a2 + 51) &= ~0x200u;
      if ( (*(_DWORD *)this & 0x800000) != 0 )
        *((_WORD *)this + 51) |= 0x200u;
    }
  }
  else
  {
    v9 = 0;
  }
LABEL_36:
  if ( v5 )
    SURFACE::bUnMapImmediate(v5);
  v95 = 0LL;
  if ( v10 )
    SURFACE::bUnMapImmediate(v10);
  v97 = 0LL;
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v95);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v97);
  return v9;
}
