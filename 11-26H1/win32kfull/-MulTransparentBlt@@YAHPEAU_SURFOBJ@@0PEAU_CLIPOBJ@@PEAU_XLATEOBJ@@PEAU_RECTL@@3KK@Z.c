/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1400625A0
 * Callers:
 *     <none>
 * Callees:
 *     OffTransparentBlt @ 0x14006088C (OffTransparentBlt.c)
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140063050 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14006438C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x140064444 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  unsigned int v8; // edi
  struct _RECTL *v9; // r14
  HDEV hdev; // rax
  struct _SURFOBJ *v13; // r15
  int v14; // ebx
  struct _RECTL v16; // xmm0
  int v17; // ebx
  int Surface; // eax
  int v19; // r12d
  Gre::Base *v20; // rcx
  SURFOBJ *v22; // r8
  struct _XLATEOBJ *v23; // r14
  int v24; // ebx
  __int64 v25; // r13
  PVOID *p_pvScan0; // r12
  int v27; // r9d
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  HDEV v29; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v31; // rdx
  struct PALETTE *v32; // rax
  int v33; // r8d
  struct Gre::Base::SESSION_GLOBALS *v34; // rax
  int v35; // r9d
  ULONG iUniq; // r10d
  __int64 v37; // rax
  ULONG *v38; // r11
  ULONG v39; // r12d
  int inited; // eax
  unsigned int v41; // eax
  int NearestIndexFromColorref; // eax
  BOOL v43; // [rsp+60h] [rbp-A0h]
  struct Gre::Base::SESSION_GLOBALS *v44; // [rsp+68h] [rbp-98h]
  FLONG flXlate; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v47; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  char v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  _BYTE v52[40]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h]
  char v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  SURFOBJ *psoSrc; // [rsp+108h] [rbp+8h]
  RECTL *prclSrc; // [rsp+110h] [rbp+10h]
  _BYTE v58[56]; // [rsp+120h] [rbp+20h] BYREF
  struct _DISPSURF *v59; // [rsp+158h] [rbp+58h]
  int v60[2]; // [rsp+160h] [rbp+60h]
  struct _CLIPOBJ *v61; // [rsp+168h] [rbp+68h]
  int v62[2]; // [rsp+170h] [rbp+70h]
  _BYTE v63[88]; // [rsp+180h] [rbp+80h] BYREF
  SURFOBJ *psoDst; // [rsp+1D8h] [rbp+D8h]
  RECTL *prclDst; // [rsp+1E0h] [rbp+E0h]

  v8 = 0;
  v9 = a6;
  hdev = a2->hdev;
  v13 = a2;
  v14 = 1;
  v49 = 0LL;
  v16 = *a6;
  v50 = 0;
  v51 = 0;
  v48 = v16;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
    goto LABEL_2;
  if ( !(unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v49, &v48) )
    goto LABEL_7;
  if ( v49 )
  {
    v9 = &v48;
    v13 = (struct _SURFOBJ *)((v49 + 24) & -(__int64)(v49 != 0));
LABEL_2:
    v43 = 1;
    v17 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v58, a1, a3, a5);
    v53 = 0LL;
    v54 = 0;
    v55 = 0;
    v19 = Surface;
    MULTISURF::vInit((MULTISURF *)v52, v13, v9);
    if ( v17 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v63, a1, a5);
      v43 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v14 = v43;
      MULTISURF::~MULTISURF((MULTISURF *)v63);
    }
    else
    {
      v14 = 1;
    }
    v44 = Gre::Base::Globals(v20);
    if ( !v19 )
    {
LABEL_5:
      MULTISURF::~MULTISURF((MULTISURF *)v52);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v47 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v52, v59) )
        goto LABEL_18;
      v22 = psoSrc;
      v23 = a4;
      v24 = 0;
      v25 = *(_QWORD *)v60;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      *(_QWORD *)&v48.left = (char *)psoSrc - 24;
      if ( *((_DWORD *)v59 + 6) )
        break;
LABEL_15:
      v27 = iTransColor;
      if ( v22 != v13 )
      {
        v41 = ulIndexToRGB(v13[1].hdev, *((_QWORD *)v44 + 484), iTransColor, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(p_pvScan0[16], *((_QWORD *)v44 + 484), v41, 1LL);
        v22 = psoSrc;
        v27 = NearestIndexFromColorref;
      }
      if ( !v24 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v60 + 88LL) & 0x8000) != 0 )
          v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v59 + 7) + 3272LL);
        else
          v28 = EngTransparentBlt;
        if ( v22->iType == 1 && p_pvScan0[6] != *(PVOID *)(v25 + 24) )
          v28 = EngTransparentBlt;
        *(_QWORD *)&v48.left = 0LL;
        v14 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v28,
                *(int **)v62,
                *(__int64 *)v60,
                &v48.left,
                (__int64)v22,
                v61,
                (__int64)v23,
                (__int128 *)&a5->left,
                (__int128 *)&prclSrc->left,
                v27,
                ulReserved) & v43;
        goto LABEL_19;
      }
LABEL_18:
      v14 = 0;
LABEL_19:
      v43 = v14;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v47);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v58) )
        goto LABEL_5;
    }
    v29 = (HDEV)*((_QWORD *)v59 + 6);
    pulXlate = (HDEV)p_pvScan0[16];
    v31 = (struct PALETTE *)*((_QWORD *)v44 + 484);
    if ( ((_DWORD)v29[539] & 0x100) != 0 )
    {
      v32 = DrvRealizeHalftonePalette(v29, 0);
      v22 = psoSrc;
      v31 = v32;
    }
    if ( !pulXlate )
    {
      if ( !a4 )
        goto LABEL_43;
      if ( a4[1].pulXlate )
      {
        pulXlate = (HDEV)a4[1].pulXlate;
        v33 = 0;
        goto LABEL_33;
      }
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_43:
        if ( v22 == v13 )
          pulXlate = a1[1].hdev;
      }
      else
      {
        v31 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( !v31 )
        {
          v24 = 1;
LABEL_54:
          v23 = a4;
          goto LABEL_15;
        }
        if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
          pulXlate = a1[1].hdev;
      }
    }
    v33 = 0;
    if ( !pulXlate )
    {
      v34 = v44;
LABEL_36:
      if ( a4 )
      {
        v35 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
        flXlate = a4[1].flXlate;
      }
      else
      {
        flXlate = 0;
        v35 = 0;
        iUniq = 0;
      }
      v37 = *((_QWORD *)v34 + 484);
      if ( a4 )
      {
        v38 = a4[2].pulXlate;
        v39 = a4[3].iUniq;
      }
      else
      {
        v38 = 0LL;
        v39 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 &v47,
                 v38,
                 v39,
                 pulXlate,
                 *(_QWORD *)(v25 + 104),
                 v37,
                 v31,
                 flXlate,
                 v35,
                 iUniq,
                 v33);
      v22 = psoSrc;
      p_pvScan0 = *(PVOID **)&v48.left;
      if ( inited )
      {
        v23 = v47;
        goto LABEL_15;
      }
      v24 = 1;
      goto LABEL_54;
    }
LABEL_33:
    v34 = v44;
    if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
    {
      v33 = 0x4000;
      if ( v31 == *((struct PALETTE **)v44 + 484) )
        v33 = 0x2000;
    }
    goto LABEL_36;
  }
LABEL_6:
  v8 = v14;
LABEL_7:
  SURFMEM::~SURFMEM((SURFMEM *)&v49);
  return v8;
}
