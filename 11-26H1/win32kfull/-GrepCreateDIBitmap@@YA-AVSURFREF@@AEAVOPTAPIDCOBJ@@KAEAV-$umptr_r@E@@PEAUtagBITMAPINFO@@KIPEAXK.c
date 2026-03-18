/*
 * XREFs of ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4
 * Callers:
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreCreateReferencedDIBitmap @ 0x1400181E0 (GreCreateReferencedDIBitmap.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14007DD60 (NtGdiCreateDIBitmapInternal.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x140330354 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x140113750 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1401C0280 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1401D01A4 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x140223E70 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x140336B94 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GrepCreateDIBitmap(
        __int64 a1,
        OPTAPIDCOBJ *a2,
        int a3,
        _QWORD *a4,
        unsigned int *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  unsigned int v13; // r15d
  __int64 v16; // r10
  unsigned int v17; // r9d
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // r13d
  int v21; // ecx
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  unsigned int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // r14
  DC *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  char *v40; // rax
  char *v41; // rsi
  _BYTE *v42; // rcx
  unsigned int v43; // edx
  char *v44; // rdx
  char v45; // al
  unsigned __int64 v46; // rsi
  ULONG v47; // ecx
  unsigned int CachedDpiScaleValue; // eax
  unsigned __int64 v49; // r8
  void *v50; // rax
  void *v51; // r14
  Gre::Base *v52; // rcx
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  __int64 v54; // r8
  int v55; // esi
  __int64 v56; // rbx
  __int64 v57; // rcx
  float v58; // xmm0_4
  void *v59; // rax
  void *v60; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  char v62; // [rsp+68h] [rbp-A0h]
  int v63; // [rsp+6Ch] [rbp-9Ch]
  __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  int v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+84h] [rbp-84h]
  unsigned int v68; // [rsp+88h] [rbp-80h]
  _BYTE v69[12]; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v70; // [rsp+98h] [rbp-70h]
  int v71; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v72; // [rsp+A0h] [rbp-68h]
  int v73; // [rsp+A4h] [rbp-64h]
  unsigned int v74; // [rsp+A8h] [rbp-60h]
  void *Src; // [rsp+B0h] [rbp-58h]
  DC *v76; // [rsp+B8h] [rbp-50h] BYREF
  int v77; // [rsp+C0h] [rbp-48h]
  __int64 v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h]
  char v80[32]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v81[96]; // [rsp+F8h] [rbp-10h] BYREF
  int v82; // [rsp+178h] [rbp+70h] BYREF
  _QWORD *v83; // [rsp+180h] [rbp+78h]

  v83 = a4;
  v82 = a3;
  v13 = a6;
  memset(v69, 0, sizeof(v69));
  v71 = 0;
  if ( a6 != 1 )
  {
    if ( a6 == 3 )
    {
      if ( (a11 & 1) == 0 )
        goto LABEL_97;
    }
    else if ( a6 )
    {
      goto LABEL_97;
    }
  }
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_97;
  if ( !a5 )
    goto LABEL_97;
  if ( a7 < 0x28 )
    goto LABEL_97;
  v16 = *a5;
  v73 = v16;
  if ( (unsigned int)v16 < 0x28 )
    goto LABEL_97;
  if ( a7 < (unsigned int)v16 )
    goto LABEL_97;
  v17 = a5[4];
  v74 = v17;
  if ( v17 == 4 )
    goto LABEL_97;
  if ( v17 == 5 )
    goto LABEL_97;
  v18 = a5[1];
  if ( v18 <= 0 )
    goto LABEL_97;
  v19 = a5[2];
  if ( !v19 )
    goto LABEL_97;
  v70 = 0;
  v67 = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    v70 = 1;
  }
  v20 = 0;
  v72 = a5[8];
  Src = (char *)a5 + v16;
  v68 = v19;
  v21 = *((unsigned __int16 *)a5 + 7);
  v66 = v21;
  if ( v17 )
  {
    if ( v17 == 3 )
    {
      if ( a7 < 0x34 || a6 )
        goto LABEL_97;
      v82 = a5[11];
      v22 = 0;
      Src = a5 + 10;
      v23 = 2;
      v24 = 512;
      v20 = a5[10];
      a6 = a5[12];
      if ( (_WORD)v21 == 16 )
      {
        v66 = 4;
      }
      else
      {
        if ( v21 != 32 )
          goto LABEL_97;
        v66 = 6;
      }
      v25 = v82;
      v26 = a6;
      goto LABEL_22;
    }
    if ( v17 != 10 || !OPTAPIDCOBJ::bValid(a2) )
      goto LABEL_97;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v76, a2);
    if ( !(unsigned int)DC::bIsCMYKColor(v76) )
      goto LABEL_131;
    switch ( v66 )
    {
      case 1:
        v66 = 1;
        v22 = 2;
        break;
      case 4:
        v66 = 2;
        v22 = 16;
        break;
      case 8:
        v66 = 3;
        v22 = 256;
        break;
      case 32:
        v22 = 0;
        v66 = 6;
        v23 = 16;
        v24 = 512;
LABEL_121:
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
        goto LABEL_20;
      default:
LABEL_131:
        EngSetLastError(0x57u);
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
        *(_QWORD *)(a1 + 32) = 0LL;
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
        return a1;
    }
    v23 = 1;
    v24 = 1024;
    goto LABEL_121;
  }
  switch ( v21 )
  {
    case 1:
      v66 = 1;
      v22 = 2;
LABEL_19:
      v23 = 1;
      v24 = 1024;
LABEL_20:
      v25 = 0;
LABEL_21:
      v26 = 0;
      goto LABEL_22;
    case 4:
      v66 = 2;
      v22 = 16;
      goto LABEL_19;
    case 8:
      v66 = 3;
      v22 = 256;
      goto LABEL_19;
  }
  v37 = 0;
  v22 = 0;
  v24 = 512;
  if ( a6 != 1 )
    v37 = a6;
  v13 = v37;
  if ( v21 != 16 )
  {
    if ( (_WORD)v21 == 24 )
    {
      v66 = 5;
      goto LABEL_51;
    }
    if ( v21 == 32 )
    {
      v66 = 6;
LABEL_51:
      v23 = 8;
      v25 = 0;
      goto LABEL_21;
    }
LABEL_97:
    EngSetLastError(0x57u);
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    *(_QWORD *)(a1 + 32) = 0LL;
    return a1;
  }
  v66 = 4;
  v25 = 992;
  v26 = 31;
  v20 = 31744;
  v23 = 2;
LABEL_22:
  v65 = 0;
  v64 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v64, v23, v22, 0LL, v20, v25, v26, v24, 1) )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    *(_QWORD *)(a1 + 32) = 0LL;
    goto LABEL_41;
  }
  v27 = v83;
  v60 = 0LL;
  v28 = v83[1] - v83[2];
  *(_QWORD *)&v69[4] = *(_QWORD *)v64;
  v61 = 0LL;
  v62 = 0;
  v63 = 0;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v64 + 24) |= 0x8000u;
    v29 = *v27;
    v30 = v27[2];
    v60 = a8;
    if ( !v29 )
      goto LABEL_39;
    *v27 = 0LL;
    v27[1] = 0LL;
    v27[2] = 0LL;
    *((_WORD *)v27 + 12) = 0;
  }
  else
  {
    v29 = 0LL;
    v30 = 0LL;
    if ( *((_QWORD *)a2 + 12) && OPTAPIDCOBJ::bValid(a2) )
    {
      v78 = *((_QWORD *)a2 + 2);
      v79 = 0LL;
      v76 = 0LL;
      v77 = 0;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v80);
      UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v81);
      v31 = *(DC **)a2;
      v81[32] = 0;
      v76 = v31;
      if ( (*(_DWORD *)(*((_QWORD *)v31 + 6) + 40LL) & 0x8000) != 0 )
        v70 |= 0x40000u;
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
    }
  }
  v82 = a11 & 8;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v61,
          (struct _DEVBITMAPINFO *)&v66,
          (void *)(v29 + v30),
          v60,
          a9,
          a10,
          a12,
          0,
          1,
          v82 != 0) )
    goto LABEL_39;
  v32 = v61;
  if ( !*(_WORD *)(v61 + 100) && *(_QWORD *)(v61 + 192) && *(_DWORD *)(v61 + 64) != v28 )
    goto LABEL_39;
  if ( *v83 )
  {
    v49 = *(unsigned int *)(v61 + 64);
    if ( v49 > v28 )
      goto LABEL_80;
    umptr_r<unsigned char>::read<unsigned char>(v83, *(_QWORD *)(v61 + 72), v49, 0LL);
    v32 = v61;
  }
  if ( v72 && v72 < v22 )
  {
    v22 = v72;
  }
  else if ( !v22 )
  {
LABEL_35:
    if ( a13 )
    {
      if ( v82 )
        *a13 = 0LL;
      else
        *a13 = *(_QWORD *)(v32 + 72);
    }
    *(_DWORD *)(v32 + 112) |= 0x4000000u;
    v62 |= 1u;
    v65 = 1;
    if ( (a11 & 0x10) != 0 && OPTAPIDCOBJ::bValid(a2) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v76, a2);
      CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v76);
      ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v82, CachedDpiScaleValue);
      if ( v82 > 1 )
      {
        LODWORD(v60) = v67 / v82;
        v57 = v61;
        v58 = (float)v82;
        HIDWORD(v60) = v68 / v82;
        v59 = v60;
        *(_DWORD *)(v61 + 116) |= 0x800u;
        *(_QWORD *)(v57 + 668) = v59;
        *(float *)(v57 + 660) = v58;
        *(float *)(v57 + 664) = v58;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
    }
    v33 = v61;
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    PushThreadGuardedObject(
      a1,
      a1,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    if ( v33 )
    {
      *(_QWORD *)(a1 + 32) = v33;
      v35 = Gre::Base::Globals(v34);
      INC_SHARE_REF_CNT(v35, *(_QWORD *)(a1 + 32));
    }
    goto LABEL_40;
  }
  v38 = a7 - v73;
  if ( !v13 )
  {
    if ( 4 * (unsigned __int64)v22 <= 0xFFFFFFFF )
    {
      v39 = 4 * v22;
      if ( (unsigned int)v38 >= (unsigned int)v39 )
      {
        v40 = (char *)AllocFreeTmpBuffer(v39);
        v41 = v40;
        if ( v40 )
        {
          memmove(v40, Src, 4LL * v22);
          v42 = *(_BYTE **)(v64 + 112);
          v43 = *(_DWORD *)(v64 + 28);
          if ( v74 - 10 <= 2 )
          {
            if ( v22 > v43 )
              v22 = *(_DWORD *)(v64 + 28);
            memmove(v42, v41, 4LL * v22);
          }
          else if ( v22 <= v43 || (v22 = *(_DWORD *)(v64 + 28), v43) )
          {
            v44 = v41 + 1;
            do
            {
              v42[3] = 0;
              v42[2] = *(v44 - 1);
              *v42 = v44[1];
              v42 += 4;
              v45 = *v44;
              v44 += 4;
              *(v42 - 3) = v45;
              --v22;
            }
            while ( v22 );
          }
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v64);
          FreeTmpBuffer(v41);
          if ( (a11 & 4) != 0 && v66 == 3 )
          {
            v55 = 0;
            if ( !OPTAPIDCOBJ::bValid(a2) )
              goto LABEL_39;
            APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v76, a2);
            v56 = *((_QWORD *)v76 + 6);
            SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v60);
            if ( *(_DWORD *)(v56 + 2092) == 3
              && (*(_DWORD *)(v56 + 2156) & 0x100) != 0
              && (*(_DWORD *)(v56 + 40) & 1) != 0 )
            {
              v55 = 1;
              XEPALOBJ::apalColorSet((XEPALOBJ *)&v64, *(struct PALETTE **)(v56 + 1792));
            }
            GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v60);
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
            if ( !v55 )
              goto LABEL_39;
          }
          goto LABEL_77;
        }
        v47 = 14;
        goto LABEL_81;
      }
    }
LABEL_80:
    v47 = 87;
LABEL_81:
    EngSetLastError(v47);
    goto LABEL_39;
  }
  if ( v13 != 1 )
    goto LABEL_35;
  v46 = 2LL * v22;
  if ( v46 > 0xFFFFFFFF || v38 < v46 )
    goto LABEL_80;
  if ( OPTAPIDCOBJ::bValid(a2) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v76, a2);
    v50 = (void *)AllocFreeTmpBuffer(2 * v22);
    v51 = v50;
    if ( !v50 )
    {
      EngSetLastError(0xEu);
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
      *(_QWORD *)(a1 + 32) = 0LL;
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
      goto LABEL_40;
    }
    memmove(v50, Src, 2LL * v22);
    v53 = Gre::Base::Globals(v52);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v60, v53);
    v54 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)&v76) + 16);
    if ( !v54 )
      v54 = *(_QWORD *)(*((_QWORD *)v76 + 6) + 1792LL);
    XEPALOBJ::vGetEntriesFrom(&v64, *((_QWORD *)v76 + 11), v54, v51, v22);
    FreeTmpBuffer(v51);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v60);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v76);
LABEL_77:
    v32 = v61;
    goto LABEL_35;
  }
LABEL_39:
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_40:
  SURFMEM::~SURFMEM((SURFMEM *)&v61);
LABEL_41:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v64);
  return a1;
}
