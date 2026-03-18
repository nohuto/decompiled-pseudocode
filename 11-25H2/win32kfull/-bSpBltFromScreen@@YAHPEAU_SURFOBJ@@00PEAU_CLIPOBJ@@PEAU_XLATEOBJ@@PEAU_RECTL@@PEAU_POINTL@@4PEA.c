/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90
 * Callers:
 *     <none>
 * Callees:
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x14000885C (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140008998 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x140008A74 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140008C94 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140008D0C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD838 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD8F4 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1401853F4 (OffBitBlt.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1402160B0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1402317E8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032F13C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  struct _CLIPOBJ *v12; // rdi
  HDEV v14; // r14
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  int v17; // eax
  __int64 v18; // r12
  PVOID *v19; // rbx
  void (*v20)(HSEMAPHORE); // rcx
  __int64 v21; // r12
  int v22; // r8d
  struct _RECTL *v23; // r13
  LONG v24; // eax
  struct _POINTL *v25; // r15
  unsigned int v26; // r9d
  BYTE iDComplexity; // bl
  int v28; // eax
  __int64 v29; // r12
  void (*v30)(HSEMAPHORE); // rcx
  struct _SURFOBJ *v32; // rdx
  struct _POINTL *v33; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  struct _SURFOBJ *v36; // rcx
  PVOID *v37; // rbx
  int v38; // eax
  RECTL rclBounds; // xmm0
  PVOID *v40; // rdi
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // esi
  void (*v45)(HSEMAPHORE); // rcx
  void (*v46)(HSEMAPHORE); // rcx
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v49; // ecx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v53; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  struct _CLIPOBJ *v57; // [rsp+90h] [rbp-70h]
  int v58; // [rsp+98h] [rbp-68h]
  struct _POINTL *v59; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v60; // [rsp+A8h] [rbp-58h]
  struct _XLATEOBJ *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  HDEV hdev; // [rsp+C0h] [rbp-40h] BYREF
  struct SPRITE *v64; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v65; // [rsp+D0h] [rbp-30h]
  struct _BRUSHOBJ *v66; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v67; // [rsp+E0h] [rbp-20h]
  struct _SURFOBJ *v68; // [rsp+E8h] [rbp-18h]
  _QWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  _BYTE v72[192]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v73[192]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v74; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v75; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v76; // [rsp+2B0h] [rbp+1B0h] BYREF
  RECTL v77; // [rsp+2C0h] [rbp+1C0h] BYREF

  v61 = a5;
  v12 = a4;
  v67 = a8;
  v66 = a9;
  v65 = a10;
  v57 = a4;
  v68 = a3;
  v54 = a6;
  v52 = 0;
  v62 = 0LL;
  v64 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v76 = rclBounds;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v76) )
      return 1LL;
    v77 = rclBounds;
    ERECTL::operator*=(&v77);
    v54 = &v77;
  }
  hdev = a2->hdev;
  v69[1] = 0LL;
  v69[0] = 0LL;
  v14 = hdev + 20;
  v70 = 0;
  v59 = (struct _POINTL *)(hdev + 20);
  UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)v69);
  v16 = Gre::Base::Globals(v15);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  v18 = *(_QWORD *)v16;
  v19 = 0LL;
  v20 = GreAcquireSemaphoreSharedInternal;
  v21 = v18 + 1040;
  v56 = v17;
  v71 = v21;
  if ( !v17 )
    v20 = GreAcquireSemaphoreInternal;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v20, v21);
  if ( UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)v69) )
  {
    if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v14) && !(unsigned int)SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v73, (struct PDEVOBJ *)&hdev);
      v74.left = a7->x;
      v22 = v54->left - v74.left;
      v23 = v54;
      v74.top = a7->y;
      v58 = v22;
      v24 = v54->right - v22;
      v55 = v54->top - v74.top;
      v74.right = v24;
      v74.bottom = v54->bottom - v55;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v14 + 30));
      v25 = v59;
      v53 = 0LL;
      if ( v59[130] )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v59, &v53, v54, v12, 1);
      SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v14 + 30));
      if ( v58 > 0 )
      {
        v26 = 3;
        if ( v55 <= 0 )
          v26 = 1;
      }
      else
      {
        v26 = 0;
        if ( v55 > 0 )
          v26 = 2;
      }
      if ( v12 )
      {
        iDComplexity = v12->iDComplexity;
        v51 = iDComplexity;
        if ( iDComplexity )
          v76 = v12->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v51 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v72, (struct _SPRITESTATE *)v25, &v74, v26, 0LL);
      while ( 1 )
      {
        v28 = ENUMAREAS::bEnum((ENUMAREAS *)v72, &v64, &v74);
        v75.left = v58 + v74.left;
        v75.right = v58 + v74.right;
        v75.top = v55 + v74.top;
        LODWORD(v54) = v28;
        v75.bottom = v55 + v74.bottom;
        if ( !iDComplexity || bIntersect(&v75, &v76, &v12->rclBounds) )
          break;
LABEL_18:
        if ( !(_DWORD)v54 )
        {
          v29 = v71;
          if ( iDComplexity )
            v12->rclBounds = v76;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v72);
          SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v73);
          v30 = GreReleaseSemaphoreSharedInternal;
          if ( !v56 )
            v30 = GreReleaseSemaphoreExclusiveInternal;
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v30, v29);
          return 1LL;
        }
      }
      if ( v64 )
      {
        v32 = (struct _SURFOBJ *)*((_QWORD *)v64 + 20);
        v33 = (struct _POINTL *)((char *)v64 + 168);
      }
      else
      {
        v32 = (struct _SURFOBJ *)v25[4];
        v33 = &v53;
      }
      p_pvScan0 = 0LL;
      v59 = v33;
      v60 = v32;
      if ( a1 )
      {
        hsurf = (int)a1[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &a1[-1].pvScan0;
          GreLockDisplayDevice(a1->hdev);
        }
      }
      v36 = v60;
      v37 = 0LL;
      if ( v60 )
      {
        v38 = (int)v60[1].hsurf;
        if ( (v38 & 0x80004000) != 0 && (v38 & 0x200) == 0 )
        {
          v37 = &v60[-1].pvScan0;
          GreLockDisplayDevice(v60->hdev);
          v36 = v60;
        }
      }
      if ( a11 == 52428 )
      {
        INVOKEOFFCOPYBITS(&v53, a1, v59, v36, v57, v61, &v75, (struct _POINTL *)&v74);
LABEL_36:
        if ( v37 )
          GreUnlockDisplayDevice(v37[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        iDComplexity = v51;
        v12 = v57;
        goto LABEL_18;
      }
      if ( v67 )
      {
        LODWORD(v62) = v75.left + v67->x - v23->left;
        HIDWORD(v62) = v75.top + v67->y - v23->top;
      }
      if ( a1->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(a1)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
        {
          v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
          goto LABEL_90;
        }
        if ( a1->iType == 1
          && (unsigned int)bAllowShareAccess(a1)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88)) )
        {
          goto LABEL_89;
        }
      }
      if ( ((__int64)a1[1].hsurf & 1) == 0 )
      {
LABEL_89:
        v47 = EngBitBlt;
      }
      else
      {
        v52 |= 2u;
        v47 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
      }
