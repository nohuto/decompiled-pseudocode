/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x140169254 (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140169390 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x140169470 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  struct _RECTL *v11; // r14
  struct _CLIPOBJ *v12; // rdi
  HDEV v15; // r12
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rbx
  int v18; // eax
  void (__fastcall *v19)(__int64); // rcx
  __int64 v20; // rdx
  LONG x; // ecx
  LONG left; // edx
  int v23; // r15d
  int v24; // edx
  LONG v25; // eax
  LONG v26; // eax
  bool v27; // zf
  struct _RECTL *v28; // r13
  unsigned int v29; // r9d
  BYTE iDComplexity; // bl
  int v31; // eax
  __int64 v32; // r15
  struct _POINTL *v33; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v36; // rbx
  int v37; // eax
  RECTL rclBounds; // xmm1
  __int64 v40; // rcx
  PVOID *v41; // rdi
  int v42; // eax
  PVOID *v43; // rbx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // esi
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  LONG y; // r8d
  LONG v58; // ecx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  BOOL (__stdcall *v65)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  BYTE v70; // [rsp+70h] [rbp-90h]
  int v71; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v72; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v73; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v74; // [rsp+88h] [rbp-78h]
  int v75; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+94h] [rbp-6Ch]
  struct _XLATEOBJ *v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v79; // [rsp+A8h] [rbp-58h]
  HDEV hdev; // [rsp+B0h] [rbp-50h] BYREF
  struct SPRITE *v81; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL *v82; // [rsp+C0h] [rbp-40h]
  struct _BRUSHOBJ *v83; // [rsp+C8h] [rbp-38h]
  struct _POINTL *v84; // [rsp+D0h] [rbp-30h]
  struct _SURFOBJ *v85; // [rsp+D8h] [rbp-28h]
  _QWORD v86[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h] BYREF
  bool v89; // [rsp+100h] [rbp+0h]
  struct _SPRITESTATE *v90[24]; // [rsp+110h] [rbp+10h] BYREF
  struct _SPRITESTATE *v91[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v92; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v93; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v94; // [rsp+2B0h] [rbp+1B0h] BYREF
  RECTL v95; // [rsp+2C0h] [rbp+1C0h] BYREF

  v11 = a6;
  v84 = a8;
  v12 = a4;
  v77 = a5;
  v83 = a9;
  v82 = a10;
  v74 = a4;
  v85 = a3;
  v73 = a6;
  v71 = 0;
  v78 = 0LL;
  v81 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  v94 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v40 = *(_QWORD *)&a4->rclBounds.right;
    v94 = rclBounds;
    if ( rclBounds.left == (_DWORD)v40 || v94.top == HIDWORD(v40) )
      return 1LL;
    v95 = rclBounds;
    ERECTL::operator*=(&v95, a6);
    v11 = &v95;
    v73 = &v95;
  }
  hdev = a2->hdev;
  v86[1] = 0LL;
  v86[0] = 0LL;
  v15 = hdev + 20;
  v87 = 0;
  UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)v86);
  v17 = Gre::Base::Globals(v16);
  v18 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  v19 = (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal;
  v20 = *(_QWORD *)v17 + 1040LL;
  v88 = v20;
  v89 = v18 != 0;
  if ( !v18 )
    v19 = (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v19, v20);
  if ( !UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)v86) )
  {
    SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)&v88);
    return 0LL;
  }
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v15) && !(unsigned int)SURFACE::bIncludeSprites() )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v91, (struct PDEVOBJ *)&hdev);
    x = a7->x;
    left = v11->left;
    v23 = v11->top - a7->y;
    v92.top = a7->y;
    v24 = left - x;
    v25 = v11->right - v24;
    v92.left = x;
    v92.right = v25;
    v26 = v11->bottom - v23;
    v75 = v24;
    v92.bottom = v26;
    v76 = v23;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v15 + 30));
    v27 = *((_QWORD *)v15 + 130) == 0LL;
    v28 = v73;
    v72 = 0LL;
    if ( !v27 )
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v15, &v72, v73, v12, 1);
    SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v15 + 30));
    if ( v75 > 0 )
    {
      v29 = 3;
      if ( v23 <= 0 )
        v29 = 1;
    }
    else
    {
      v29 = 0;
      if ( v23 > 0 )
        v29 = 2;
    }
    if ( v12 )
    {
      iDComplexity = v12->iDComplexity;
      v70 = iDComplexity;
      if ( iDComplexity )
        v94 = v12->rclBounds;
    }
    else
    {
      iDComplexity = 0;
      v70 = 0;
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v90, (struct _SPRITESTATE *)v15, &v92, v29, 0LL);
    while ( 1 )
    {
      v31 = ENUMAREAS::bEnum((ENUMAREAS *)v90, &v81, &v92);
      v93.left = v75 + v92.left;
      v93.right = v75 + v92.right;
      LODWORD(v73) = v31;
      v93.top = v23 + v92.top;
      v93.bottom = v23 + v92.bottom;
      if ( !iDComplexity || bIntersect(&v93, &v94, &v12->rclBounds) )
        break;
LABEL_32:
      if ( !(_DWORD)v73 )
      {
        if ( iDComplexity )
          v12->rclBounds = v94;
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v90);
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v91);
        SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)&v88);
        return 1LL;
      }
    }
    if ( v81 )
    {
      v32 = *((_QWORD *)v81 + 20);
      v33 = (struct _POINTL *)((char *)v81 + 168);
    }
    else
    {
      v32 = *((_QWORD *)v15 + 4);
      v33 = &v72;
    }
    p_pvScan0 = 0LL;
    v79 = v33;
    if ( a1 )
    {
      hsurf = (int)a1[1].hsurf;
      if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a1[-1].pvScan0;
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)a1->hdev);
      }
    }
    v36 = 0LL;
    if ( v32 )
    {
      v37 = *(_DWORD *)(v32 + 88);
      if ( ((v37 & 0x4000) != 0 || v37 < 0) && (v37 & 0x200) == 0 )
      {
        v36 = v32 - 24;
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v32 + 24));
      }
    }
    if ( a11 == 52428 )
    {
      INVOKEOFFCOPYBITS(&v72, a1, v79, (struct _SURFOBJ *)v32, v74, v77, &v93, (struct _POINTL *)&v92);
LABEL_27:
      if ( v36 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v36 + 48));
      if ( p_pvScan0 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      v23 = v76;
      iDComplexity = v70;
      v12 = v74;
      goto LABEL_32;
    }
    if ( v84 )
    {
      LODWORD(v78) = v93.left + v84->x - v28->left;
      HIDWORD(v78) = v93.top + v84->y - v28->top;
    }
    if ( a1->iType == 1 )
    {
      if ( bAllowShareAccess(a1)
        && GreGetCurrentThread(v47)
        && *((_QWORD *)GreGetCurrentThread(v48) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v49) + 85) || *((_DWORD *)GreGetCurrentThread(v50) + 86)) )
      {
        v51 = *((_QWORD *)GreGetCurrentThread(v50) + 34);
        if ( (*(_DWORD *)(v51 + 20) & 1) != 0 )
        {
          v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v51) + 34) + 72LL);
          goto LABEL_90;
        }
      }
      if ( a1->iType == 1
        && bAllowShareAccess(a1)
        && GreGetCurrentThread(v53)
        && *((_QWORD *)GreGetCurrentThread(v54) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v55) + 85) || *((_DWORD *)GreGetCurrentThread(v56) + 86)) )
      {
        goto LABEL_89;
      }
    }
    if ( ((__int64)a1[1].hsurf & 1) == 0 )
    {
LABEL_89:
      v52 = EngBitBlt;
    }
    else
    {
      v71 |= 2u;
      v52 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
    }
