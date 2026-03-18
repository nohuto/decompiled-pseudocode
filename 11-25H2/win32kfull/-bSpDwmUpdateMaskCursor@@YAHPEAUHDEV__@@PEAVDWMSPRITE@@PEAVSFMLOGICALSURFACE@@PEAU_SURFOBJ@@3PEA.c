/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1401743E4
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x140098234 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x140174720 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpDwmUpdateMaskCursor(
        Gre::Base *a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  unsigned int DIB; // r14d
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r15
  struct _SURFOBJ *v16; // r12
  int inited; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  SURFOBJ *v20; // rbx
  struct DWMSPRITE *v21; // rdx
  struct SFMLOGICALSURFACE *v22; // r8
  Gre::Base *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *v29; // [rsp+70h] [rbp-90h] BYREF
  SURFOBJ *v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  char v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  _DWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  struct DWMSPRITE *v42; // [rsp+C0h] [rbp-40h]
  struct SFMLOGICALSURFACE **v43; // [rsp+C8h] [rbp-38h]
  struct SFMLOGICALSURFACE *v44; // [rsp+D0h] [rbp-30h]
  HDEV v45; // [rsp+D8h] [rbp-28h]
  RECTL prclDest; // [rsp+E0h] [rbp-20h] BYREF

  v30 = a4;
  v43 = a8;
  v44 = a3;
  v42 = a2;
  v45 = (HDEV)a1;
  v9 = Gre::Base::Globals(a1);
  v37[1] = a4->sizlBitmap.cx;
  v10 = v9;
  LODWORD(v9) = a4->sizlBitmap.cy;
  v39 = 0;
  v41 = 1LL;
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v37[0] = 6;
  v38 = (unsigned int)v9;
  v40 = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v34, (struct _DEVBITMAPINFO *)v37, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( !psoSrc
      || (v38 >>= 1,
          (DIB = SURFMEM::bCreateDIB((SURFMEM *)&v31, (struct _DEVBITMAPINFO *)v37, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) != 0) )
    {
      v12 = *((_QWORD *)v10 + 475);
      v13 = *((_QWORD *)v10 + 471);
      v14 = *((_QWORD *)v10 + 472);
      v15 = (v34 + 24) & -(__int64)(v34 != 0);
      prclDest = *a6;
      v16 = (struct _SURFOBJ *)((v31 + 24) & -(__int64)(v31 != 0));
      v29 = 0LL;
      pxlo = 0LL;
      if ( v31
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&pxlo,
                           0LL,
                           0,
                           (__int64)psoSrc[1].hdev,
                           v14,
                           v13,
                           v13,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        DIB = EngCopyBits(v16, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      inited = EXLATEOBJ::bInitXlateObj((Gre::Base *)&v29, 0LL, 0, v12, v14, v13, v13, 0, 0xFFFFFF, 0, 0);
      v20 = v30;
      if ( inited )
      {
        prclDest.bottom += v30->sizlBitmap.cy >> 1;
        DIB = EngCopyBits((SURFOBJ *)v15, v30, 0LL, v29, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        v27 = 0;
        vSpDwmMaskToARGB((struct _SURFOBJ *)v15, v16, &v27);
        v21 = v42;
        v22 = v44;
        v23 = (Gre::Base *)v45;
        *((_DWORD *)v42 + 35) = (v27 != 0 ? 4 : 0) | *((_DWORD *)v42 + 35) & 0xFFFFFFFB;
        prclDest.top += v20->sizlBitmap.cy >> 1;
        DIB = bSpDwmUpdateSpriteShape(
                v23,
                v21,
                v22,
                (struct _SURFOBJ *)v15,
                &prclDest,
                *(struct PALETTE **)(v15 + 104),
                a7,
                0LL,
                v43);
      }
      EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo, v18, v19);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v29, v24, v25);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v31);
  SURFMEM::~SURFMEM((SURFMEM *)&v34);
  return DIB;
}
