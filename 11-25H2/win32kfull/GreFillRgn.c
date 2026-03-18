/*
 * XREFs of GreFillRgn @ 0x1400E2308
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E1FB8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtGdiFillRgn @ 0x1400E22F0 (NtGdiFillRgn.c)
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
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14009F4AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1400E4120 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400E4270 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  struct BRUSH *v6; // r15
  int v7; // ebx
  int v8; // r12d
  DC *v9; // rcx
  DC *v10; // rax
  __int64 v11; // rcx
  DC *v12; // rcx
  __int64 v13; // r13
  DC *v14; // rdi
  __int64 v15; // rcx
  struct REGION *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct ECLIPOBJ *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  MIX mix; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v26; // ebx
  int *v27; // r14
  double v28; // xmm0_8
  int v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  HBRUSH v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  bool v34; // [rsp+70h] [rbp-90h]
  _QWORD v35[7]; // [rsp+78h] [rbp-88h] BYREF
  DC *v36[14]; // [rsp+B0h] [rbp-50h] BYREF
  struct BRUSH *v37[6]; // [rsp+120h] [rbp+20h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v39; // [rsp+16Ch] [rbp+6Ch]
  __int64 v40; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  char *v42; // [rsp+188h] [rbp+88h]
  __int64 v43; // [rsp+1A8h] [rbp+A8h]
  __int128 v44; // [rsp+1B0h] [rbp+B0h]
  int v45; // [rsp+1C8h] [rbp+C8h]
  _BYTE v46[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v47; // [rsp+1E8h] [rbp+E8h]
  _BYTE v48[144]; // [rsp+260h] [rbp+160h] BYREF
  int v49[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  CLIPOBJ pco; // [rsp+300h] [rbp+200h] BYREF

  v3 = 0;
  v32[0] = a3;
  v29 = 0;
  v5 = 0;
  v6 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v36, a1);
  v31 = 0LL;
  if ( !v36[0] || (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 )
    goto LABEL_40;
  v7 = *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 208LL);
  DC::QuickInitXform(v36[0], &v30, 2147484164LL);
  v33 = v30;
  v34 = v7 != 2;
  v8 = *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, a2, 0, 0);
  if ( !v35[0] )
  {
LABEL_38:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
    if ( (_DWORD)v6 )
    {
      v24 = UserReferenceDwmApiPort(v23);
      DwmSyncFlushAndWaitForBatch(v24);
    }
LABEL_40:
    v3 = v5;
LABEL_41:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    return v3;
  }
  if ( v8 == 2050 )
  {
LABEL_5:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v35) == 1 )
    {
      v5 = 1;
LABEL_36:
      if ( v8 != 2050 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v35);
        v35[0] = v31;
      }
      goto LABEL_38;
    }
    v9 = v36[0];
    *(_OWORD *)v49 = 0LL;
    *(_OWORD *)v49 = *(_OWORD *)(v35[0] + 52LL);
    if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)v49);
      v9 = v36[0];
    }
    if ( v49[0] != v49[2] && v49[1] != v49[3] )
    {
      v29 = 0;
      if ( v9 )
        v29 = bSpDwmValidateSurface((struct XDCOBJ *)v36, v49[0], v49[1], v49[2] - v49[0], v49[3] - v49[1]);
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v48);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v48, (struct XDCOBJ *)v36, 0) )
    {
LABEL_35:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v48);
      LODWORD(v6) = v29;
      goto LABEL_36;
    }
    v10 = v36[0];
    if ( !*((_QWORD *)v36[0] + 62) )
    {
      v5 = 1;
      goto LABEL_35;
    }
    v11 = v35[0];
    if ( !v35[0] )
      *((_DWORD *)v36[0] + 9) |= 0x10u;
    *((_QWORD *)v10 + 141) = v11;
    v12 = v36[0];
    v13 = *((_QWORD *)v36[0] + 62);
    if ( (v48[24] & 1) != 0 )
    {
      if ( DC::bTightenRao(v36[0]) )
      {
        v14 = v36[0];
        v15 = *((_DWORD *)v36[0] + 10) & 1;
        v49[0] += *((_DWORD *)v36[0] + 2 * v15 + 254);
        v49[2] += *((_DWORD *)v36[0] + 2 * v15 + 254);
        v49[1] += *((_DWORD *)v36[0] + 2 * v15 + 255);
        v49[3] += *((_DWORD *)v36[0] + 2 * v15 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v36[0]) )
        {
          v26 = 0;
          v27 = v49;
          do
          {
            *(_QWORD *)&v28 = COERCE_UNSIGNED_INT((float)*v27);
            *(float *)&v28 = *(float *)&v28 * *((float *)v14 + 131);
            if ( !(unsigned int)bFToL(v28, &v49[v26], 6u) )
              break;
            ++v26;
            ++v27;
          }
          while ( v26 < 4 );
        }
        XDCOBJ::prgnEffRao(v36);
        XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&pco);
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v16, (const struct ERECTL *)v49, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v17 = *(_QWORD *)(v13 + 128);
          v18 = *((_QWORD *)v36[0] + 11);
          v39 = -1;
          v43 = 0LL;
          v44 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v40 = 0LL;
          v41 = 0LL;
          v45 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v37, v32[0]);
          v5 = 0;
          if ( v37[0] )
            v6 = v37[0];
          if ( v6 )
          {
            if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              *(RECTL *)v32 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v36, v19, (__m128i *)v32);
            }
            bSyncBrushObj(v6);
            EBRUSHOBJ::vInitBrush(&pbo, v36[0], v6, v18, v17, v13, 1);
            v42 = (char *)v36[0] + 176;
            if ( (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              v20 = *((_QWORD *)v36[0] + 122);
              v21 = ((*(_BYTE *)(v20 + 212) - 1) & 0xF) + 1;
              if ( *(_BYTE *)(v20 + 213) == 1 && (v45 & 0x8000) != 0 )
                mix = v21 | 0xB00;
              else
                mix = v21 | (v21 << 8);
              ++*(_DWORD *)(v13 + 92);
              EngPaint((SURFOBJ *)(v13 + 24), &pco, &pbo, (POINTL *)v36[0] + 149, mix);
              v5 = 1;
            }
            if ( v37[0] )
            {
              XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v37);
              DEC_SHARE_REF_CNT_LAZY0(v37[0]);
              v37[0] = 0LL;
            }
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v37);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          v12 = v36[0];
          goto LABEL_34;
        }
        v12 = v36[0];
LABEL_54:
        v5 = 1;
LABEL_34:
        *((_DWORD *)v12 + 9) |= 0x10u;
        *((_QWORD *)v12 + 141) = 0LL;
        goto LABEL_35;
      }
      v12 = v36[0];
    }
    if ( *((_QWORD *)v12 + 62) && !DC::bInFullScreen(v12) )
      goto LABEL_34;
    goto LABEL_54;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v46);
  if ( !v47 )
  {
LABEL_49:
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v46);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
    goto LABEL_41;
  }
  if ( v33 && RGNOBJ::bCreate((RGNOBJ *)v35, (struct EPATHOBJ *)v46, (const struct EXFORMOBJR *)&v33) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)v46, 1u, 0LL);
    if ( v30 )
    {
      v31 = v35[0];
      v35[0] = v30;
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v46);
      goto LABEL_5;
    }
    goto LABEL_49;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v46);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
  return 0LL;
}
