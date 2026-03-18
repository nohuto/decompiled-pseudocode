/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14000A130
 * Callers:
 *     <none>
 * Callees:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x14000AB94 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x14000C1BC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401FEB88 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffTransparentBlt @ 0x140217948 (OffTransparentBlt.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  struct _RECTL *v8; // rdi
  unsigned int v9; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // r12
  struct _RECTL *v13; // rcx
  struct _SURFOBJ *v14; // r13
  struct _RECTL v15; // xmm0
  int v16; // esi
  int Surface; // eax
  int v18; // r15d
  Gre::Base *v19; // rcx
  int v20; // edi
  SURFOBJ *v21; // r8
  CLIPOBJ *v22; // rsi
  int v23; // edi
  __int64 v24; // r15
  PVOID *p_pvScan0; // r9
  HDEV v26; // rcx
  ULONG *pulXlate; // rsi
  struct PALETTE *v28; // rdx
  struct PALETTE *v29; // rax
  int v30; // r8d
  bool v31; // zf
  __int64 v32; // rcx
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  int v34; // r9d
  ULONG iUniq; // r10d
  __int64 v36; // rax
  __int64 v37; // rcx
  ULONG *v38; // r11
  int inited; // eax
  int v40; // r9d
  unsigned int v41; // eax
  int NearestIndexFromColorref; // eax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v45; // [rsp+60h] [rbp-A0h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+68h] [rbp-98h]
  CLIPOBJ *pco; // [rsp+70h] [rbp-90h] BYREF
  FLONG flXlate; // [rsp+78h] [rbp-88h]
  ULONG v49; // [rsp+7Ch] [rbp-84h]
  struct _RECTL *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  char v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+94h] [rbp-6Ch]
  struct _SURFOBJ *v54; // [rsp+98h] [rbp-68h]
  _BYTE v55[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  char v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  _BYTE v61[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v62; // [rsp+148h] [rbp+48h]
  int v63[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v64; // [rsp+158h] [rbp+58h]
  int v65[4]; // [rsp+160h] [rbp+60h]
  _BYTE v66[88]; // [rsp+170h] [rbp+70h] BYREF
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v69; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = a6;
  v9 = 0;
  hdev = a2->hdev;
  v11 = a1;
  v54 = a1;
  v13 = a5;
  v14 = a2;
  v15 = *a6;
  v16 = 1;
  pco = a3;
  v50 = a5;
  v69 = v15;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v45 = 1;
    if ( v11->iType != 3 || (HIDWORD(v11[1].hsurf) & 9) != 0 )
      v16 = 0;
    Surface = MSURF::bFindSurface((MSURF *)v61, v11, a3, v13);
    v56 = 0LL;
    v57 = 0;
    v58 = 0;
    v18 = Surface;
    MULTISURF::vInit((MULTISURF *)v55, v14, v8);
    if ( v16 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v66, v11, v50);
      v45 = EngTransparentBlt(psoDst, psoSrc, pco, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v20 = v45;
      MULTISURF::~MULTISURF((MULTISURF *)v66);
    }
    else
    {
      v20 = 1;
    }
    v46 = Gre::Base::Globals(v19);
    if ( !v18 )
    {
LABEL_58:
      MULTISURF::~MULTISURF((MULTISURF *)v55);
      v9 = v20;
      goto LABEL_59;
    }
    while ( 1 )
    {
      pco = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v55, v62) )
        goto LABEL_56;
      v21 = psoSrc;
      v22 = (CLIPOBJ *)a4;
      v23 = 0;
      v24 = *(_QWORD *)v63 - 24LL;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      *(_QWORD *)&v69.left = (char *)psoSrc - 24;
      if ( *((_DWORD *)v62 + 6) )
        break;
LABEL_46:
      v40 = iTransColor;
      if ( v21 != v14 )
      {
        v41 = ulIndexToRGB(v14[1].hdev, *((_QWORD *)v46 + 471), iTransColor, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *(_QWORD *)(*(_QWORD *)&v69.left + 128LL),
                                     *((_QWORD *)v46 + 471),
                                     v41,
                                     1LL);
        v21 = psoSrc;
        v40 = NearestIndexFromColorref;
      }
      if ( !v23 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v63 + 88LL) & 0x8000) != 0 )
          v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v62 + 7) + 3272LL);
        else
          v43 = EngTransparentBlt;
        if ( v21->iType == 1 && *(_QWORD *)(*(_QWORD *)&v69.left + 48LL) != *(_QWORD *)(v24 + 48) )
          v43 = EngTransparentBlt;
        *(_QWORD *)&v69.left = 0LL;
        v20 = OffTransparentBlt(
                (int)v43,
                v65[0],
                v63[0],
                (int)&v69,
                (__int64)v21,
                v64,
                (__int64)v22,
                (__int64)v50,
                (__int64)prclSrc,
                v40,
                ulReserved) & v45;
        goto LABEL_57;
      }