LABEL_90:
    OffBitBlt(
      (_DWORD)v52,
      (unsigned int)&v72,
      (_DWORD)a1,
      (_DWORD)v79,
      v32,
      (__int64)v85,
      (__int64)v74,
      (__int64)v77,
      (__int64)&v93,
      (__int64)&v92,
      (__int64)&v78,
      (__int64)v83,
      (__int64)v82,
      a11);
    if ( (v71 & 2) != 0 )
      v71 &= ~2u;
    goto LABEL_27;
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v90, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v15 + 167) )
  {
    y = a7->y;
    v58 = a7->x + v11->right - v11->left;
    v92.left = a7->x;
    v92.right = v58;
    v59 = v11->bottom - v11->top;
    v92.top = y;
    v92.bottom = y + v59;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v86, (struct _SPRITESTATE *)v15, &v92);
    if ( v86[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v15, &v92);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v15 + 167);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v86);
  }
  v41 = 0LL;
  if ( a1 )
  {
    v42 = (int)a1[1].hsurf;
    if ( ((v42 & 0x4000) != 0 || v42 < 0) && (v42 & 0x200) == 0 )
    {
      v41 = &a1[-1].pvScan0;
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)a1->hdev);
    }
  }
  v43 = 0LL;
  if ( a2 )
  {
    v44 = (int)a2[1].hsurf;
    if ( ((v44 & 0x4000) != 0 || v44 < 0) && (v44 & 0x200) == 0 )
    {
      v43 = &a2[-1].pvScan0;
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)a2->hdev);
    }
  }
  v72 = 0LL;
  if ( a11 != 52428 )
  {
    if ( a1->iType != 1 )
      goto LABEL_109;
    if ( bAllowShareAccess(a1)
      && GreGetCurrentThread(v60)
      && *((_QWORD *)GreGetCurrentThread(v61) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v62) + 85) || *((_DWORD *)GreGetCurrentThread(v63) + 86)) )
    {
      v64 = *((_QWORD *)GreGetCurrentThread(v63) + 34);
      if ( (*(_DWORD *)(v64 + 20) & 1) != 0 )
      {
        v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v64) + 34) + 72LL);
LABEL_112:
        v45 = OffBitBlt(
                (_DWORD)v65,
                (unsigned int)&v72,
                (_DWORD)a1,
                (unsigned int)&v72,
                (__int64)a2,
                (__int64)v85,
                (__int64)v74,
                (__int64)v77,
                (__int64)v73,
                (__int64)a7,
                (__int64)v84,
                (__int64)v83,
                (__int64)v82,
                a11);
        goto LABEL_60;
      }
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !GreGetCurrentThread(v66)
      || !*((_QWORD *)GreGetCurrentThread(v67) + 34)
      || !*((_DWORD *)GreGetCurrentThread(v68) + 85) && !*((_DWORD *)GreGetCurrentThread(v69) + 86) )
    {
LABEL_109:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v65 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
        goto LABEL_112;
      }
    }
    v65 = EngBitBlt;
    goto LABEL_112;
  }
  v45 = INVOKEOFFCOPYBITS(&v72, a1, &v72, a2, v74, v77, v11, a7);
LABEL_60:
  v46 = v45;
  if ( v43 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v43[6]);
  if ( v41 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v41[6]);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v90);
  SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)&v88);
  return v46;
}
