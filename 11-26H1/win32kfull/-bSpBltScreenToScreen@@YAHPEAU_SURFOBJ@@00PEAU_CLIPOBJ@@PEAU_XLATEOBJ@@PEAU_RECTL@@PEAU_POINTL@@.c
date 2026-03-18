/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     ??0?$SEMOBJEXORSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x14001B724 (--0-$SEMOBJEXORSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x140159580 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140166BB0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x140169254 (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140169390 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1401D5038 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // esi
  struct _RECTL *v12; // r14
  RECTL rclBounds; // xmm0
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  int v17; // eax
  int v18; // r12d
  int v19; // edi
  struct _SPRITESTATE *v20; // rbx
  unsigned int v21; // r13d
  struct _CLIPOBJ *v23; // r9
  struct _RECTL *v24; // r8
  struct _SURFOBJ *v25; // r13
  struct SPRITE *v26; // rbx
  struct _SURFOBJ *v27; // r12
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v30; // rcx
  PVOID *v31; // rdi
  int v32; // eax
  __int64 v33; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v35; // r13
  XCLIPOBJ *v36; // r12
  __int64 v37; // r11
  struct REGION *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  HDEV v49; // rax
  int v50; // eax
  struct _CLIPOBJ *v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+78h] [rbp-88h]
  struct _POINTL v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+8Ch] [rbp-74h]
  int v56; // [rsp+90h] [rbp-70h]
  LONG v57; // [rsp+94h] [rbp-6Ch]
  int v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+9Ch] [rbp-64h]
  LONG v60; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v61; // [rsp+A8h] [rbp-58h]
  struct _RECTL v62; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v63; // [rsp+C0h] [rbp-40h]
  HDEV hdev; // [rsp+C8h] [rbp-38h] BYREF
  struct SPRITE *v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D8h] [rbp-28h]
  struct SPRITE *v67; // [rsp+E0h] [rbp-20h] BYREF
  struct SPRITE *v68; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL *v70; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v71; // [rsp+100h] [rbp+0h]
  struct REGION *v72; // [rsp+108h] [rbp+8h] BYREF
  struct _SPRITESTATE *v73; // [rsp+110h] [rbp+10h]
  struct _POINTL v74; // [rsp+118h] [rbp+18h] BYREF
  int v75; // [rsp+120h] [rbp+20h]
  struct _RECTL v76; // [rsp+128h] [rbp+28h] BYREF
  __int64 v77; // [rsp+138h] [rbp+38h] BYREF
  struct _SURFOBJ *v78; // [rsp+140h] [rbp+40h]
  struct _SURFOBJ *v79; // [rsp+148h] [rbp+48h]
  struct _XLATEOBJ *v80; // [rsp+150h] [rbp+50h]
  struct _POINTL *v81; // [rsp+158h] [rbp+58h]
  __int64 *v82; // [rsp+160h] [rbp+60h]
  struct _BRUSHOBJ *v83; // [rsp+168h] [rbp+68h]
  struct _SURFOBJ *v84; // [rsp+170h] [rbp+70h]
  _QWORD v85[3]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v86[16]; // [rsp+190h] [rbp+90h] BYREF
  DC *v87[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v88[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v89[80]; // [rsp+220h] [rbp+120h] BYREF
  int v90; // [rsp+270h] [rbp+170h]
  struct _SPRITESTATE *v91[24]; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v92; // [rsp+340h] [rbp+240h] BYREF
  struct _RECTL v93; // [rsp+350h] [rbp+250h] BYREF
  struct _RECTL v94; // [rsp+360h] [rbp+260h] BYREF
  RECTL v95; // [rsp+370h] [rbp+270h] BYREF
  RECTL v96; // [rsp+380h] [rbp+280h] BYREF
  struct _RECTL v97; // [rsp+390h] [rbp+290h] BYREF

  v11 = 0;
  v12 = a6;
  v81 = a8;
  v80 = a5;
  v83 = a9;
  v82 = (__int64 *)a10;
  v84 = a3;
  v79 = a1;
  v51 = a4;
  v52 = 0;
  v69 = 0LL;
  v65 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v97 = 0LL;
  v92 = 0LL;
  v76 = 0LL;
  v96 = 0LL;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v95 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v95) )
      return 1LL;
    v96 = rclBounds;
    ERECTL::operator*=(&v96.left, &a6->left);
    v12 = &v96;
  }
  hdev = a1->hdev;
  *(_QWORD *)&v62.right = 0LL;
  *(_QWORD *)&v62.left = 0LL;
  v63 = 0;
  UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)&v62);
  v16 = Gre::Base::Globals(v15);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED<6>::SEMOBJEXORSHARED<6>((__int64)v86, v16, v17 != 0);
  if ( !UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)&v62) )
    goto LABEL_101;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v91, (struct PDEVOBJ *)&hdev);
  v18 = v12->left - a7->x;
  v19 = v12->top - a7->y;
  v20 = (struct _SPRITESTATE *)(hdev + 20);
  v59 = v18;
  v73 = (struct _SPRITESTATE *)(hdev + 20);
  v58 = v19;
  if ( v18 <= 0 )
  {
    v21 = 0;
    if ( v19 > 0 )
      v21 = 2;
  }
  else
  {
    v21 = 3;
    if ( v19 <= 0 )
      v21 = 1;
  }
  v54 = v21;
  if ( v51 )
  {
    if ( v51->iDComplexity )
      v95 = v51->rclBounds;
    else
      v51 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((HSEMAPHORE *)hdev + 25);
  v74 = 0LL;
  if ( !*((_QWORD *)v20 + 130) )
    goto LABEL_23;
  v92.left = v12->left - v18;
  v92.right = v12->right - v18;
  v92.top = v12->top - v19;
  v92.bottom = v12->bottom - v19;
  if ( *((_QWORD *)v20 + 131) )
  {
    v23 = 0LL;
    v24 = &v92;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v92, &v97) )
  {
    v23 = v51;
    v24 = &v97;
LABEL_22:
    vSpUpdateLockedScreenAreas(v20, &v74, v24, v23, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlockShared((struct _SPRITESTATE *)((char *)v20 + 120));
  v62.left = v12->left - v18;
  v62.top = v12->top - v19;
  v62.right = v12->right - v18;
  v62.bottom = v12->bottom - v19;
  ERECTL::operator+=((__int64)&v62, (__int64)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v85, v20, &v62);
  if ( !v85[0] )
    goto LABEL_98;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v89, v20, v12, v21, &v62);
  v77 = 0LL;
  if ( !v90 )
    goto LABEL_97;
  do
  {
    v66 = ENUMAREAS::bEnum((ENUMAREAS *)v89, &v65, &v76);
    v92.left = v76.left - v18;
    v92.right = v76.right - v18;
    v92.top = v76.top - v19;
    v92.bottom = v76.bottom - v19;
    do
    {
      if ( v65 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v65 + 20);
        v71 = (struct _POINTL *)((char *)v65 + 168);
      }
      else
      {
        v25 = v79;
        v71 = (struct _POINTL *)&v77;
      }
      v61 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v88, v20, &v92, v54, 0LL);
      do
      {
        v75 = ENUMAREAS::bEnum((ENUMAREAS *)v88, &v68, &v94);
        if ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v88, &v67) )
        {
          do
          {
            v26 = v67;
            v68 = v67;
          }
          while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v88, &v67) );
        }
        else
        {
          v26 = v68;
        }
        if ( v26 )
        {
          v27 = (struct _SURFOBJ *)*((_QWORD *)v26 + 20);
          v70 = (struct _POINTL *)((char *)v26 + 168);
        }
        else
        {
          v27 = v79;
          v70 = (struct _POINTL *)&v77;
        }
        v93.left = v59 + v94.left;
        v93.right = v59 + v94.right;
        v78 = v27;
        v93.top = v19 + v94.top;
        v93.bottom = v19 + v94.bottom;
        if ( v51 && !bIntersect(&v93, &v95, &v51->rclBounds) )
          goto LABEL_90;
        p_pvScan0 = 0LL;
        *(_QWORD *)&v62.left = 0LL;
        if ( v25 )
        {
          hsurf = (int)v25[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v25[-1].pvScan0;
            v30 = (__int64)v25->hdev;
            *(_QWORD *)&v62.left = (char *)v25 - 24;
            GreAcquireSemaphore<8,PDEVOBJ>(v30);
          }
        }
        v31 = 0LL;
        if ( v27 )
        {
          v32 = (int)v27[1].hsurf;
          if ( ((v32 & 0x4000) != 0 || v32 < 0) && (v32 & 0x200) == 0 )
          {
            v31 = &v27[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v27->hdev);
          }
        }
        v72 = 0LL;
        v55 = 0;
        v56 = 0;
        v33 = *((unsigned int *)hdev + 644);
        v60 = *((_DWORD *)hdev + 645);
        v53 = 0LL;
        v57 = v33;
        if ( !v51 )
        {
          CurrentThread = GreGetCurrentThread(v33);
          v35 = CurrentThread;
          if ( CurrentThread && (*((_DWORD *)CurrentThread + 84) & 1) != 0 && *((_QWORD *)CurrentThread + 37) )
          {
            XDCOBJ::XDCOBJ((XDCOBJ *)v87);
            v87[0] = *((DC **)v35 + 37);
            v36 = (DC *)((char *)v87[0] + 1768);
            v72 = XDCOBJ::prgnEffRao(v87);
            if ( (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
            {
              v53.x = -v57;
              v53.y = -v60;
              RGNOBJ::bOffset((RGNOBJ *)&v72, &v53);
              v56 = 1;
            }
            v38 = XDCOBJ::prgnEffRao(v87);
            XCLIPOBJ::vSetup(v36, v38, (const struct ERECTL *)&v93, 1);
            v51 = (struct _CLIPOBJ *)v36;
            v27 = v78;
            v55 = 1;
          }
          v25 = v61;
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v62, &v51) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v71, v25, v70, v27, v51, v80, &v93, (struct _POINTL *)&v94);
            goto LABEL_81;
          }
          if ( v81 )
          {
            LODWORD(v69) = v93.left + v81->x - v12->left;
            HIDWORD(v69) = v93.top + v81->y - v12->top;
          }
          *(_QWORD *)&v62.left = v51;
          if ( v25->iType == 1 )
          {
            if ( bAllowShareAccess(v25)
              && GreGetCurrentThread(v39)
              && *((_QWORD *)GreGetCurrentThread(v40) + 34)
              && (*((_DWORD *)GreGetCurrentThread(v41) + 85) || *((_DWORD *)GreGetCurrentThread(v42) + 86)) )
            {
              v43 = *((_QWORD *)GreGetCurrentThread(v42) + 34);
              if ( (*(_DWORD *)(v43 + 20) & 1) != 0 )
              {
                v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v43) + 34) + 72LL);
                goto LABEL_79;
              }
            }
            if ( v25->iType == 1
              && bAllowShareAccess(v25)
              && GreGetCurrentThread(v45)
              && *((_QWORD *)GreGetCurrentThread(v46) + 34)
              && (*((_DWORD *)GreGetCurrentThread(v47) + 85) || *((_DWORD *)GreGetCurrentThread(v48) + 86)) )
            {
              goto LABEL_78;
            }
          }
          if ( ((__int64)v25[1].hsurf & 1) == 0 )
          {
LABEL_78:
            v44 = EngBitBlt;
          }
          else
          {
            v49 = v25->hdev;
            v52 |= 1u;
            v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v49 + 164);
          }
