/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140063B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140063050 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14006438C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x140064444 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffAlphaBlend @ 0x140067298 (OffAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v7; // edi
  struct _RECTL *v9; // rsi
  struct _SURFOBJ *v11; // r12
  struct _RECTL v12; // xmm0
  HDEV hdev; // rax
  int v14; // ebx
  struct _SURFOBJ *v15; // rcx
  int Surface; // eax
  int v17; // r14d
  Gre::Base *v18; // rcx
  int v19; // esi
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  CLIPOBJ *v24; // r9
  SURFOBJ *v25; // rdx
  struct _DISPSURF *v26; // rcx
  __int64 v27; // r10
  PVOID *p_pvScan0; // r11
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  bool v30; // zf
  HDEV pulXlate; // rsi
  HDEV v32; // rcx
  struct Gre::Base::SESSION_GLOBALS *v33; // r11
  struct PALETTE *v34; // r14
  struct PALETTE *v35; // rax
  int v36; // edx
  ULONG iUniq; // r9d
  int v38; // r12d
  FLONG flXlate; // r8d
  __int64 v40; // rax
  __int64 v41; // rcx
  ULONG *v42; // r10
  ULONG v43; // r11d
  int inited; // eax
  ULONG v45; // [rsp+60h] [rbp-A0h]
  BOOL v46; // [rsp+64h] [rbp-9Ch]
  struct _SURFOBJ *v47; // [rsp+68h] [rbp-98h]
  FLONG v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  CLIPOBJ *pco; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v52; // [rsp+88h] [rbp-78h]
  PVOID *v53; // [rsp+90h] [rbp-70h]
  struct Gre::Base::SESSION_GLOBALS *v54; // [rsp+98h] [rbp-68h]
  struct _RECTL *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  CLIPOBJ *v59; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v60; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-28h] BYREF
  char v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E4h] [rbp-1Ch]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  _BYTE v67[40]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v68; // [rsp+128h] [rbp+28h]
  char v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+134h] [rbp+34h]
  SURFOBJ *psoSrc; // [rsp+158h] [rbp+58h]
  RECTL *prclSrc; // [rsp+160h] [rbp+60h]
  _BYTE v73[56]; // [rsp+170h] [rbp+70h] BYREF
  struct _DISPSURF *v74; // [rsp+1A8h] [rbp+A8h]
  int v75[2]; // [rsp+1B0h] [rbp+B0h]
  struct _CLIPOBJ *v76; // [rsp+1B8h] [rbp+B8h]
  int v77[4]; // [rsp+1C0h] [rbp+C0h]
  _BYTE v78[88]; // [rsp+1D0h] [rbp+D0h] BYREF
  SURFOBJ *psoDest; // [rsp+228h] [rbp+128h]
  RECTL *prclDest; // [rsp+230h] [rbp+130h]

  v7 = 0;
  v9 = a6;
  v55 = a5;
  v11 = a2;
  v64 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = *a6;
  v65 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v66 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  hdev = a2->hdev;
  pco = a3;
  v47 = a2;
  v52 = a1;
  v61 = 0LL;
  v62 = 0;
  v63 = 0;
  v60 = v12;
  if ( a2->iType == 1 && hdev && ((_DWORD)hdev[10] & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v61, &v60) )
      goto LABEL_6;
    if ( !v61 )
    {
      v7 = 1;
      goto LABEL_6;
    }
    a1 = v52;
    v9 = &v60;
    v11 = (struct _SURFOBJ *)((v61 + 24) & -(__int64)(v61 != 0));
    v47 = v11;
  }
  v46 = 1;
  v14 = IsMetaDevBitmapForMirroring(a1);
  Surface = MSURF::bFindSurface((MSURF *)v73, v15, a3, v55);
  v68 = 0LL;
  v69 = 0;
  v70 = 0;
  v17 = Surface;
  MULTISURF::vInit((MULTISURF *)v67, v11, v9);
  if ( v14 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v78, v52, v55);
    v46 = EngAlphaBlend(psoDest, psoSrc, pco, a4, prclDest, prclSrc, pBlendObj);
    v19 = v46;
    MULTISURF::~MULTISURF((MULTISURF *)v78);
  }
  else
  {
    v19 = 1;
  }
  v20 = Gre::Base::Globals(v18);
  v54 = v20;
  if ( v17 )
  {
    while ( 1 )
    {
      v22 = *((_QWORD *)v20 + 485);
      v59 = 0LL;
      v58 = 0LL;
      v57 = 0LL;
      v56 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v67, v74) )
        goto LABEL_57;
      v23 = *(_QWORD *)v75;
      v24 = (CLIPOBJ *)a4;
      v25 = psoSrc;
      v26 = v74;
      v27 = *(_QWORD *)v75 - 24LL;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v49 = *(_QWORD *)v75 - 24LL;
      v53 = &psoSrc[-1].pvScan0;
      if ( !*((_DWORD *)v74 + 6) )
        goto LABEL_14;
      pulXlate = (HDEV)p_pvScan0[16];
      v32 = (HDEV)*((_QWORD *)v74 + 6);
      v33 = v54;
      v34 = (struct PALETTE *)*((_QWORD *)v54 + 484);
      if ( ((_DWORD)v32[539] & 0x100) != 0 )
      {
        v35 = DrvRealizeHalftonePalette(v32, 0);
        v25 = psoSrc;
        v34 = v35;
        v27 = v49;
        v33 = v54;
      }
      if ( pulXlate )
        goto LABEL_35;
      if ( !a4 )
        goto LABEL_33;
      if ( !a4[1].pulXlate )
        break;
      pulXlate = (HDEV)a4[1].pulXlate;
      v36 = 0;