LABEL_90:
      OffBitBlt(
        (_DWORD)v47,
        (unsigned int)&v53,
        (_DWORD)a1,
        (_DWORD)v59,
        (__int64)v60,
        (__int64)v68,
        (__int64)v57,
        (__int64)v61,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v62,
        (__int64)v66,
        (__int64)v65,
        a11);
      if ( (v52 & 2) != 0 )
        v52 &= ~2u;
      goto LABEL_36;
    }
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v72, (struct PDEVOBJ *)&hdev);
    if ( *((_QWORD *)v14 + 167) )
    {
      y = a7->y;
      v74.left = a7->x;
      v49 = v74.left + v54->right - v54->left;
      v74.top = y;
      v74.right = v49;
      v74.bottom = y + v54->bottom - v54->top;
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v69, (struct _SPRITESTATE *)v14, &v74);
      if ( v69[0] )
        vSpRedrawAreaExMirror((struct _SPRITESTATE *)v14, &v74);
      a2 = (struct _SURFOBJ *)*((_QWORD *)v14 + 167);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v69);
    }
    v40 = 0LL;
    if ( a1 )
    {
      v41 = (int)a1[1].hsurf;
      if ( (v41 & 0x80004000) != 0 && (v41 & 0x200) == 0 )
      {
        v40 = &a1[-1].pvScan0;
        GreLockDisplayDevice(a1->hdev);
      }
    }
    if ( a2 )
    {
      v42 = (int)a2[1].hsurf;
      if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
      {
        v19 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
    }
    v53 = 0LL;
    if ( a11 == 52428 )
    {
      v43 = INVOKEOFFCOPYBITS(&v53, a1, &v53, a2, v57, v61, v54, a7);
LABEL_59:
      v44 = v43;
      if ( v19 )
        GreUnlockDisplayDevice(v19[6]);
      if ( v40 )
        GreUnlockDisplayDevice(v40[6]);
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v72);
      v45 = GreReleaseSemaphoreSharedInternal;
      if ( !v56 )
        v45 = GreReleaseSemaphoreExclusiveInternal;
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v45, v21);
      return v44;
    }
    if ( a1->iType != 1 )
      goto LABEL_109;
    if ( (unsigned int)bAllowShareAccess(a1)
      && GreGetCurrentThread()
      && *((_QWORD *)GreGetCurrentThread() + 34)
      && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
      && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
    {
      v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
LABEL_112:
      v43 = OffBitBlt(
              (_DWORD)v50,
              (unsigned int)&v53,
              (_DWORD)a1,
              (unsigned int)&v53,
              (__int64)a2,
              (__int64)v68,
              (__int64)v57,
              (__int64)v61,
              (__int64)v54,
              (__int64)a7,
              (__int64)v67,
              (__int64)v66,
              (__int64)v65,
              a11);
      goto LABEL_59;
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !GreGetCurrentThread()
      || !*((_QWORD *)GreGetCurrentThread() + 34)
      || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
    {
LABEL_109:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v50 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
        goto LABEL_112;
      }
    }
    v50 = EngBitBlt;
    goto LABEL_112;
  }
  v46 = GreReleaseSemaphoreSharedInternal;
  if ( !v56 )
    v46 = GreReleaseSemaphoreExclusiveInternal;
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v46, v21);
  return 0LL;
}
