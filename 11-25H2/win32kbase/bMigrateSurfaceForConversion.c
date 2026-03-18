/*
 * XREFs of bMigrateSurfaceForConversion @ 0x140070324
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140040EC0 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x140066410 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x14006E700 (HmgSwapLockedHandleContents.c)
 *     HmgQueryAltLock @ 0x14006F190 (HmgQueryAltLock.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400829E0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x140083960 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x140084BE0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140086FC0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BFB90 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE8DC (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?bUndoStockSurfaceDelayed@SURFACE@@QEAAHXZ @ 0x1400ED4B0 (-bUndoStockSurfaceDelayed@SURFACE@@QEAAHXZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x14014253C (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x140147498 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x14014A34C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x140151F1C (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140156BC0 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1401776F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1401C65A4 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C65D8 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     MulReplaceRedirectionChild @ 0x14023E584 (MulReplaceRedirectionChild.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x14023E664 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct OBJECT *a2, int a3, _DWORD *a4)
{
  char *v4; // r15
  unsigned int v9; // r14d
  __int64 v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rdx
  int v12; // eax
  struct OBJECT *v13; // r13
  __int64 v14; // rbx
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  HLSURF *v16; // r12
  char *v17; // rcx
  SURFACE *v18; // rcx
  int v19; // r15d
  unsigned __int16 AltLock; // bx
  unsigned __int16 v21; // ax
  int v22; // r15d
  HLSURF HLSURFCloneWrap; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  int (*v25)(void); // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int16 v31; // r8
  __int16 v32; // dx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  int v60; // edx
  int v61; // edx
  int v62; // edx
  int v63; // edx
  struct _W32PROCESS *v64; // rdx
  struct _W32PROCESS *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // xmm0_4
  int v69; // xmm1_4
  int v70; // eax
  HLSURF v71; // rdx
  int (*v72)(void); // rax
  struct SFMLOGICALSURFACE *v73; // rbx
  int (*v74)(void); // rax
  int v75; // edx
  unsigned __int16 v76; // bx
  unsigned __int16 v77; // ax
  int v78; // eax
  int v80; // [rsp+44h] [rbp-BCh]
  int v81; // [rsp+48h] [rbp-B8h]
  _QWORD v82[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v83[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v84; // [rsp+70h] [rbp-90h]
  _DWORD *v85; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v86; // [rsp+80h] [rbp-80h]
  _BYTE v87[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+B0h] [rbp-50h]
  __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  int v91; // [rsp+C0h] [rbp-40h]
  int v92; // [rsp+C4h] [rbp-3Ch]
  _BYTE v93[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v94; // [rsp+100h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+10h]
  __int128 v96; // [rsp+120h] [rbp+20h]
  __int128 v97; // [rsp+130h] [rbp+30h]
  __int128 v98; // [rsp+140h] [rbp+40h]
  __int128 v99; // [rsp+150h] [rbp+50h]
  __int128 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+170h] [rbp+70h]

  v4 = (char *)a1 + 24;
  v91 = *((_DWORD *)a1 + 14);
  v92 = *((_DWORD *)a1 + 15);
  v85 = a4;
  v90 = 0LL;
  v83[0] = 0LL;
  v9 = 1;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v83,
    (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
  v82[0] = 0LL;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v82,
    (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
  *a4 = 0;
  v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v10) + 88);
  v12 = *((_DWORD *)a1 + 28);
  v86 = v11;
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v82);
    v82[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
    v83[0] = 0LL;
  }
  else
  {
    if ( *((_WORD *)a1 + 50) == 3 )
    {
LABEL_5:
      v13 = a1;
      goto LABEL_8;
    }
    if ( *((_WORD *)a2 + 50) == 3 )
      goto LABEL_7;
    if ( (v12 & 0x400000) != 0 )
      goto LABEL_5;
    if ( _bittest((const signed __int32 *)a2 + 28, 0x16u) )
    {
LABEL_7:
      v13 = a2;
LABEL_8:
      v14 = *((_QWORD *)v13 + 6);
      if ( (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
        *((_DWORD *)a1 + 29) |= 0x10u;
      if ( a3 )
      {
        v16 = 0LL;
      }
      else
      {
        if ( _bittest((const signed __int32 *)v13 + 28, 0xAu) )
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2832);
        else
          v15 = EngCopyBits;
        v16 = 0LL;
        v17 = (char *)a2 + 24;
        if ( !a2 )
          v17 = 0LL;
        if ( !((unsigned int (__fastcall *)(char *, char *, _QWORD, char *, __int64 *, __int64 *))v15)(
                v17,
                v4,
                0LL,
                (char *)v11 + 4552,
                &v90,
                &v90) )
        {
          v9 = 0;
LABEL_72:
          SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v82);
          v82[0] = v16;
          SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
          v83[0] = v16;
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v82);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
          return v9;
        }
      }
      if ( (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
        *((_DWORD *)a1 + 29) &= ~0x10u;
      v84 = *((_DWORD *)a1 + 29) & 0x80;
      v81 = SURFACE::bStockSurface(a1);
      v19 = SURFACE::bUndoStockSurfaceDelayed(v18);
      v80 = v19;
      AltLock = HmgQueryAltLock(*((_QWORD *)a1 + 4));
      v21 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
      if ( !(unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)a1 + 4), AltLock, *((_QWORD *)a2 + 4), v21, 5) )
      {
        v9 = 0;
        goto LABEL_66;
      }
      v22 = 0;
      HLSURFCloneWrap = 0LL;
      UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        v87,
        65023LL);
      v88 = 0LL;
      v89 = 0;
      FirstLSurf = SURFACE::GetFirstLSurf(a1);
      v16 = (HLSURF *)FirstLSurf;
      if ( !FirstLSurf )
        goto LABEL_28;
      v22 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
      if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
        goto LABEL_28;
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v93);
      v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 736LL);
      if ( v25 && v25() >= 0 )
        HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v16);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v87, HLSURFCloneWrap);
      v9 = v88 != 0;
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v93);
      if ( !v9 )
      {
        v16 = 0LL;
      }
      else
      {
LABEL_28:
        OBJECT::SwapShareCount(a1, a2);
        v26 = *((_QWORD *)a1 + 4);
        *((_QWORD *)a1 + 70) = a2;
        *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
        v27 = *((_QWORD *)a2 + 18);
        *((_QWORD *)a2 + 4) = v26;
        v28 = *((_QWORD *)a1 + 18);
        *((_QWORD *)a1 + 18) = v27;
        v29 = *((_QWORD *)a2 + 20);
        *((_QWORD *)a2 + 18) = v28;
        v30 = *((_QWORD *)a1 + 20);
        *((_QWORD *)a1 + 20) = v29;
        v31 = *((_WORD *)a2 + 7);
        *((_QWORD *)a2 + 20) = v30;
        v32 = v31 & 0x80 | *((_WORD *)a1 + 7) & 0x60;
        *((_WORD *)a1 + 7) = v31 & 0x60 | *((_WORD *)a1 + 7) & 0x80;
        LODWORD(v29) = *((_DWORD *)a2 + 42);
        *((_WORD *)a2 + 7) = v32;
        LODWORD(v30) = *((_DWORD *)a1 + 42);
        *((_DWORD *)a1 + 42) = v29;
        v33 = *((_QWORD *)a2 + 22);
        *((_DWORD *)a2 + 42) = v30;
        v34 = *((_QWORD *)a1 + 22);
        *((_QWORD *)a1 + 22) = v33;
        *((_QWORD *)a2 + 22) = v34;
        v35 = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
        *((_QWORD *)a2 + 19) = v35;
        v36 = *((_QWORD *)a1 + 16);
        *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
        LODWORD(v35) = *((_DWORD *)a2 + 80);
        *((_QWORD *)a2 + 16) = v36;
        LODWORD(v36) = *((_DWORD *)a1 + 80);
        *((_DWORD *)a1 + 80) = v35;
        LODWORD(v35) = *((_DWORD *)a2 + 81);
        *((_DWORD *)a2 + 80) = v36;
        LODWORD(v36) = *((_DWORD *)a1 + 81);
        *((_DWORD *)a1 + 81) = v35;
        *((_DWORD *)a2 + 81) = v36;
        v37 = *((_QWORD *)a1 + 61);
        v38 = *(_OWORD *)((char *)a1 + 344);
        *(_OWORD *)v93 = *(_OWORD *)((char *)a1 + 328);
        v39 = *(_OWORD *)((char *)a1 + 360);
        *(_OWORD *)&v93[16] = v38;
        v40 = *(_OWORD *)((char *)a1 + 376);
        *(_OWORD *)&v93[32] = v39;
        v41 = *(_OWORD *)((char *)a1 + 392);
        v94 = v40;
        v42 = *(_OWORD *)((char *)a1 + 408);
        v95 = v41;
        v43 = *(_OWORD *)((char *)a1 + 424);
        v96 = v42;
        v44 = *(_OWORD *)((char *)a1 + 440);
        v97 = v43;
        v45 = *(_OWORD *)((char *)a1 + 456);
        v98 = v44;
        v46 = *(_OWORD *)((char *)a1 + 472);
        v99 = v45;
        v100 = v46;
        v101 = v37;
        *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)a2 + 328);
        *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)a2 + 344);
        *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)a2 + 360);
        *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)a2 + 376);
        *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)a2 + 392);
        *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)a2 + 408);
        *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)a2 + 424);
        *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
        *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)a2 + 456);
        *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)a2 + 472);
        *((_QWORD *)a1 + 61) = *((_QWORD *)a2 + 61);
        v47 = *(_OWORD *)&v93[16];
        *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)v93;
        v48 = *(_OWORD *)&v93[32];
        *(_OWORD *)((char *)a2 + 344) = v47;
        v49 = v94;
        *(_OWORD *)((char *)a2 + 360) = v48;
        v50 = v95;
        *(_OWORD *)((char *)a2 + 376) = v49;
        v51 = v96;
        *(_OWORD *)((char *)a2 + 392) = v50;
        v52 = v97;
        *(_OWORD *)((char *)a2 + 408) = v51;
        v53 = v98;
        *(_OWORD *)((char *)a2 + 424) = v52;
        v54 = v99;
        *(_OWORD *)((char *)a2 + 440) = v53;
        v55 = v100;
        v56 = v101;
        *(_OWORD *)((char *)a2 + 456) = v54;
        v57 = *((_OWORD *)a2 + 31);
        *(_OWORD *)((char *)a2 + 472) = v55;
        *((_QWORD *)a2 + 61) = v56;
        v58 = *((_OWORD *)a1 + 31);
        v59 = *((_OWORD *)a1 + 32);
        *((_OWORD *)a1 + 31) = v57;
        *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
        LODWORD(v56) = *((_DWORD *)a2 + 28);
        *((_OWORD *)a2 + 31) = v58;
        *((_OWORD *)a2 + 32) = v59;
        v60 = *((_DWORD *)a1 + 28);
        *((_DWORD *)a1 + 28) = v56 ^ (v60 ^ v56) & 0x3B5EF;
        *((_DWORD *)a2 + 28) = v60 ^ (*((_DWORD *)a2 + 28) ^ v60) & 0x3B5EF;
        v61 = *((_DWORD *)a1 + 29);
        *((_DWORD *)a1 + 29) = v61 ^ (*((_DWORD *)a2 + 29) ^ v61) & 0x7FFF;
        *((_DWORD *)a2 + 29) ^= (v61 ^ *((_DWORD *)a2 + 29)) & 0x7FFF;
        v62 = *((_DWORD *)a1 + 28);
        *((_DWORD *)a1 + 28) = v62 ^ (*((_DWORD *)a2 + 28) ^ v62) & 0xE00000;
        *((_DWORD *)a2 + 28) ^= (v62 ^ *((_DWORD *)a2 + 28)) & 0xE00000;
        v63 = *((_DWORD *)a1 + 29);
        *((_DWORD *)a1 + 29) = v63 ^ (*((_DWORD *)a2 + 29) ^ v63) & 0x390D;
        LODWORD(v36) = v63 ^ *((_DWORD *)a2 + 29);
        v64 = (struct _W32PROCESS *)*((_QWORD *)a2 + 80);
        *((_DWORD *)a2 + 29) ^= v36 & 0x390D;
        v65 = (struct _W32PROCESS *)*((_QWORD *)a1 + 80);
        SURFACE::vAppContainerOwner(a1, v64);
        SURFACE::vAppContainerOwner(a2, v65);
        if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
        {
          v67 = *(_QWORD *)((char *)a1 + 668);
          v68 = *((_DWORD *)a1 + 165);
          v69 = *((_DWORD *)a1 + 166);
          *((_DWORD *)a2 + 29) |= 0x800u;
          *((_DWORD *)a2 + 165) = v68;
          *((_DWORD *)a2 + 166) = v69;
          *(_QWORD *)((char *)a2 + 668) = v67;
        }
        if ( v81 )
        {
          *((_WORD *)a1 + 51) &= ~0x200u;
          v70 = *(_DWORD *)a2 & 0x800000;
          if ( v70 )
            *((_WORD *)a2 + 51) |= 0x200u;
          if ( v80 && v70 )
            *((_WORD *)a2 + 51) |= 0x400u;
          *v85 = 1;
        }
        if ( v16 )
        {
          UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
            v93,
            v66);
          v71 = *v16;
          *(_QWORD *)&v93[32] = 0LL;
          *(_DWORD *)&v93[40] = 1;
          SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v93, v71);
          v16 = 0LL;
          if ( v22 )
          {
            v72 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 640LL);
            if ( v72 )
            {
              if ( v72() >= 0 )
                vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v13 + 6), *(_QWORD *)&v93[32], a2, v88);
            }
          }
          while ( 1 )
          {
            v73 = SURFACE::GetFirstLSurf(a1);
            if ( !v73 )
              break;
            if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
              vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v13 + 6), v73, a2);
          }
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v93);
        }
        if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
        {
          *(_QWORD *)v93 = HmgShareLockEx(*((_QWORD *)a2 + 18), 5, 0);
          memset(&v93[8], 0, 32);
          PushThreadGuardedObject(
            &v93[8],
            v93,
            UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
          if ( *(_QWORD *)v93 )
          {
            if ( *(HLSURF **)(*(_QWORD *)v93 + 24LL) != v16 )
            {
              v74 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 672LL);
              if ( v74 )
              {
                if ( v74() >= 0 )
                  MulReplaceRedirectionChild(*(_QWORD *)(*(_QWORD *)v93 + 24LL), (char *)a1 + 24, (char *)a2 + 24);
              }
            }
          }
          HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(v93);
        }
        if ( v84 != (_DWORD)v16 )
        {
          HmgDecrementShareReferenceCountEx(a1, 0LL);
          HmgIncrementShareReferenceCount(a2);
        }
        if ( *((_DWORD *)a1 + 2) != (_DWORD)v16 )
        {
          *v85 = 1;
LABEL_63:
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v87);
          if ( v9 )
            goto LABEL_72;
          v19 = v80;
LABEL_66:
          if ( v81 != (_DWORD)v16 )
          {
            *((_WORD *)a2 + 51) &= ~0x200u;
            v78 = *(_DWORD *)a1 & 0x800000;
            if ( v78 )
              *((_WORD *)a1 + 51) |= 0x200u;
            if ( v19 )
            {
              if ( v78 )
                *((_WORD *)a1 + 51) |= 0x400u;
            }
          }
          goto LABEL_72;
        }
        SURFREF::SURFREF((SURFREF *)v93, *((HSURF *)a1 + 4), v86);
        SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v82);
        v82[0] = v16;
        SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
        v83[0] = v16;
        v9 = SURFREF::bDeleteSurface((SURFREF *)v93, v75);
        if ( !v9 )
          *((_QWORD *)a1 + 70) = v16;
        SURFREF::~SURFREF((SURFREF *)v93);
        if ( v9 )
          goto LABEL_63;
      }
      v76 = HmgQueryAltLock(*((_QWORD *)a1 + 4));
      v77 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
      HmgSwapLockedHandleContents(*((_QWORD *)a2 + 4), v77, *((_QWORD *)a1 + 4), v76, 5);
      goto LABEL_63;
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v82);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
  return 0LL;
}