LABEL_36:
      if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
      {
        v36 = 0x4000;
        if ( v34 == *((struct PALETTE **)v33 + 484) )
          v36 = 0x2000;
      }
LABEL_39:
      v50 = v27;
      if ( a4 )
      {
        iUniq = a4[1].iUniq;
        v38 = *(_DWORD *)&a4[1].iSrcType;
        flXlate = a4[1].flXlate;
      }
      else
      {
        flXlate = 0;
        v38 = 0;
        iUniq = 0;
      }
      v40 = *((_QWORD *)v33 + 484);
      *(_QWORD *)&v60.left = v27 + 128;
      v41 = *(_QWORD *)(v27 + 128);
      v45 = iUniq;
      v48 = flXlate;
      if ( a4 )
      {
        v42 = a4[2].pulXlate;
        v43 = a4[3].iUniq;
      }
      else
      {
        v42 = 0LL;
        v43 = 0;
        v48 = flXlate;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v59, v42, v43, pulXlate, v41, v40, v34, flXlate, v38, iUniq, v36)
        && (pco = v59,
            (unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v58,
                            0LL,
                            0LL,
                            **(_QWORD **)&v60.left,
                            v22,
                            v34,
                            v34,
                            v48,
                            v38,
                            v45,
                            0))
        && (*(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v58,
            (unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v57,
                            0LL,
                            0LL,
                            v22,
                            **(_QWORD **)&v60.left,
                            v34,
                            v34,
                            v48,
                            v38,
                            v45,
                            0)) )
      {
        v25 = psoSrc;
        *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v57;
        if ( v25 == v47 )
        {
          v11 = v47;
          goto LABEL_52;
        }
        inited = EXLATEOBJ::bInitXlateObj(&v56, 0LL, 0LL, v53[16], v22, *((_QWORD *)v54 + 484), v34, v48, v38, v45, 0);
        v11 = v47;
        if ( inited )
        {
          v25 = psoSrc;
          *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v56;
LABEL_52:
          p_pvScan0 = v53;
          v24 = pco;
          v27 = v50;
          v26 = v74;
          v23 = *(_QWORD *)v75;
LABEL_14:
          if ( (*(_DWORD *)(v23 + 88) & 0x10000) != 0 )
            v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v26 + 7) + 3248LL);
          else
            v29 = EngAlphaBlend;
          if ( v25->iType == 1 && p_pvScan0[6] != *(PVOID *)(v27 + 48) )
            v29 = EngAlphaBlend;
          pco = 0LL;
          v19 = OffAlphaBlend(
                  (int)v29,
                  v77[0],
                  v23,
                  (int)&pco,
                  (__int64)v25,
                  v76,
                  (__int64)v24,
                  (__int64)v55,
                  (__int64)prclSrc,
                  (__int64)pBlendObj) & v46;
          goto LABEL_18;
        }
      }
      else
      {
        v11 = v47;
      }
LABEL_57:
      v19 = 0;
LABEL_18:
      *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v64;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v65;
      *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v66;
      v46 = v19;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
      v30 = (unsigned int)MSURF::bNextSurface((MSURF *)v73) == 0;
      v20 = v54;
      if ( v30 )
        goto LABEL_5;
    }
    if ( (a4->flXlate & 1) != 0 )
    {
LABEL_33:
      if ( v25 == v11 )
        pulXlate = v52[1].hdev;
    }
    else
    {
      v34 = *(struct PALETTE **)&a4[2].iSrcType;
      if ( !v34 )
        goto LABEL_57;
      if ( *((_DWORD *)v53 + 24) == v52->iBitmapFormat )
        pulXlate = v52[1].hdev;
    }
LABEL_35:
    v36 = 0;
    if ( !pulXlate )
      goto LABEL_39;
    goto LABEL_36;
  }
LABEL_5:
  MULTISURF::~MULTISURF((MULTISURF *)v67);
  v7 = v19;
LABEL_6:
  SURFMEM::~SURFMEM((SURFMEM *)&v61);
  return v7;
}
