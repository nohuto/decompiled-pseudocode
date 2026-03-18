/*
 * XREFs of GreFrameRgn @ 0x1400E295C
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E1FB8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtGdiFrameRgn @ 0x1400E45F0 (NtGdiFrameRgn.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14009F4AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A74 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     pathwide::EPATHOBJ_vBecome @ 0x1400A437C (pathwide--EPATHOBJ_vBecome.c)
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ??1WIDENER@pathwide@@QEAA@XZ @ 0x1400A4F64 (--1WIDENER@pathwide@@QEAA@XZ.c)
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1400E4120 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1400E417C (-vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400E4270 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // r14d
  int v11; // edi
  int v12; // ebx
  char v13; // bl
  __m128i v14; // xmm1
  LONG v15; // edx
  int v16; // r9d
  DC *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  DC *v20; // rcx
  DC *v21; // rcx
  __int64 v22; // r15
  DC *v23; // rbx
  __int64 v24; // rcx
  struct REGION *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdi
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // r14
  DC *v30; // rcx
  __int64 v31; // rax
  unsigned __int8 v32; // cl
  MIX mix; // edx
  DC *v34; // rax
  __int64 v35; // rcx
  DC *v37; // rax
  unsigned int v38; // edi
  int *v39; // r14
  double v40; // xmm0_8
  DC *v41; // rax
  __int64 v42; // rax
  struct _LINEATTRS *v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTFX v46[4]; // [rsp+50h] [rbp-B0h] BYREF
  DC *v47[14]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+100h] [rbp+0h] BYREF
  bool v49; // [rsp+108h] [rbp+8h]
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v51[8]; // [rsp+120h] [rbp+20h] BYREF
  BRUSHOBJ pbo; // [rsp+160h] [rbp+60h] BYREF
  int v53; // [rsp+17Ch] [rbp+7Ch]
  __int64 v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+198h] [rbp+98h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  __int128 v58; // [rsp+1C0h] [rbp+C0h]
  int v59; // [rsp+1D8h] [rbp+D8h]
  _BYTE v60[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v61; // [rsp+1F4h] [rbp+F4h]
  __m128i *v62; // [rsp+1F8h] [rbp+F8h]
  char v63[8]; // [rsp+270h] [rbp+170h] BYREF
  struct _RECTFX *v64; // [rsp+278h] [rbp+178h]
  _BYTE v65[144]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v66; // [rsp+380h] [rbp+280h] BYREF
  _OWORD v67[2]; // [rsp+390h] [rbp+290h] BYREF
  int v68; // [rsp+3B0h] [rbp+2B0h]
  CLIPOBJ pco; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v70[160]; // [rsp+6F0h] [rbp+5F0h] BYREF
  char v71[152]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v72[168]; // [rsp+828h] [rbp+728h] BYREF

  v8 = 0;
  v9 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v47, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v51, a2, 1, 0);
  v10 = -a4;
  if ( a4 > 0 )
    v10 = a4;
  v11 = -a5;
  if ( a5 > 0 )
    v11 = a5;
  if ( v47[0] && (*((_DWORD *)v47[0] + 9) & 0x10000) == 0 && v51[0] && v10 > 0 && v11 > 0 )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v51) == 1 )
    {
      v8 = 1;
      goto LABEL_53;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v63);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v60);
    v12 = *(_DWORD *)(*((_QWORD *)v47[0] + 122) + 208LL);
    DC::QuickInitXform(v47[0], v46, 2147484164LL);
    v48 = *(_QWORD *)&v46[0].xLeft;
    v49 = v12 != 2;
    if ( !v64 )
      goto LABEL_51;
    if ( !v62 )
      goto LABEL_51;
    if ( !RGNOBJ::bCreate((RGNOBJ *)v51, (struct EPATHOBJ *)v63, (const struct EXFORMOBJR *)&v48) )
      goto LABEL_51;
    v68 = 0;
    *(_QWORD *)&v46[0].xLeft = v67;
    memset(&v46[0].xRight, 0, 40);
    memset(v67, 0, sizeof(v67));
    pathwide::vWidenSetupForFrameRgn(
      (pathwide *)v47,
      (struct XDCOBJ *)(unsigned int)v10,
      v11,
      (int)v46,
      (struct EXFORMOBJ *)&v46[0].xRight,
      v43);
    v66 = 0LL;
    if ( !pathwide::bComputeWidenedBounds((pathwide *)&v66, v64 + 3, v46, (const struct EXFORMOBJ *)&v46[0].xRight) )
      goto LABEL_51;
    v62[3] = v66;
    pathwide::WIDENER::WIDENER(
      (pathwide::WIDENER *)&pco,
      (struct EPATHOBJ *)v63,
      (const struct MATRIX **)v46,
      (const struct _LINEATTRS *)&v46[0].xRight);
    if ( (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v72)
      && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v71)
      && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v70) )
    {
      v13 = 1;
      pathwide::EPATHOBJ_vBecome((__int64)v60, (__int64)v72);
      v61 = EPATHOBJ::cTotalCurves((EPATHOBJ *)v60);
    }
    else
    {
      v13 = 0;
    }
    pathwide::WIDENER::~WIDENER((pathwide::WIDENER *)&pco);
    if ( !v13 )
      goto LABEL_51;
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v45);
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v45, (struct EPATHOBJ *)v60, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v44);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v44, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
    if ( !v45 || !v44 )
      goto LABEL_50;
    if ( (*(_DWORD *)(*((_QWORD *)v47[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v8 = RGNOBJ::bMerge((RGNOBJ *)&v44, (struct RGNOBJ *)&v45, (struct RGNOBJ *)v51, 8u);
    }
    else
    {
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v66);
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v66, (struct EPATHOBJ *)v63, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v66);
      if ( v66.m128i_i64[0] && RGNOBJ::bMerge((RGNOBJ *)&v44, (struct RGNOBJ *)&v45, (struct RGNOBJ *)&v66, 8u) )
        v8 = 1;
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v66);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v66);
    }
    if ( !v8 )
    {
LABEL_50:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v44);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v45);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
LABEL_51:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v60);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v63);
      if ( v9 )
      {
        v42 = UserReferenceDwmApiPort(v35);
        DwmSyncFlushAndWaitForBatch(v42);
      }
      goto LABEL_53;
    }
    v66 = 0LL;
    v14 = *(__m128i *)(v44 + 52);
    v15 = _mm_cvtsi128_si32(v14);
    v66 = v14;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
    if ( v15 != v16 && v66.m128i_i32[1] != v66.m128i_i32[3] )
    {
      v17 = v47[0];
      if ( !v47[0] )
        goto LABEL_30;
      v9 = bSpDwmValidateSurface(
             (struct XDCOBJ *)v47,
             v15,
             v66.m128i_i32[1],
             v16 - v15,
             v66.m128i_i32[3] - v66.m128i_i32[1]);
    }
    v17 = v47[0];
LABEL_30:
    if ( (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v47, (struct ERECTL *)&v66);
      v17 = v47[0];
    }
    if ( !*((_QWORD *)v17 + 62) || DC::bInFullScreen(v17) )
      goto LABEL_50;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v65);
    v18 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, (struct XDCOBJ *)v47, 0);
    v19 = v44;
    v20 = v47[0];
    if ( !v44 )
      *((_DWORD *)v47[0] + 9) |= 0x10u;
    *((_QWORD *)v20 + 141) = v19;
    v21 = v47[0];
    v22 = *((_QWORD *)v47[0] + 62);
    if ( v18 )
    {
      if ( DC::bTightenRao(v47[0]) )
      {
        v23 = v47[0];
        v24 = *((_DWORD *)v47[0] + 10) & 1;
        v66.m128i_i32[0] += *((_DWORD *)v47[0] + 2 * v24 + 254);
        v66.m128i_i32[2] += *((_DWORD *)v47[0] + 2 * v24 + 254);
        v66.m128i_i32[1] += *((_DWORD *)v47[0] + 2 * v24 + 255);
        v66.m128i_i32[3] += *((_DWORD *)v47[0] + 2 * v24 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v47[0]) )
        {
          v38 = 0;
          v39 = (int *)&v66;
          do
          {
            *(_QWORD *)&v40 = COERCE_UNSIGNED_INT((float)*v39);
            *(float *)&v40 = *(float *)&v40 * *((float *)v23 + 131);
            if ( !(unsigned int)bFToL(v40, &v66.m128i_i32[v38], 6u) )
              break;
            ++v38;
            ++v39;
          }
          while ( v38 < 4 );
        }
        XDCOBJ::prgnEffRao(v47);
        XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&pco);
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v25, (const struct ERECTL *)&v66, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v41 = v47[0];
          *((_DWORD *)v47[0] + 9) |= 0x10u;
          *((_QWORD *)v41 + 141) = 0LL;
        }
        else
        {
          v26 = *(_QWORD *)(v22 + 128);
          v27 = *((_QWORD *)v47[0] + 11);
          v53 = -1;
          v55 = 0LL;
          v57 = 0LL;
          v58 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v54 = 0LL;
          v59 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v46[0].xRight, a3);
          v8 = 0;
          v29 = *(_QWORD *)&v46[0].xRight;
          if ( *(_QWORD *)&v46[0].xRight )
          {
            if ( (*((_DWORD *)v47[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v46[0].xRight + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v47, v28, &rclBounds);
            }
            bSyncBrushObj((struct BRUSH *)v29);
            EBRUSHOBJ::vInitBrush(&pbo, v47[0], v29, v27, v26, v22, 1);
            v30 = v47[0];
            v56 = (char *)v47[0] + 176;
            if ( (*(_DWORD *)(v29 + 40) & 0x100) != 0 )
            {
              *((_DWORD *)v47[0] + 9) |= 0x10u;
              *((_QWORD *)v30 + 141) = 0LL;
            }
            else
            {
              v31 = *((_QWORD *)v47[0] + 122);
              v32 = ((*(_BYTE *)(v31 + 212) - 1) & 0xF) + 1;
              if ( *(_BYTE *)(v31 + 213) == 1 && (v59 & 0x8000) != 0 )
                mix = v32 | 0xB00;
              else
                mix = v32 | (v32 << 8);
              ++*(_DWORD *)(v22 + 92);
              EngPaint((SURFOBJ *)(v22 + 24), &pco, &pbo, (POINTL *)v47[0] + 149, mix);
              v34 = v47[0];
              v8 = 1;
              *((_DWORD *)v47[0] + 9) |= 0x10u;
              *((_QWORD *)v34 + 141) = 0LL;
            }
            if ( *(_QWORD *)&v46[0].xRight )
            {
              XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v46[0].xRight);
              DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)&v46[0].xRight);
              *(_QWORD *)&v46[0].xRight = 0LL;
            }
          }
          else
          {
            v37 = v47[0];
            *((_DWORD *)v47[0] + 9) |= 0x10u;
            *((_QWORD *)v37 + 141) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v46[0].xRight);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
LABEL_49:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v65);
        goto LABEL_50;
      }
      v21 = v47[0];
    }
    *((_DWORD *)v21 + 9) |= 0x10u;
    *((_QWORD *)v21 + 141) = 0LL;
    if ( !*((_QWORD *)v47[0] + 62) || (v8 = 0, DC::bInFullScreen(v47[0])) )
      v8 = 1;
    goto LABEL_49;
  }
LABEL_53:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v51);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
  return v8;
}
