/*
 * XREFs of EngFillPath @ 0x1400A3A10
 * Callers:
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1402FC390 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1402FE630 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403332F0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     OffFillPath @ 0x1403400C4 (OffFillPath.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A3EF8 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1401DA74C (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1401FBB60 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  __int64 p_hdev; // rax
  BOOL v11; // esi
  int *v12; // rcx
  RECTL *p_rclBounds; // r8
  BRUSHOBJ *v14; // r14
  BOOL result; // eax
  bool v16; // zf
  struct _RECTL *v17; // r9
  PATHOBJ v18; // rax
  struct REGION *v19; // rbx
  POINTL *v20; // r9
  BYTE v21; // cl
  __int64 v22; // rax
  BOOL v23; // ebx
  struct REGION *v24; // rdx
  POINTL *v25; // r9
  BYTE iDComplexity; // dl
  __int64 p_iUniq; // rax
  BRUSHOBJ *v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  BRUSHOBJ *pboa; // [rsp+58h] [rbp-A8h] BYREF
  POINTL *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v34[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  CLIPOBJ v37; // [rsp+A0h] [rbp-60h] BYREF
  CLIPOBJ pcoa; // [rsp+140h] [rbp+40h] BYREF

  v32 = pptlBrushOrg;
  p_hdev = (__int64)&pso->hdev;
  pboa = pbo;
  if ( !pso )
    p_hdev = 48LL;
  v11 = 1;
  v33 = *(_QWORD *)p_hdev;
  if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    return 0;
  PDEVOBJ::vSync((PDEVOBJ *)&v33, pso, &pco->rclBounds, 0);
  if ( (ppo->fl & 0x4000) != 0 && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity == 3 )
  {
    v14 = pboa;
    goto LABEL_15;
  }
  v12 = (int *)ppo[1];
  p_rclBounds = 0LL;
  if ( pco->rclBounds.left > v12[12] >> 4
    || pco->rclBounds.right < (int)((v12[14] + 15LL) >> 4)
    || pco->rclBounds.top > v12[13] >> 4
    || pco->rclBounds.bottom < (int)((v12[15] + 15LL) >> 4) )
  {
    p_rclBounds = &pco->rclBounds;
  }
  v14 = pboa;
  result = EngFastFill(pso, ppo, p_rclBounds, pboa, v32, mix, flOptions);
  if ( result < 0 )
  {
LABEL_15:
    v16 = pco->iDComplexity == 0;
    v35 = 0LL;
    if ( !v16 )
    {
      DWORD1(v35) = 16 * pco->rclBounds.top;
      HIDWORD(v35) = 16 * pco->rclBounds.bottom;
    }
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v28);
    v29 = 0;
    if ( (ppo->fl & 0x10) != 0 )
    {
      if ( flOptions == 2 )
        v18 = ppo[4];
      else
        v18 = ppo[3];
    }
    else
    {
      v18 = ppo[2];
    }
    v28 = (BRUSHOBJ *)v18;
    if ( !*(_QWORD *)&v18 )
    {
      v29 = 1;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&pboa, (struct EPATHOBJ *)ppo, flOptions, v17);
      v28 = pboa;
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28);
      if ( !v28 )
      {
        if ( ppo->cCurves >= 2 )
        {
          EngSetLastError(8u);
          if ( v29 )
          {
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v28);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
          }
          return 0;
        }
        goto LABEL_46;
      }
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v28) != 1 )
    {
      v34[0] = pco->rclBounds.left;
      v34[1] = pco->rclBounds.top;
      v34[2] = pco->rclBounds.right;
      v34[3] = pco->rclBounds.bottom;
      if ( !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) && !pco->iDComplexity )
      {
        XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&v37);
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v37, v24, (const struct ERECTL *)v34, 0);
        if ( ERECTL::bEmpty((ERECTL *)&v37.rclBounds) )
          goto LABEL_42;
        v25 = v32;
        iDComplexity = v37.iDComplexity;
        if ( !v37.iDComplexity )
          iDComplexity = 1;
        p_iUniq = (__int64)&pso->iUniq;
        v37.iDComplexity = iDComplexity;
        if ( !pso )
          p_iUniq = 92LL;
        ++*(_DWORD *)p_iUniq;
        v23 = EngPaint(pso, &v37, v14, v25, mix);
        goto LABEL_37;
      }
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v30);
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
      if ( v30 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v30, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&pco[2].rclBounds.top, 8u) )
        {
          v19 = (struct REGION *)v30;
          v36 = *(_OWORD *)(v30 + 52);
          ERECTL::operator*=(&v36);
          XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&pcoa);
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v19, (const struct ERECTL *)&v36, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
          {
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
LABEL_42:
            if ( v29 )
            {
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v28);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
            }
            return v11;
          }
          v20 = v32;
          v21 = pcoa.iDComplexity;
          if ( !pcoa.iDComplexity )
            v21 = 1;
          v22 = (__int64)&pso->iUniq;
          pcoa.iDComplexity = v21;
          if ( !pso )
            v22 = 92LL;
          ++*(_DWORD *)v22;
          v23 = EngPaint(pso, &pcoa, v14, v20, mix);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
LABEL_37:
          if ( v29 )
          {
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v28);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
          }
          return v23;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      v11 = 0;
    }
LABEL_46:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v28);
    return v11;
  }
  return result;
}
