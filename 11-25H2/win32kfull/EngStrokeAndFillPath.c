/*
 * XREFs of EngStrokeAndFillPath @ 0x1400E48A0
 * Callers:
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401DBF80 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     OffStrokeAndFillPath @ 0x1401DC710 (OffStrokeAndFillPath.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1402FCFF0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1402FF530 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030B4A0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x14006C614 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A2C (-bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1401FBB60 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  MIX v11; // r15d
  BOOL v12; // esi
  MIX mix; // edx
  BOOL v16; // ebx
  struct EPATHOBJ *v18; // rdx
  CLIPOBJ *v19; // rax
  FLONG fl; // eax
  PATHOBJ v21; // rax
  struct _CLIPOBJ *v22; // rdi
  struct REGION *v23; // rdx
  BRUSHOBJ *v24; // r8
  __int64 p_iUniq; // rax
  POINTL *v26; // r15
  POINTL *v27; // r9
  BRUSHOBJ *v28; // r8
  __int64 v29; // rax
  MIX v30; // [rsp+20h] [rbp-E0h]
  struct REGION *v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  CLIPOBJ *pcoa; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  CLIPOBJ *v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h]
  MIX v38; // [rsp+78h] [rbp-88h]
  POINTL *v39; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v40; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v42; // [rsp+98h] [rbp-68h]
  _BYTE v43[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ v46; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v47[152]; // [rsp+1D0h] [rbp+D0h] BYREF
  CLIPOBJ *v48; // [rsp+268h] [rbp+168h]
  int v49; // [rsp+270h] [rbp+170h]

  v11 = mixFill;
  v12 = 0;
  mix = mixFill;
  pcoa = pco;
  v40 = pco;
  v42 = pboStroke;
  pbo = pboFill;
  v39 = pptlBrushOrg;
  LODWORD(v31) = flOptions;
  v38 = mixFill;
  if ( !_bittest((const signed __int32 *)&pboFill[5], 0xFu) )
  {
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
    v38 = mix;
  }
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    v11 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v43);
    if ( ppo[5] )
      goto LABEL_61;
    if ( (unsigned int)bUMPDSecurityGateEx() && !pxo )
      goto LABEL_45;
    if ( v44
      && pathwide::bComputeWidenedBounds(
           (pathwide *)v43,
           (struct EPATHOBJ *)ppo,
           (const struct _RECTFX *)pxo,
           (const struct EXFORMOBJ *)plineattrs)
      && pathwide::bWiden((pathwide *)v43, (struct EPATHOBJ *)ppo, (struct EPATHOBJ *)pxo, plineattrs) )
    {
LABEL_61:
      if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      {
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
        v19 = (CLIPOBJ *)*((_QWORD *)v18 + 5);
        v37 = 0;
        v36 = v19;
        if ( !v19 )
        {
          v37 = 1;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&pcoa, v18, 2u, 0LL);
          v36 = pcoa;
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
        }
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
        fl = ppo->fl;
        v35 = 0;
        if ( (fl & 0x10) != 0 )
        {
          if ( (_DWORD)v31 == 2 )
            v21 = ppo[4];
          else
            v21 = ppo[3];
        }
        else
        {
          v21 = ppo[2];
        }
        v34 = (CLIPOBJ *)v21;
        if ( !*(_QWORD *)&v21 )
        {
          v35 = 1;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&pcoa, (struct EPATHOBJ *)ppo, (unsigned int)v31, 0LL);
          v34 = pcoa;
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
        }
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v32);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v32, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32);
        if ( !v34 || !v36 || !v32 || !RGNOBJ::bMerge((RGNOBJ *)&v32, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v36, 4u) )
          goto LABEL_20;
        BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v47, pso, &v40);
        if ( v49 )
        {
          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v31);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
          if ( !v31 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v36) == 1 )
            goto LABEL_35;
          v22 = v40;
          if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v40[2].rclBounds.top, 8u) )
          {
            v45 = *(_OWORD *)((char *)v31 + 52);
            XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&v46);
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v46, v23, (const struct ERECTL *)&v45, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v46.rclBounds) )
            {
              v26 = v39;
              v12 = 1;
            }
            else
            {
              v24 = v42;
              p_iUniq = (__int64)&pso->iUniq;
              v30 = v11;
              v26 = v39;
              if ( !pso )
                p_iUniq = 92LL;
              v27 = v39;
              ++*(_DWORD *)p_iUniq;
              v12 = EngPaint(pso, &v46, v24, v27, v30);
              if ( !v12 )
                goto LABEL_35;
            }
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v32) == 1 )
            {
LABEL_35:
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
              pcoa = v48;
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pcoa);
LABEL_20:
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v32);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
              if ( v35 )
              {
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
              }
              if ( v37 )
              {
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v43);
              return v12;
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v22[2].rclBounds.top, 8u) )
            {
              v45 = *(_OWORD *)((char *)v31 + 52);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v46, v31, (struct ERECTL *)&v45);
              if ( ERECTL::bEmpty((ERECTL *)&v46.rclBounds) )
              {
                v12 = 1;
              }
              else
              {
                v28 = pbo;
                v29 = (__int64)&pso->iUniq;
                if ( !pso )
                  v29 = 92LL;
                ++*(_DWORD *)v29;
                v12 = EngPaint(pso, &v46, v28, v26, v38);
              }
              goto LABEL_35;
            }
          }
          v12 = 0;
          goto LABEL_35;
        }
        pcoa = v48;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pcoa);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v34);
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v36);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
LABEL_45:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v43);
    return 0;
  }
  if ( !EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions)
    || !EngStrokePath(pso, ppo, pcoa, pxo, v42, v39, plineattrs, v11) )
  {
    return 0;
  }
  return v16;
}
