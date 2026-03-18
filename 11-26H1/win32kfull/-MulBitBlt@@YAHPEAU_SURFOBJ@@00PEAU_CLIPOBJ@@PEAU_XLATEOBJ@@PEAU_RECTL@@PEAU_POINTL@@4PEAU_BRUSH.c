/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0
 * Callers:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140063050 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140064EC0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x140064B34 (-vRestore@MSURF@@QEAAXXZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140065E64 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140066750 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140066BC4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140066C38 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140066CCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x140188800 (BRUSHOBJ_pvGetRbrush.c)
 *     ?bMultiBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A8B4 (-bMultiBrush@RBRUSH@@QEAAHHH@Z.c)
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x140329000 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  USHORT iType; // di
  int hsurf_high; // eax
  char v16; // bl
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  struct _RECTL *v18; // r8
  USHORT v20; // ax
  DHPDEV dhpdev; // rsi
  int Surface; // eax
  char v23; // di
  __int64 v24; // rdx
  int v25; // r14d
  int v26; // ecx
  int v27; // r13d
  unsigned __int64 v28; // rbx
  LONG y; // ecx
  DHPDEV v30; // rax
  int v31; // esi
  struct _DISPSURF *v32; // r9
  SURFOBJ *v33; // rsi
  struct _RECTL *v34; // rbx
  struct _RECTL *v35; // r14
  int v36; // r8d
  __int64 v37; // r10
  _DWORD *p_iUniq; // rdx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  struct _CLIPOBJ *v40; // rdi
  SURFOBJ *v41; // r11
  unsigned int v42; // r14d
  unsigned int v43; // esi
  int v44; // eax
  Gre::Base *v45; // rcx
  int v46; // r13d
  int v47; // esi
  int v48; // r14d
  int top; // eax
  int v50; // eax
  POINTL *v51; // rdi
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rsi
  int v53; // r13d
  int v54; // r8d
  LONG v55; // eax
  CLIPOBJ **p_pco; // rax
  _DWORD *v57; // rdx
  _DWORD *Rbrush; // rax
  _DWORD *v59; // rdi
  int SourceNotMetaDEVBITMAP; // eax
  __int64 v61; // rdx
  int v62; // r9d
  struct Gre::Base::SESSION_GLOBALS *v63; // r11
  __int64 v64; // r14
  HDEV hdev; // rdi
  struct PALETTE *v66; // rax
  ULONG v67; // ebx
  FLONG flXlate; // esi
  int v69; // r9d
  ULONG iUniq; // r10d
  __int64 v71; // rax
  ULONG *pulXlate; // r11
  int inited; // eax
  char v74; // [rsp+60h] [rbp-A0h]
  struct _RECTL *v75; // [rsp+68h] [rbp-98h] BYREF
  int v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  struct _RECTL *v78; // [rsp+80h] [rbp-80h]
  POINTL *pptlBrush; // [rsp+88h] [rbp-78h]
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h] BYREF
  POINTL *pptlMask; // [rsp+A0h] [rbp-60h]
  SURFOBJ *psoMask; // [rsp+A8h] [rbp-58h]
  struct _POINTL *v84; // [rsp+B0h] [rbp-50h] BYREF
  struct _SURFOBJ *v85; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v87; // [rsp+C8h] [rbp-38h]
  SURFOBJ *v88; // [rsp+D0h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v89; // [rsp+D8h] [rbp-28h]
  int v90; // [rsp+E0h] [rbp-20h] BYREF
  int v91; // [rsp+E4h] [rbp-1Ch]
  unsigned __int64 v92; // [rsp+E8h] [rbp-18h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h]
  _DWORD *v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h]
  __int64 v97; // [rsp+110h] [rbp+10h]
  struct _RECTL v98; // [rsp+118h] [rbp+18h] BYREF
  PVOID *p_pvScan0; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v100[4]; // [rsp+138h] [rbp+38h] BYREF
  struct _RECTL *v101; // [rsp+148h] [rbp+48h]
  DHSURF dhsurf; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h] BYREF
  char v104; // [rsp+160h] [rbp+60h]
  int v105; // [rsp+164h] [rbp+64h]
  int v106; // [rsp+178h] [rbp+78h]
  int hsurf; // [rsp+17Ch] [rbp+7Ch]
  __int64 v108; // [rsp+180h] [rbp+80h]
  SURFOBJ *psoSrc; // [rsp+188h] [rbp+88h]
  POINTL *pptlSrc; // [rsp+190h] [rbp+90h]
  _BYTE v111[56]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _DISPSURF *v112; // [rsp+1D8h] [rbp+D8h]
  __int64 v113; // [rsp+1E0h] [rbp+E0h]
  struct _CLIPOBJ *v114; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v115; // [rsp+1F0h] [rbp+F0h]
  _BYTE v116[88]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *psoTrg; // [rsp+258h] [rbp+158h]
  RECTL *prclTrg; // [rsp+260h] [rbp+160h]
  _DWORD v119[4]; // [rsp+270h] [rbp+170h] BYREF
  _DWORD v120[4]; // [rsp+280h] [rbp+180h] BYREF

  pbo = a9;
  pptlBrush = a10;
  v75 = a6;
  psoMask = a3;
  v85 = a1;
  pptlMask = a8;
  pco = a4;
  v84 = a7;
  memset_0(v111, 0, 0x60uLL);
  iType = a1->iType;
  if ( iType != 3 || (hsurf_high = HIDWORD(a1[1].hsurf), LODWORD(v77) = 1, (hsurf_high & 9) != 0) )
    LODWORD(v77) = 0;
  if ( !a2 || (v16 = 1, a2->iType != 1) )
    v16 = 0;
  v98 = *v75;
  v17 = Gre::Base::Globals((Gre::Base *)1);
  v18 = 0LL;
  v89 = v17;
  if ( v16 )
  {
    if ( iType == 1 )
      return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v98, a7, pptlMask, pbo, pptlBrush, rop4);
    else
      return bBitBltFromScreen(a1, a2, psoMask, a4, pxlo, &v98, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  v20 = a1->iType;
  dhpdev = a1->dhpdev;
  v76 = 1;
  LOWORD(v78) = v20;
  if ( v20 && (Surface = MSURF::bFindSurface((MSURF *)v111, a1, a4, v75), v18 = 0LL, Surface) )
  {
    v23 = 1;
    v24 = *((_QWORD *)dhpdev + 6);
    v25 = *((_DWORD *)dhpdev + 4);
    v26 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
  }
  else
  {
    v23 = 0;
    v26 = 0;
    v24 = 0LL;
    dhpdev = 0LL;
    v25 = 0;
  }
  v74 = v23;
  v94 = 0LL;
  v27 = 1;
  v90 = 1;
  v28 = (unsigned __int64)pbo & -(__int64)(v23 != 0);
  v92 = v28;
  if ( v24 )
    v93 = v24 - 24;
  else
    v93 = 0LL;
  v95 = 0LL;
  v91 = -1;
  v96 = -1LL;
  if ( v28 )
  {
    v57 = *(_DWORD **)(((unsigned __int64)pbo & -(__int64)(v23 != 0)) + 8);
    v95 = v57;
    if ( v26 && *(_DWORD *)v28 == -1 )
    {
      v94 = *(_QWORD *)(((unsigned __int64)pbo & -(__int64)(v23 != 0)) + 0x58);
      if ( !v57 )
      {
        Rbrush = BRUSHOBJ_pvGetRbrush((BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v23 != 0)));
        v18 = 0LL;
        *(_QWORD *)(((unsigned __int64)pbo & -(__int64)(v23 != 0)) + 8) = Rbrush;
        v95 = Rbrush;
        v59 = Rbrush;
        if ( Rbrush )
        {
          memset_0(Rbrush, 0, 16 * v25 + 8);
          *v59 = *((_DWORD *)dhpdev + 4);
          RBRUSH::bMultiBrush((RBRUSH *)(*(_QWORD *)(v28 + 8) - 16LL), 1, 0);
          v18 = 0LL;
        }
        else
        {
          v27 = 0;
          v90 = 0;
        }
        v23 = v74;
      }
    }
    else
    {
      v91 = *(_DWORD *)v28;
    }
  }
  v103 = 0LL;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v108 = 0LL;
  if ( a2 )
  {
    psoSrc = a2;
    pptlSrc = (POINTL *)v100;
    y = v84->y;
    v100[0] = v84->x;
    v100[1] = y;
    v100[2] = v98.right + v100[0] - v98.left;
    v30 = a2->dhpdev;
    v100[3] = v98.bottom + y - v98.top;
    v101 = (struct _RECTL *)v30;
    if ( v30 )
    {
      p_pvScan0 = &a2[-1].pvScan0;
      dhsurf = a2->dhsurf;
      hsurf = (int)a2[1].hsurf;
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && ((_DWORD)a2->hdev[10] & 0x20000) != 0 )
      {
        v108 = v61;
        v106 = v62;
        a2->iType = (unsigned __int16)v18;
        a2->dhsurf = (DHSURF)v18;
        a2->dhpdev = (DHPDEV)v18;
        LODWORD(a2[1].hsurf) = (_DWORD)v18;
      }
      else if ( a2->iType != (_WORD)v18 || (a2->fjBitmap & 0x20) != 0 )
      {
        v106 = 2;
      }
    }
  }
  else
  {
    psoSrc = 0LL;
    pptlSrc = (POINTL *)v100;
    v101 = 0LL;
  }
  if ( (_DWORD)v77 != (_DWORD)v18 || (_WORD)v78 == (_WORD)v18 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v116, v85, v75);
    v76 = EngBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    v31 = v76;
    MULTISURF::~MULTISURF((MULTISURF *)v116);
    v18 = 0LL;
  }
  else
  {
    v31 = v76;
  }
  if ( v23 )
  {
    if ( !v27 )
    {
      MSURF::vRestore((MSURF *)v111);
      MULTISURF::~MULTISURF((MULTISURF *)&p_pvScan0);
      return 0;
    }
    while ( 1 )
    {
      if ( v101 == v18 )
        goto LABEL_25;
      if ( !v108 )
        break;
      v32 = v112;
      psoSrc = *(SURFOBJ **)(*(_QWORD *)(v108 + 8) + 8LL * *((unsigned int *)v112 + 4));
      if ( !psoSrc )
        psoSrc = (SURFOBJ *)(p_pvScan0 + 3);
LABEL_26:
      v33 = psoSrc;
      v34 = v18;
      v75 = v18;
      v35 = (struct _RECTL *)pxlo;
      v78 = (struct _RECTL *)pxlo;
      if ( !psoSrc )
        goto LABEL_29;
      v36 = *((_DWORD *)v32 + 6);
      v78 = (struct _RECTL *)pxlo;
      if ( !v36 )
      {
        v18 = 0LL;
LABEL_29:
        if ( rop4 == 52428 )
        {
          v37 = v113;
          p_iUniq = pptlSrc;
          v87 = (struct _CLIPOBJ *)pptlSrc;
          v77 = v113;
          if ( (*(_DWORD *)(v113 + 88) & 0x400) != 0 )
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v32 + 7) + 2832LL);
          else
            v39 = EngCopyBits;
          v40 = v114;
          v41 = psoSrc;
          v88 = psoSrc;
          v42 = *v115;
          v43 = v115[1];
          if ( v114 )
          {
            v75 = v18;
            if ( v42 || v43 )
            {
              v114->rclBounds.left += v42;
              v40->rclBounds.right += v42;
              v40->rclBounds.top += v43;
              v40->rclBounds.bottom += v43;
              if ( v40->iDComplexity != (_BYTE)v18 )
              {
                v75 = (struct _RECTL *)__PAIR64__(v43, v42);
                RGNOBJ::bOffset((RGNOBJ *)&v40[2].rclBounds.top, (const struct _POINTL *)&v75);
                v37 = v77;
                v18 = 0LL;
                p_iUniq = &v87->iUniq;
                v41 = v88;
              }
            }
          }
          LODWORD(v84) = *p_iUniq;
          v44 = p_iUniq[1];
          v119[0] = v42 + v98.left;
          HIDWORD(v84) = v44;
          v119[2] = v42 + v98.right;
          v119[1] = v43 + v98.top;
          v45 = (Gre::Base *)(v43 + v98.bottom);
          v119[3] = v43 + v98.bottom;
          if ( v39 )
          {
            v46 = ((__int64 (__fastcall *)(__int64, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, struct _POINTL **))v39)(
                    v37,
                    v41,
                    v40,
                    v78,
                    v119,
                    &v84);
            v18 = 0LL;
          }
          else
          {
            v46 = (int)v18;
          }
          if ( v40 )
          {
            v47 = -v43;
            v75 = v18;
            v48 = -v42;
            if ( v48 || v47 )
            {
              v40->rclBounds.left += v48;
              v40->rclBounds.right += v48;
              v40->rclBounds.top += v47;
              v40->rclBounds.bottom += v47;
              if ( v40->iDComplexity != (_BYTE)v18 )
              {
                v75 = (struct _RECTL *)__PAIR64__(v47, v48);
                RGNOBJ::bOffset((RGNOBJ *)&v40[2].rclBounds.top, (const struct _POINTL *)&v75);
              }
            }
          }
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)&v90, v32, (struct SURFACE *)(v113 - 24));
          v51 = pptlSrc;
          v97 = v113;
          if ( (*(_DWORD *)(v113 + 88) & 1) != 0 )
            v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v112 + 7) + 2824LL);
          else
            v52 = EngBitBlt;
          v75 = (struct _RECTL *)psoSrc;
          v87 = v114;
          v54 = v115[1];
          LODWORD(v78) = *v115;
          v53 = (int)v78;
          LODWORD(v77) = v54;
          CLIPOBJ_vOffset(v114, (int)v78, v54);
          v86 = 0LL;
          v120[0] = v53 + v98.left;
          v120[2] = v53 + v98.right;
          v120[1] = v77 + v98.top;
          v120[3] = v77 + v98.bottom;
          if ( v51 )
          {
            LODWORD(v86) = v51->x;
            v55 = v51->y;
            v51 = (POINTL *)&v86;
            HIDWORD(v86) = v55;
          }
          pco = 0LL;
          if ( pptlBrush )
          {
            p_pco = &pco;
            LODWORD(pco) = v53 + pptlBrush->x;
            HIDWORD(pco) = v77 + pptlBrush->y;
          }
          else
          {
            p_pco = 0LL;
          }
          v46 = ((__int64 (__fastcall *)(__int64, struct _RECTL *, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, POINTL *, POINTL *, BRUSHOBJ *, CLIPOBJ **, ROP4))v52)(
                  v97,
                  v75,
                  psoMask,
                  v87,
                  v35,
                  v120,
                  v51,
                  pptlMask,
                  pbo,
                  p_pco,
                  rop4);
          CLIPOBJ_vOffset(v87, -(int)v78, -(int)v77);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)&v90, *((_DWORD *)v112 + 4));
        }
        v31 = v46 & v76;
        v76 &= v46;
        goto LABEL_41;
      }
      v45 = (Gre::Base *)*((_QWORD *)v32 + 6);
      v63 = v89;
      v64 = v113;
      hdev = psoSrc[1].hdev;
      p_iUniq = (_DWORD *)*((_QWORD *)v89 + 484);
      if ( (*((_DWORD *)v45 + 539) & 0x100) != 0 )
      {
        v66 = DrvRealizeHalftonePalette((HDEV)v45, 0);
        v63 = v89;
        p_iUniq = v66;
LABEL_90:
        v18 = 0LL;
        goto LABEL_91;
      }
      if ( v36 <= 0 )
        goto LABEL_90;
      v18 = 0LL;
      if ( pxlo && *(_QWORD *)&pxlo[2].iSrcType )
        p_iUniq = *(_DWORD **)&pxlo[2].iSrcType;
