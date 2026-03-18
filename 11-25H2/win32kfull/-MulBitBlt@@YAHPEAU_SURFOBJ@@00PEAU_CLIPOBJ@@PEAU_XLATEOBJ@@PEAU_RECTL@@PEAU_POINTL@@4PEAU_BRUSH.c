/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0
 * Callers:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x14000AB94 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14000C9D0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000D8FC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000E26C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x14000E6EC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x14000E784 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x14000E940 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA4C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1400815E0 (EngBitBlt.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1400F6270 (BRUSHOBJ_pvGetRbrush.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401FEB88 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x14021044C (-vRestore@MSURF@@QEAAXXZ.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x140333D0C (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  USHORT iType; // si
  int v15; // edi
  char v16; // bl
  __int64 v18; // r8
  DHPDEV dhpdev; // r15
  int Surface; // eax
  char v21; // al
  __int64 v22; // rdx
  int v23; // r14d
  int v24; // ecx
  int v25; // esi
  BRUSHOBJ *v26; // rbx
  LONG y; // ecx
  DHPDEV v28; // rax
  int v29; // r14d
  struct _DISPSURF *v30; // r9
  SURFOBJ *v31; // r14
  struct _RECTL *v32; // rbx
  struct _RECTL *v33; // r15
  __int64 v34; // r10
  struct _CLIPOBJ *v35; // rsi
  SURFOBJ *v36; // r11
  _DWORD *p_iUniq; // rdx
  LONG v38; // r15d
  LONG v39; // r14d
  int v40; // eax
  HDEV v41; // rcx
  LONG v42; // r14d
  LONG v43; // r15d
  int top; // eax
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r14
  POINTL *v46; // rsi
  int v47; // r8d
  LONG v48; // eax
  CLIPOBJ **p_pco; // rax
  void *v50; // rdx
  PVOID Rbrush; // rax
  _DWORD *v52; // rsi
  __int64 v53; // rdx
  struct Gre::Base::SESSION_GLOBALS *v54; // r11
  __int64 v55; // r15
  HDEV hdev; // rsi
  struct PALETTE *v57; // rax
  int v58; // r8d
  FLONG flXlate; // r14d
  int v60; // r9d
  ULONG iUniq; // r10d
  __int64 v62; // rax
  ULONG *pulXlate; // r11
  int inited; // eax
  char v65; // [rsp+60h] [rbp-A0h]
  BOOL v66; // [rsp+64h] [rbp-9Ch]
  USHORT v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+68h] [rbp-98h]
  SURFOBJ *v70; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+70h] [rbp-90h]
  BOOL (__stdcall *v72)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+70h] [rbp-90h]
  int v73; // [rsp+70h] [rbp-90h]
  struct _RECTL *v74; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v75; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v76; // [rsp+88h] [rbp-78h]
  CLIPOBJ *pco; // [rsp+90h] [rbp-70h] BYREF
  POINTL *pptlBrush; // [rsp+98h] [rbp-68h]
  BRUSHOBJ *pbo; // [rsp+A0h] [rbp-60h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoMask; // [rsp+B0h] [rbp-50h]
  struct _POINTL *v82; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL v83; // [rsp+C0h] [rbp-40h] BYREF
  struct _POINTL v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ *v86; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v87; // [rsp+E0h] [rbp-20h]
  struct Gre::Base::SESSION_GLOBALS *v88; // [rsp+E8h] [rbp-18h]
  int v89; // [rsp+F0h] [rbp-10h] BYREF
  int iSolidColor; // [rsp+F4h] [rbp-Ch]
  BRUSHOBJ *v91; // [rsp+F8h] [rbp-8h]
  __int64 v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]
  PVOID v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  __int64 v96; // [rsp+120h] [rbp+20h]
  struct _RECTL v97; // [rsp+128h] [rbp+28h] BYREF
  PVOID *p_pvScan0; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v99[4]; // [rsp+148h] [rbp+48h] BYREF
  DHPDEV v100; // [rsp+158h] [rbp+58h]
  DHSURF dhsurf; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  char v103; // [rsp+170h] [rbp+70h]
  int v104; // [rsp+174h] [rbp+74h]
  int v105; // [rsp+188h] [rbp+88h]
  int hsurf; // [rsp+18Ch] [rbp+8Ch]
  __int64 v107; // [rsp+190h] [rbp+90h]
  SURFOBJ *psoSrc; // [rsp+198h] [rbp+98h]
  POINTL *pptlSrc; // [rsp+1A0h] [rbp+A0h]
  _BYTE v110[56]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _DISPSURF *v111; // [rsp+1E8h] [rbp+E8h]
  __int64 v112; // [rsp+1F0h] [rbp+F0h]
  struct _CLIPOBJ *v113; // [rsp+1F8h] [rbp+F8h]
  LONG *v114; // [rsp+200h] [rbp+100h]
  _BYTE v115[88]; // [rsp+210h] [rbp+110h] BYREF
  SURFOBJ *psoTrg; // [rsp+268h] [rbp+168h]
  RECTL *prclTrg; // [rsp+270h] [rbp+170h]
  _DWORD v118[4]; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v119[4]; // [rsp+290h] [rbp+190h] BYREF

  pbo = a9;
  v74 = a6;
  pptlMask = a8;
  psoMask = a3;
  v76 = a1;
  pptlBrush = a10;
  pco = a4;
  v82 = a7;
  memset_0(v110, 0, 0x60uLL);
  iType = a1->iType;
  v15 = 0;
  if ( iType != 3 || (v71 = 1, (HIDWORD(a1[1].hsurf) & 9) != 0) )
    v71 = 0;
  if ( !a2 || (v16 = 1, a2->iType != 1) )
    v16 = 0;
  v97 = *v74;
  v88 = Gre::Base::Globals((Gre::Base *)1);
  if ( !v16 )
  {
    v18 = 1LL;
    v66 = 1;
    dhpdev = v76->dhpdev;
    v67 = v76->iType;
    if ( v67 && (Surface = MSURF::bFindSurface((MSURF *)v110, v76, pco, v74), v18 = 1LL, Surface) )
    {
      v21 = 1;
      v22 = *((_QWORD *)dhpdev + 6);
      v23 = *((_DWORD *)dhpdev + 4);
      v24 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
    }
    else
    {
      v21 = 0;
      v24 = 0;
      v22 = 0LL;
      dhpdev = 0LL;
      v23 = 0;
    }
    v65 = v21;
    v25 = 1;
    v93 = 0LL;
    v89 = 1;
    v26 = (BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v21 != 0));
    v91 = v26;
    if ( v22 )
      v92 = v22 - 24;
    else
      v92 = 0LL;
    v95 = -1LL;
    v94 = 0LL;
    iSolidColor = -1;
    if ( v26 )
    {
      v50 = *(void **)(((unsigned __int64)pbo & -(__int64)(v21 != 0)) + 8);
      v94 = v50;
      if ( v24 && v26->iSolidColor == -1 )
      {
        v93 = *(_QWORD *)(((unsigned __int64)pbo & -(__int64)(v21 != 0)) + 0x58);
        if ( !v50 )
        {
          Rbrush = BRUSHOBJ_pvGetRbrush(v26);
          v26->pvRbrush = Rbrush;
          v52 = Rbrush;
          v94 = Rbrush;
          if ( Rbrush )
          {
            memset_0(Rbrush, 0, 16 * v23 + 8);
            v18 = 1LL;
            *v52 = *((_DWORD *)dhpdev + 4);
            v25 = v89;
            *((_DWORD *)v26->pvRbrush - 2) = 1;
          }
          else
          {
            v25 = 0;
            v89 = 0;
            v18 = 1LL;
          }
        }
      }
      else
      {
        iSolidColor = v26->iSolidColor;
      }
    }
    v102 = 0LL;
    v103 = 0;
    v104 = 0;
    if ( a2 )
    {
      psoSrc = a2;
      pptlSrc = (POINTL *)v99;
      v105 = 0;
      y = v82->y;
      v99[0] = v82->x;
      v99[1] = y;
      v99[2] = v97.right + v99[0] - v97.left;
      v28 = a2->dhpdev;
      v107 = 0LL;
      v99[3] = v97.bottom + y - v97.top;
      v100 = v28;
      if ( v28 )
      {
        p_pvScan0 = &a2[-1].pvScan0;
        dhsurf = a2->dhsurf;
        hsurf = (int)a2[1].hsurf;
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && ((_DWORD)a2->hdev[10] & 0x20000) != 0 )
        {
          v107 = v53;
          v105 = v18;
          a2->iType = 0;
          a2->dhsurf = 0LL;
          a2->dhpdev = 0LL;
          LODWORD(a2[1].hsurf) = 0;
        }
        else if ( a2->iType || (a2->fjBitmap & 0x20) != 0 )
        {
          v105 = 2;
        }
      }
    }
    else
    {
      MULTISURF::vInit((MULTISURF *)&p_pvScan0, 0LL, 0LL);
    }
    if ( v71 || !v67 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v115, v76, v74);
      v66 = EngBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      v29 = v66;
      MULTISURF::~MULTISURF((MULTISURF *)v115);
    }
    else
    {
      v29 = 1;
    }
    if ( v65 )
    {
      if ( v25 )
      {
        while ( 1 )
        {
          if ( !v100 )
            goto LABEL_23;
          if ( !v107 )
            break;
          v30 = v111;
          psoSrc = *(SURFOBJ **)(*(_QWORD *)(v107 + 8) + 8LL * *((unsigned int *)v111 + 4));
          if ( !psoSrc )
            psoSrc = (SURFOBJ *)(p_pvScan0 + 3);
LABEL_24:
          v31 = psoSrc;
          v32 = 0LL;
          v74 = 0LL;
          v33 = (struct _RECTL *)pxlo;
          v75 = (struct _RECTL *)pxlo;
          if ( !psoSrc )
            goto LABEL_26;
          v18 = *((unsigned int *)v30 + 6);
          v75 = (struct _RECTL *)pxlo;
          if ( !(_DWORD)v18 )
            goto LABEL_26;
          v41 = (HDEV)*((_QWORD *)v30 + 6);
          v54 = v88;
          v55 = v112;
          hdev = psoSrc[1].hdev;
          p_iUniq = (_DWORD *)*((_QWORD *)v88 + 471);
          if ( ((_DWORD)v41[539] & 0x100) != 0 )
          {
            v57 = DrvRealizeHalftonePalette(v41, 0);
            v54 = v88;
            p_iUniq = v57;
          }
          else if ( (int)v18 > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
          {
            p_iUniq = *(_DWORD **)&pxlo[2].iSrcType;
          }
          if ( hdev )
            goto LABEL_101;
          if ( !pxlo )
            goto LABEL_99;
          if ( !pxlo[1].pulXlate )
          {
            if ( (pxlo->flXlate & 1) != 0 )
            {
LABEL_99:
              if ( psoSrc == a2 )
                hdev = v76[1].hdev;
            }
            else
            {
              p_iUniq = *(_DWORD **)&pxlo[2].iSrcType;
              if ( !p_iUniq )
                goto LABEL_73;
              if ( v31->iBitmapFormat == v76->iBitmapFormat )
                hdev = v76[1].hdev;
            }
LABEL_101:
            v58 = 0;
            if ( !hdev )
              goto LABEL_105;
            goto LABEL_102;
          }
          hdev = (HDEV)pxlo[1].pulXlate;
          v58 = 0;
LABEL_102:
          if ( ((_DWORD)hdev[6] & 0x800) != 0 )
          {
            v58 = 0x2000;
            if ( p_iUniq != *((_DWORD **)v54 + 471) )
              v58 = 0x4000;
          }
LABEL_105:
          if ( pxlo )
          {
            flXlate = pxlo[1].flXlate;
            v60 = *(_DWORD *)&pxlo[1].iSrcType;
            iUniq = pxlo[1].iUniq;
          }
          else
          {
            flXlate = 0;
            v60 = 0;
            iUniq = 0;
          }
          v62 = *((_QWORD *)v54 + 471);
          if ( pxlo )
          {
            pulXlate = pxlo[2].pulXlate;
            LODWORD(v32) = pxlo[3].iUniq;
          }
          else
          {
            pulXlate = 0LL;
          }
          inited = EXLATEOBJ::bInitXlateObj(
                     &v74,
                     pulXlate,
                     (unsigned int)v32,
                     hdev,
                     *(_QWORD *)(v55 + 104),
                     v62,
                     p_iUniq,
                     flXlate,
                     v60,
                     iUniq,
                     v58);
          v32 = v74;
          if ( inited )
          {
            v30 = v111;
            v33 = v74;
            v75 = v74;
LABEL_26:
            if ( rop4 == 52428 )
            {
              v34 = v112;
              v68 = v112;
              if ( (*(_DWORD *)(v112 + 88) & 0x400) != 0 )
                v72 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v30 + 7) + 2832LL);
              else
                v72 = EngCopyBits;
              v35 = v113;
              v36 = psoSrc;
              p_iUniq = pptlSrc;
              v38 = *v114;
              v39 = v114[1];
              v87 = psoSrc;
              v86 = (struct _CLIPOBJ *)pptlSrc;
              if ( v113 )
              {
                v83 = 0LL;
                if ( v38 || v39 )
                {
                  v113->rclBounds.left += v38;
                  v35->rclBounds.right += v38;
                  v35->rclBounds.top += v39;
                  v35->rclBounds.bottom += v39;
                  if ( v35->iDComplexity )
                  {
                    v83.x = v38;
                    v83.y = v39;
                    RGNOBJ::bOffset((RGNOBJ *)&v35[2].rclBounds.top, &v83);
                    v34 = v68;
                    p_iUniq = &v86->iUniq;
                    v36 = v87;
                  }
                }
              }
              LODWORD(v82) = *p_iUniq;
              v40 = p_iUniq[1];
              v118[0] = v38 + v97.left;
              HIDWORD(v82) = v40;
              v118[2] = v38 + v97.right;
              v69 = 0;
              v118[1] = v39 + v97.top;
              v41 = (HDEV)(unsigned int)(v39 + v97.bottom);
              v118[3] = v39 + v97.bottom;
              if ( v72 )
                v69 = ((__int64 (__fastcall *)(__int64, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, struct _POINTL **))v72)(
                        v34,
                        v36,
                        v35,
                        v75,
                        v118,
                        &v82);
              if ( v35 )
              {
                v42 = -v39;
                v84 = 0LL;
                v43 = -v38;
                if ( v43 || v42 )
                {
                  v35->rclBounds.left += v43;
                  v35->rclBounds.right += v43;
                  v35->rclBounds.top += v42;
                  v35->rclBounds.bottom += v42;
                  if ( v35->iDComplexity )
                  {
                    v84.x = v43;
                    v84.y = v42;
                    RGNOBJ::bOffset((RGNOBJ *)&v35[2].rclBounds.top, &v84);
                  }
                }
              }
            }
            else
            {
              MULTIBRUSH::LoadElement((MULTIBRUSH *)&v89, v30, (struct SURFACE *)(v112 - 24));
              v96 = v112;
              if ( (*(_DWORD *)(v112 + 88) & 1) != 0 )
                v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v111 + 7) + 2824LL);
              else
                v45 = EngBitBlt;
              v46 = pptlSrc;
              v70 = psoSrc;
              v86 = v113;
              v47 = v114[1];
              LODWORD(v75) = *v114;
              v73 = v47;
              CLIPOBJ_vOffset(v113, (int)v75, v47);
              v85 = 0LL;
              v119[0] = (_DWORD)v75 + v97.left;
              v119[2] = (_DWORD)v75 + v97.right;
              v119[1] = v73 + v97.top;
              v119[3] = v73 + v97.bottom;
              if ( v46 )
              {
                LODWORD(v85) = v46->x;
                v48 = v46->y;
                v46 = (POINTL *)&v85;
                HIDWORD(v85) = v48;
              }
              pco = 0LL;
              if ( pptlBrush )
              {
                p_pco = &pco;
                LODWORD(pco) = (_DWORD)v75 + pptlBrush->x;
                HIDWORD(pco) = v73 + pptlBrush->y;
              }
              else
              {
                p_pco = 0LL;
              }
              v69 = ((__int64 (__fastcall *)(__int64, SURFOBJ *, SURFOBJ *, struct _CLIPOBJ *, struct _RECTL *, _DWORD *, POINTL *, POINTL *, BRUSHOBJ *, CLIPOBJ **, ROP4))v45)(
                      v96,
                      v70,
                      psoMask,
                      v86,
                      v33,
                      v119,
                      v46,
                      pptlMask,
                      pbo,
                      p_pco,
                      rop4);
              CLIPOBJ_vOffset(v86, -(int)v75, -v73);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)&v89, *((_DWORD *)v111 + 4));
            }
            v29 = v69 & v66;
            goto LABEL_38;
          }