LABEL_56:
      v20 = 0;
LABEL_57:
      v45 = v20;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pco);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v61) )
        goto LABEL_58;
    }
    v26 = (HDEV)*((_QWORD *)v62 + 6);
    pulXlate = (ULONG *)p_pvScan0[16];
    v28 = (struct PALETTE *)*((_QWORD *)v46 + 471);
    if ( ((_DWORD)v26[539] & 0x100) != 0 )
    {
      v29 = DrvRealizeHalftonePalette(v26, 0);
      v21 = psoSrc;
      v28 = v29;
      p_pvScan0 = *(PVOID **)&v69.left;
    }
    if ( !pulXlate )
    {
      if ( !a4 )
        goto LABEL_27;
      if ( a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
        v30 = 0;
        goto LABEL_31;
      }
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_27:
        v31 = v21 == v14;
      }
      else
      {
        v28 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( !v28 )
        {
          v23 = 1;
LABEL_45:
          v22 = (CLIPOBJ *)a4;
          goto LABEL_46;
        }
        v31 = *((_DWORD *)p_pvScan0 + 24) == v11->iBitmapFormat;
      }
      if ( v31 )
        pulXlate = (ULONG *)v11[1].hdev;
    }
    v30 = 0;
    if ( !pulXlate )
    {
      v33 = v46;
      v32 = v24;
LABEL_36:
      v24 = v32;
      if ( a4 )
      {
        v34 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
        flXlate = a4[1].flXlate;
      }
      else
      {
        flXlate = 0;
        v34 = 0;
        iUniq = 0;
      }
      v36 = *((_QWORD *)v33 + 471);
      v37 = *(_QWORD *)(v32 + 128);
      if ( a4 )
      {
        v38 = a4[2].pulXlate;
        v49 = a4[3].iUniq;
        v11 = v54;
      }
      else
      {
        v38 = 0LL;
        v49 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(&pco, v38, v49, pulXlate, v37, v36, v28, flXlate, v34, iUniq, v30);
      v21 = psoSrc;
      if ( inited )
      {
        v22 = pco;
        goto LABEL_46;
      }
      v23 = 1;
      goto LABEL_45;
    }
LABEL_31:
    v32 = v24;
    v33 = v46;
    if ( (pulXlate[6] & 0x800) != 0 )
    {
      if ( v28 == *((struct PALETTE **)v46 + 471) )
        v30 = 0x2000;
      else
        v30 = 0x4000;
    }
    goto LABEL_36;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v51, &v69) )
  {
    if ( !v51 )
    {
      v9 = 1;
      goto LABEL_59;
    }
    a3 = pco;
    v8 = &v69;
    v13 = v50;
    v14 = (struct _SURFOBJ *)(v51 + 24);
    goto LABEL_8;
  }
LABEL_59:
  SURFMEM::~SURFMEM((SURFMEM *)&v51);
  return v9;
}
