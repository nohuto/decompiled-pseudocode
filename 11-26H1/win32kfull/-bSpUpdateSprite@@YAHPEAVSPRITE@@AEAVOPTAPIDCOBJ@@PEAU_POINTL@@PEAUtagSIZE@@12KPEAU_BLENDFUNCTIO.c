/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x140075588 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x140169CC4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x140237E14 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x140316840 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140317128 (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        struct OPTAPIDCOBJ *a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        struct OPTAPIDCOBJ *a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v11; // rsi
  struct _RECTL *v13; // r13
  __int64 *v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // r12d
  _DWORD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // zf
  unsigned int v22; // r14d
  unsigned int v23; // r15d
  OPTAPIDCOBJ *v24; // rdx
  unsigned int updated; // edi
  int v27; // edx
  LONG v28; // ecx
  int v29; // edx
  LONG cx; // ecx
  LONG cy; // eax
  LONG v32; // ecx
  unsigned int v33; // edx
  int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // edx
  struct _POINTL *v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // eax
  struct _SPRITESTATE *v40; // rsi
  LONG v41; // ecx
  LONG v42; // eax
  struct _BLENDFUNCTION v43; // [rsp+50h] [rbp-B0h] BYREF
  struct _RECTL v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  struct _RECTL v46; // [rsp+80h] [rbp-80h] BYREF
  OPTAPIDCOBJ *v47; // [rsp+90h] [rbp-70h]
  struct _POINTL *v48; // [rsp+98h] [rbp-68h]
  struct _POINTL *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  struct tagSIZE *v53; // [rsp+C0h] [rbp-40h]
  struct _SPRITESTATE *v54; // [rsp+C8h] [rbp-38h]
  LONG *v55; // [rsp+D0h] [rbp-30h]
  struct _SPRITESTATE *v56[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v57; // [rsp+1A0h] [rbp+A0h] BYREF

  v11 = a8;
  v13 = a10;
  v47 = a5;
  v48 = a6;
  v53 = a4;
  v49 = a3;
  *(_QWORD *)&v46.left = a2;
  v43 = 0;
  if ( a1 )
  {
    v14 = (__int64 *)*((_QWORD *)a1 + 2);
    v54 = (struct _SPRITESTATE *)v14;
    v50 = *v14;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v56, (struct PDEVOBJ *)&v50);
    v52 = 0LL;
    v15 = a9 & 0xEFFFFFFF;
    v51 = a9 & 0x10000000;
    v57 = 0LL;
    if ( (a9 & 0x10000000) == 0 )
      v15 = a9;
    v16 = v15 & 0xFFDFFFFF;
    v17 = v15 & 0x200000;
    if ( (v15 & 0x200000) == 0 )
      v16 = v15;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v14 + 15));
    v18 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v18 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 6)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 62));
      v21 = (*(_DWORD *)a1 & 0x200) == 0;
      v55 = v18 + 8;
      if ( !v21 )
      {
        v41 = v18[8];
        v42 = v18[9];
        v44.bottom = v42;
        *(_QWORD *)&v44.left = 0LL;
        v44.right = v41;
        if ( a10 )
        {
          v57 = *a10;
          ERECTL::operator*=(&v57, &v44);
        }
        else
        {
          *(_QWORD *)&v57.right = __PAIR64__(v42, v41);
        }
        v13 = &v57;
      }
      if ( OPTAPIDCOBJ::bValid(v47, v19, v20) && a4 )
      {
        cx = *v55;
        if ( a4->cx < *v55 )
          cx = a4->cx;
        cy = a4->cy;
        LODWORD(v52) = cx;
        v32 = v18[9];
        if ( cy < v32 )
          v32 = cy;
        v53 = (struct tagSIZE *)&v52;
        HIDWORD(v52) = v32;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 62));
    }
    SPRITERANGELOCK::vUnlockShared((struct _SPRITESTATE *)((char *)v54 + 120));
    if ( (v16 & 0x20000000) != 0 )
    {
      v33 = v51;
      v22 = v16 & 0xDFFFFFFF;
      *((_DWORD *)a1 + 56) = v16 & 0xDFFFFFFF | (v51 != 0 ? 0x10000000 : 0);
      if ( (v16 & 2) != 0 && a8 )
        *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
      v23 = a7;
      *((_DWORD *)a1 + 58) = a7;
      if ( v33 )
      {
        vSpCreateExMirror(**((HDEV **)a1 + 2));
        *(_DWORD *)a1 |= 0x100u;
      }
      v24 = v47;
      if ( !*((_QWORD *)v47 + 12) )
      {
        v34 = *((_DWORD *)a1 + 56);
        updated = 1;
        v35 = *((_DWORD *)a1 + 51);
        v43 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
        if ( v34 == 3 && !a8->AlphaFormat )
        {
          v34 = 2;
          v43 = *a8;
          v11 = &v43;
          v43.AlphaFormat = 1;
          v35 = a7;
        }
        *((_DWORD *)a1 + 1) = v34;
        *((_DWORD *)a1 + 51) = v35;
        *((struct _BLENDFUNCTION *)a1 + 50) = *v11;
        goto LABEL_17;
      }
    }
    else
    {
      v22 = v16;
      if ( v16 == 0x40000000 )
      {
        v36 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
        if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
          v36 = *((_DWORD *)a1 + 56);
        v22 = v36;
        if ( (*(_DWORD *)a1 & 0x40) != 0 && !v36 )
          v22 = *((_DWORD *)a1 + 1);
        v11 = &v43;
        v23 = *((_DWORD *)a1 + 58);
        v43 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
      }
      else
      {
        v23 = a7;
      }
      v24 = v47;
    }
    if ( (*(_DWORD *)(v50 + 40) & 0x400) != 0 )
    {
      updated = 1;
LABEL_17:
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v56);
      return updated;
    }
    if ( *(_QWORD *)(*(_QWORD *)&v46.left + 96LL) || v53 || *((_QWORD *)v24 + 12) || v48 || v23 )
    {
      updated = bSpUpdateShape(a1, v22, *(struct OPTAPIDCOBJ **)&v46.left, v24, v23, v11, v48, v53, v13);
      if ( updated && !v17 )
      {
        v37 = v49;
        if ( !v49 )
          v37 = (struct _POINTL *)((char *)a1 + 112);
        v38 = 0;
        goto LABEL_58;
      }
    }
    else
    {
      updated = (_DWORD)v48 + 1;
      v37 = v49;
      if ( v22 - 2 <= (int)v48 + 1 && v11 && !v49 )
      {
        v39 = bSpUpdateAlpha(a1, v11, updated);
        goto LABEL_59;
      }
      if ( (v22 & 0x7FFFFFFF) == 0 && !v11 )
      {
        v38 = v22 & 0x80000000;
LABEL_58:
        v39 = bSpUpdatePosition(a1, v37, v38, 0);
LABEL_59:
        updated = v39;
      }
    }
    if ( v13 )
    {
      v27 = *((_DWORD *)a1 + 28);
      v46.left = v27 + v13->left;
      v28 = v27 + v13->right;
      v29 = *((_DWORD *)a1 + 29);
      v46.right = v28;
      v46.top = v29 + v13->top;
      v46.bottom = v29 + v13->bottom;
      ERECTL::operator*=(&v46, (char *)a1 + 80);
      if ( v46.left != v46.right && v46.top != v46.bottom )
      {
        v44 = v46;
        vSpAddAndCompactDirtyRect(a1, &v44);
        v45 = 0LL;
        v44 = 0LL;
        if ( v17 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v44, v54, &v46);
        if ( !*(_QWORD *)&v44.left && v17 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v46, 0), v17) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v44);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v44);
      }
    }
    else
    {
      v45 = 0LL;
      v44 = 0LL;
      if ( v17 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v44, v54, (struct _RECTL *)a1 + 5);
      v40 = *(struct _SPRITESTATE **)&v44.left;
      if ( !*(_QWORD *)&v44.left && v17 || (vSpRedrawSprite(a1), v17) )
      {
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v44);
        v40 = *(struct _SPRITESTATE **)&v44.left;
      }
      if ( v40 && v44.right != (_DWORD)v45 && v44.bottom != HIDWORD(v45) )
        vSpPIDUnlockSpriteArea(v40, (struct _RECTL *)&v44.right);
      if ( (*(_DWORD *)(v50 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v50,
          (struct _SURFOBJ *)((*(_QWORD *)(v50 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v50 + 2544) != 0LL)),
          0LL,
          0);
    }
    goto LABEL_17;
  }
  return 0LL;
}