LABEL_73:
          v29 = 0;
LABEL_38:
          v66 = v29;
          if ( v32 )
          {
            top = v32[2].top;
            if ( top >= 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v41) + 8 * v32[2].top + 1072);
            }
            else if ( top == -1 )
            {
              FreeThreadBufferWithTag(v32, p_iUniq, v18);
            }
          }
          if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v110) )
            goto LABEL_43;
        }
        if ( !(unsigned int)MULTISURF::bLoadSourceNotMetaDEVBITMAP((MULTISURF *)&p_pvScan0, *((HDEV *)v111 + 6)) )
        {
          v32 = 0LL;
          v74 = 0LL;
          goto LABEL_73;
        }
LABEL_23:
        v30 = v111;
        goto LABEL_24;
      }
      MSURF::vRestore((MSURF *)v110);
    }
    else
    {
LABEL_43:
      v15 = v29;
    }
    MULTISURF::~MULTISURF((MULTISURF *)&p_pvScan0);
    return v15;
  }
  if ( iType == 1 )
    return bBitBltScreenToScreen(v76, psoMask, a4, pxlo, &v97, a7, pptlMask, pbo, pptlBrush, rop4);
  else
    return bBitBltFromScreen(v76, a2, psoMask, a4, pxlo, &v97, a7, pptlMask, pbo, pptlBrush, rop4);
}