LABEL_79:
          OffBitBlt(
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v44,
            (LONG *)v71,
            (__int64)v25,
            v70,
            (__int64)v27,
            (__int64)v84,
            *(__int64 *)&v62.left,
            (__int64)v80,
            &v93,
            (__int64 *)&v94.left,
            (__int64)&v69,
            (__int64)v83,
            v82,
            a11);
          if ( (v52 & 1) != 0 )
            v52 &= ~1u;
        }
LABEL_81:
        if ( v55 == 1 )
        {
          if ( v56 == 1 )
          {
            v53.x = v57;
            v53.y = v60;
            RGNOBJ::bOffset((RGNOBJ *)&v72, &v53);
          }
          v51 = 0LL;
        }
        if ( v31 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v31[6]);
        if ( p_pvScan0 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
        v19 = v58;
LABEL_90:
        if ( v51 )
          v51->rclBounds = v95;
      }
      while ( v75 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v88);
      v50 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v89, &v65);
      v20 = v73;
    }
    while ( v50 );
    if ( v65 )
      vSpRedrawArea(v73, &v76, 0);
    v18 = v59;
  }
  while ( v66 );
LABEL_97:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v89);
LABEL_98:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v85);
  SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)v20 + 15);
  if ( *((_QWORD *)v20 + 130) )
    vSpUpdateLockedScreenAreas(v20, &v74, v12, v51, 0);
  SPRITERANGELOCK::vUnlockExclusive((struct _SPRITESTATE *)((char *)v20 + 120));
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v85);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v91);
  v11 = 1;
LABEL_101:
  SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)v86);
  return v11;
}