LABEL_91:
      if ( hdev )
        goto LABEL_106;
      if ( !pxlo )
        goto LABEL_104;
      if ( !pxlo[1].pulXlate )
      {
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_104:
          if ( psoSrc == a2 )
            hdev = v85[1].hdev;
        }
        else
        {
          p_iUniq = *(_DWORD **)&pxlo[2].iSrcType;
          if ( !p_iUniq )
            goto LABEL_77;
          if ( v33->iBitmapFormat == v85->iBitmapFormat )
            hdev = v85[1].hdev;
        }
LABEL_106:
        v67 = 0;
        if ( !hdev )
          goto LABEL_110;
        goto LABEL_107;
      }
      hdev = (HDEV)pxlo[1].pulXlate;
      v67 = 0;
LABEL_107:
      if ( ((_DWORD)hdev[6] & 0x800) != 0 )
      {
        LODWORD(v18) = 0x4000;
        if ( p_iUniq == *((_DWORD **)v63 + 484) )
          LODWORD(v18) = 0x2000;
      }
LABEL_110:
      if ( pxlo )
      {
        flXlate = pxlo[1].flXlate;
        v69 = *(_DWORD *)&pxlo[1].iSrcType;
        iUniq = pxlo[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v69 = 0;
        iUniq = 0;
      }
      v71 = *((_QWORD *)v63 + 484);
      if ( pxlo )
      {
        pulXlate = pxlo[2].pulXlate;
        v67 = pxlo[3].iUniq;
      }
      else
      {
        pulXlate = 0LL;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 &v75,
                 pulXlate,
                 v67,
                 hdev,
                 *(_QWORD *)(v64 + 104),
                 v71,
                 p_iUniq,
                 flXlate,
                 v69,
                 iUniq,
                 (_DWORD)v18);
      v34 = v75;
      v18 = 0LL;
      if ( inited )
      {
        v32 = v112;
        v35 = v75;
        v78 = v75;
        goto LABEL_29;
      }
LABEL_77:
      v31 = 0;
      v76 = 0;
LABEL_41:
      if ( v34 )
      {
        top = v34[2].top;
        if ( top >= 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v45) + 8 * v34[2].top + 1100);
        }
        else if ( top == -1 )
        {
          FreeThreadBufferWithTag(v34, p_iUniq, v18);
        }
      }
      v50 = MSURF::bNextSurface((MSURF *)v111);
      v18 = 0LL;
      if ( !v50 )
        goto LABEL_46;
    }
    SourceNotMetaDEVBITMAP = MULTISURF::bLoadSourceNotMetaDEVBITMAP((MULTISURF *)&p_pvScan0, *((HDEV *)v112 + 6));
    v18 = 0LL;
    if ( !SourceNotMetaDEVBITMAP )
    {
      v34 = 0LL;
      goto LABEL_77;
    }
LABEL_25:
    v32 = v112;
    goto LABEL_26;
  }
LABEL_46:
  if ( (v106 & 1) != 0 )
  {
    if ( (struct _RECTL *)v108 != v18 )
      *((_WORD *)p_pvScan0 + 50) = 3;
    p_pvScan0[5] = v101;
    p_pvScan0[3] = dhsurf;
    *((_DWORD *)p_pvScan0 + 28) = hsurf;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v103);
  return v31;
}
