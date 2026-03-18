/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x14009C038 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400BBED4 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1400E38E4 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x140169778 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x140237E14 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x140247A58 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x140333564 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        struct OPTAPIDCOBJ *a3,
        struct OPTAPIDCOBJ *a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct PALETTE *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ebx
  struct SURFACE *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  DC *v21; // r13
  struct _POINTL v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r13
  LONG x; // ecx
  LONG v26; // r8d
  int y; // edx
  LONG v28; // r9d
  LONG v29; // eax
  Gre::Base *v30; // rcx
  _DWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdi
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  Gre::Base *v36; // rcx
  struct PALETTE *v37; // rax
  BOOL v38; // ebx
  int updated; // eax
  Gre::Base *v40; // rcx
  int v41; // r8d
  int v42; // r14d
  int v43; // edi
  __int64 v45; // rdx
  __int64 v46; // r8
  ULONG v47; // eax
  int v48; // eax
  void *v49; // rdx
  struct _SPRITESTATE *v50; // rbx
  struct _SURFOBJ *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // ecx
  struct _BLENDFUNCTION v55; // eax
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+64h] [rbp-9Ch]
  struct _BLENDFUNCTION v58; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-90h] BYREF
  int v60; // [rsp+78h] [rbp-88h]
  LONG v61; // [rsp+7Ch] [rbp-84h]
  struct PALETTE *v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  int v64; // [rsp+8Ch] [rbp-74h]
  unsigned int v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v68; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v69; // [rsp+B0h] [rbp-50h] BYREF
  Gre::Base *v70; // [rsp+C0h] [rbp-40h]
  DC *v71[14]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v72[20]; // [rsp+140h] [rbp+40h] BYREF
  int v73; // [rsp+1F0h] [rbp+F0h]
  int v74; // [rsp+1F8h] [rbp+F8h]

  v13 = Gre::Base::Globals(a1);
  v15 = *((_QWORD *)a1 + 2);
  v62 = v13;
  v16 = 0;
  v73 = 0;
  v69.bottom = 0;
  v66 = *(_QWORD *)v15;
  v58 = 0;
  v68 = (struct _POINTL)v15;
  if ( a2 != 0x2000000 )
  {
    if ( !a2 )
    {
      a2 = *((_DWORD *)a1 + 1);
      a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
    }
    if ( a7 && a8 && (a6 || (a2 & 2) == 0) && OPTAPIDCOBJ::bValid(a4, v15, v14) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v71, a4);
      if ( *((_QWORD *)v71[0] + 62) )
      {
        if ( !DC::bInFullScreen(v71[0]) )
        {
          if ( (unsigned int)SrcSurfaceAccessCheck(v18, (__int64)v18) )
          {
            v21 = v71[0];
            v22 = v68;
            v23 = *((_QWORD *)v71[0] + 6);
            if ( v23 == **(_QWORD **)&v68 || v23 == *(_QWORD *)(v66 + 24) )
            {
              if ( !*((_QWORD *)a3 + 12) )
              {
                v64 = 0xFFFFFF;
                v70 = (Gre::Base *)*((_QWORD *)v62 + 484);
                v63 = 0;
                v57 = 0;
LABEL_13:
                v24 = *((_QWORD *)v21 + 62);
                x = a7->x;
                v26 = a7->x + a8->cx;
                y = a7->y;
                v28 = y + a8->cy;
                v69.left = a7->x;
                v69.right = v26;
                v69.top = y;
                v69.bottom = v28;
                if ( !v24 )
                  goto LABEL_47;
                if ( x < 0 )
                  goto LABEL_47;
                if ( y < 0 )
                  goto LABEL_47;
                if ( x >= v26 )
                  goto LABEL_47;
                if ( y >= v28 )
                  goto LABEL_47;
                if ( v26 > *(_DWORD *)(v24 + 56) )
                  goto LABEL_47;
                v29 = *(_DWORD *)(v24 + 60);
                if ( v28 > v29 )
                  goto LABEL_47;
                if ( a9 )
                {
                  v60 = *(_DWORD *)(v24 + 56);
                  pxlo = 0LL;
                  v61 = v29;
                  ERECTL::operator*=(a9, &pxlo);
                }
                SPRITERANGELOCK::vLockShared((HSEMAPHORE *)(*(_QWORD *)&v22 + 120LL));
                v31 = (_DWORD *)*((_QWORD *)a1 + 16);
                if ( v31 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v31 - 6)) )
                {
                  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v31 + 62));
                  if ( (*(_DWORD *)a1 & 0x200) != 0 )
                  {
                    pxlo = 0LL;
                    v60 = v31[8];
                    v61 = v31[9];
                    ERECTL::operator*=(&v69, &pxlo);
                  }
                  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v31 + 62));
                }
                v32 = *(_QWORD *)(v24 + 128);
                pxlo = 0LL;
                v33 = *((_QWORD *)v62 + 485);
                v34 = *((_QWORD *)v71[0] + 11);
                v67 = v32;
                if ( v32 )
                {
                  v35 = Gre::Base::Globals(v30);
                  INC_SHARE_REF_CNT(v35, v67);
                }
                SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(*(_QWORD *)&v22 + 120LL));
                if ( a2 != 3 || a6->AlphaFormat )
                {
                  v74 = 0;
                  NearestIndexFromColorref = 0;
                  if ( a2 != 2 )
                  {
                    v74 = 0;
                    NearestIndexFromColorref = 0;
                    goto LABEL_32;
                  }
                }
                else
                {
                  v55 = *a6;
                  a6 = &v58;
                  v58 = v55;
                  v58.AlphaFormat = 1;
                  a2 = 2;
                  v74 = 1;
                  NearestIndexFromColorref = rgbFromColorref(v33, v34, a5);
                }
                if ( (a6->AlphaFormat & 1) != 0 )
                {
                  v65 = 6;
                  v37 = (struct PALETTE *)*((_QWORD *)v62 + 485);
                  v36 = (Gre::Base *)*((_QWORD *)v62 + 484);
LABEL_33:
                  v62 = v37;
                  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                        (Gre::Base *)&pxlo,
                                        0LL,
                                        v57,
                                        v67,
                                        (__int64)v37,
                                        v34,
                                        v36,
                                        v64,
                                        v63,
                                        0,
                                        0) )
                    goto LABEL_45;
                  *((_DWORD *)a1 + 1) = a2;
                  v38 = 1;
                  v73 = 1;
                  *((struct _RECTL *)a1 + 6) = v69;
                  switch ( a2 )
                  {
                    case 4:
                      *(_DWORD *)a1 |= 8u;
                      v43 = 1;
                      break;
                    case 1:
                      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v67, v34, a5, 1LL);
                      v47 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
                      *(_DWORD *)a1 &= ~8u;
                      *((_DWORD *)a1 + 51) = v47;
                      v73 = 1;
                      v43 = *(_DWORD *)(v66 + 44) & 4;
                      if ( !v43 )
                      {
                        v42 = v74;
                        LOWORD(v41) = 0;
LABEL_50:
                        if ( *(_WORD *)(v24 + 100) != (_WORD)v41 || (*(_BYTE *)(v24 + 102) & 0x20) != 0 )
                        {
                          Gre::Base::Globals(v40);
                          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v66) )
                          {
                            v48 = *(_DWORD *)(v24 + 116);
                            if ( (v48 & 0x20) == 0 )
                            {
                              v49 = *(void **)(v24 + 32);
                              *(_DWORD *)(v24 + 116) = v48 | 0x20;
                              GrepQueueApc(pConvertDfbSurfaceToDibNKAPC, v49, 0LL);
                            }
                          }
                          else
                          {
                            bConvertDfbDcToDib((struct XDCOBJ *)v71);
                          }
                          v24 = *((_QWORD *)v71[0] + 62);
                        }
                        goto LABEL_59;
                      }
                      break;
                    case 2:
                      updated = bSpUpdateAlpha(a1, a6, 0);
                      v41 = 0;
                      if ( updated )
                      {
                        if ( (a6->AlphaFormat & 1) != 0 )
                        {
                          v42 = v74;
                          if ( !(unsigned int)bIsSourceBGRA((struct SURFACE *)v24) )
                          {
                            v40 = (Gre::Base *)(unsigned int)-(v74 != 0);
                            v38 = v74 != 0;
                          }
LABEL_40:
                          v73 = v38;
                          v43 = v41;
                          if ( !v38 )
                            goto LABEL_41;
                          goto LABEL_50;
                        }
                      }
                      else
                      {
                        v38 = 0;
                      }
                      v42 = v74;
                      goto LABEL_40;
                    default:
LABEL_41:
                      vSpDeleteShape(a1);
                      *((_DWORD *)a1 + 1) = 4;
                      v16 = 0;
LABEL_46:
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
                      EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo, v45, v46);
LABEL_47:
                      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v71);
                      return v16;
                  }
                  v42 = v74;
LABEL_59:
                  v50 = (struct _SPRITESTATE *)v68;
                  vSpDirectDriverAccess(*(struct _SPRITESTATE **)&v68, 0);
                  v68 = 0LL;
                  bSpCreateShape(
                    a1,
                    &v68,
                    (struct _SURFOBJ *)((v24 + 24) & -(__int64)(v24 != 0)),
                    pxlo,
                    &v69,
                    v62,
                    v65,
                    v43 == 0,
                    a9);
                  vSpDirectDriverAccess(v50, 1);
                  v51 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                  if ( !v51 )
                    goto LABEL_41;
                  if ( v42 )
                  {
                    if ( (*(_DWORD *)a1 & 0x40) != 0 )
                      *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
                    else
                      vSpUpdatePerPixelAlphaFromColorKey(v51, NearestIndexFromColorref, a9, 0LL);
                  }
LABEL_45:
                  v16 = v73;
                  goto LABEL_46;
                }
LABEL_32:
                v36 = v70;
                v65 = 0;
                v37 = *(struct PALETTE **)(v66 + 1792);
                goto LABEL_33;
              }
              if ( OPTAPIDCOBJ::bValid(a3, v19, v20) )
              {
                APIDCOBJ::APIDCOBJ((APIDCOBJ *)v72, a3);
                v52 = *(_QWORD *)(v72[0] + 48LL);
                if ( v52 == *((_QWORD *)v71[0] + 6) && (v52 == **(_QWORD **)&v68 || v52 == *(_QWORD *)(v66 + 24)) )
                {
                  v70 = *(Gre::Base **)(v72[0] + 88LL);
                  v53 = *(_QWORD *)(v72[0] + 976LL);
                  v54 = *(_DWORD *)(v53 + 184);
                  v63 = *(_DWORD *)(v53 + 176);
                  LODWORD(v53) = *(_DWORD *)(v72[0] + 120LL);
                  v64 = v54;
                  v57 = v53;
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v72);
                  v21 = v71[0];
                  goto LABEL_13;
                }
                APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v72);
              }
            }
          }
        }
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v71);
    }
    return 0LL;
  }
  *((_DWORD *)a1 + 1) = 0x2000000;
  *((_DWORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 26) = a8->cx;
  *((_DWORD *)a1 + 25) = 0;
  *((_DWORD *)a1 + 27) = a8->cy;
  *((_DWORD *)a1 + 38) = *(_DWORD *)(v15 + 108);
  *((_DWORD *)a1 + 39) = *(_DWORD *)(v15 + 112);
  return 1LL;
}
