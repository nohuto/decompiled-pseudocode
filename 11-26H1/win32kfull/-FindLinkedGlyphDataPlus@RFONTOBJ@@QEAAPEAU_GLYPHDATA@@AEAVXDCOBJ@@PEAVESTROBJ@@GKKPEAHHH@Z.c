/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1400F9B8C (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x14018301C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  int v9; // esi
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // ecx
  unsigned int i; // r13d
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r12
  struct RFONTOBJ *v24; // rdx
  struct RFONTOBJ *v25; // r8
  __int64 v26; // r12
  struct GPRUN *v27; // r15
  __int64 v28; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *v30; // rbx
  RFONTOBJ *v31; // rcx
  __int64 v33; // rbx
  struct _GLYPHDATA **v34; // rax
  struct _GLYPHDATA *v35; // rax
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  struct _GLYPHDATA *v37; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v39; // rax
  int v40; // r13d
  struct _GLYPHDATA *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-10h]
  struct _GLYPHDATA **v43; // [rsp+28h] [rbp-8h]
  __int64 v44; // [rsp+78h] [rbp+48h] BYREF
  __int64 v45; // [rsp+80h] [rbp+50h] BYREF

  v9 = a4;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 26);
  else
    v12 = 0LL;
  v42 = v12;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) && a8 && (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, a4) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
    {
      if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
        ESTROBJ::bPartitionInit(a3, a6, 0, 0);
      v44 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      if ( v44
        && (!a9
          ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v44, v9, a3))
          : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus(
                             (RFONTOBJ *)&v44,
                             (struct RFONTOBJ *)(unsigned __int16)v9,
                             a3)),
            (v30 = EudcMetrics) != 0LL) )
      {
        if ( a3 )
        {
          v39 = a5;
          ++*((_DWORD *)a3 + 62);
          *(_DWORD *)(v12 + 4 * v39) = 1;
          goto LABEL_47;
        }
      }
      else
      {
        v30 = RFONTOBJ::pgdDefault(this);
      }
      goto LABEL_48;
    }
    return RFONTOBJ::pgdDefault(this);
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 848LL);
  LODWORD(v44) = v14;
  if ( v14 )
  {
    v15 = (unsigned int)(v14 - 1);
    v16 = v15;
    v17 = *(_QWORD *)(*(_QWORD *)(v13 + 752) + 8 * v15);
    v45 = v17;
    if ( v17 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(v17 + 128) + 52LL);
      if ( (v18 & 8) != 0 && (v18 & 2) == 0 )
      {
        v40 = v15;
        LODWORD(v44) = v15;
        v41 = a9
            ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v45, (struct RFONTOBJ *)(unsigned __int16)v9, a3)
            : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v45, v9, a3);
        v30 = v41;
        if ( v41 )
        {
          if ( v41->fxD )
          {
            if ( a3 )
            {
              *(_DWORD *)(v12 + 4LL * a5) = v40 + 4;
              ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4 * v16);
              *a7 = 0;
            }
            v45 = 0LL;
LABEL_26:
            v31 = (RFONTOBJ *)&v45;
            goto LABEL_27;
          }
        }
      }
    }
    v45 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v45 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v45, (struct RFONTOBJ *)(unsigned __int16)v9, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v45, v9, a3);
    v30 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( a3 )
      {
        *(_DWORD *)(v12 + 4LL * a5) = 2;
        ++*((_DWORD *)a3 + 63);
        goto LABEL_24;
      }
LABEL_25:
      v45 = 0LL;
      goto LABEL_26;
    }
    v45 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  }
  for ( i = 0; ; ++i )
  {
    v20 = *(_QWORD **)this;
    if ( i >= (unsigned int)v44 )
      break;
    v21 = *(_QWORD *)(v20[94] + 8LL * i);
    v45 = v21;
    if ( !v21 )
      goto LABEL_29;
    v22 = *(_QWORD *)(v21 + 128);
    v23 = v20[16];
    if ( !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v20, a2, a3) + 96) + 14164LL)
      && (unsigned __int16)(v9 + 0x2000) <= 0x18FFu
      && (*(_DWORD *)(v22 + 52) & 0x4000) != 0
      && (*(_DWORD *)(v23 + 52) & 0x8000) != 0 )
    {
      goto LABEL_29;
    }
    if ( !a9 )
    {
      v37 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v45, v9, v25);
LABEL_58:
      v30 = v37;
      goto LABEL_20;
    }
    if ( *(_QWORD *)(v21 + 480) || (unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v45, v24) )
    {
      v26 = *(_QWORD *)(v21 + 480);
      if ( !*(_DWORD *)v26 )
      {
        v37 = RFONTOBJ::pgdDefault((RFONTOBJ *)&v45);
        goto LABEL_58;
      }
      v27 = (struct GPRUN *)(v26 + 16);
      v28 = (unsigned int)(v9 - *(_DWORD *)(v26 + 16));
      if ( (unsigned int)v28 < *(_DWORD *)(v26 + 20) )
      {
        _mm_lfence();
        v30 = *(struct _GLYPHDATA **)(*(_QWORD *)(v26 + 24) + 8 * v28);
      }
      else
      {
        Run = RFONTOBJ::gprunFindRun((RFONTOBJ *)&v45, v9);
        v27 = Run;
        v28 = (unsigned int)(v9 - *(_DWORD *)Run);
        if ( (unsigned int)v28 >= *((_DWORD *)Run + 1) )
          goto LABEL_19;
        _mm_lfence();
        v30 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v28);
      }
      if ( v30 )
        goto LABEL_20;
      v33 = (unsigned int)v28;
      v34 = (struct _GLYPHDATA **)(*((_QWORD *)v27 + 1) + 8 * v28);
      v43 = v34;
      if ( v26 )
        goto LABEL_33;
      if ( (unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v45, v24) )
      {
        v34 = v43;
LABEL_33:
        if ( (unsigned int)xInsertMetricsPlusRFONTOBJ((RFONTOBJ *)&v45, v34, v9) )
        {
          v30 = *(struct _GLYPHDATA **)(*((_QWORD *)v27 + 1) + 8 * v33);
          goto LABEL_20;
        }
      }
    }
LABEL_19:
    v30 = 0LL;
LABEL_20:
    if ( v30 && v30->fxD )
    {
      if ( !a3 )
        goto LABEL_25;
      *(_DWORD *)(v42 + 4LL * a5) = i + 4;
      ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4LL * i);
LABEL_24:
      *a7 = 0;
      goto LABEL_25;
    }
LABEL_29:
    v45 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  }
  if ( !v20[93] )
    return 0LL;
  v44 = v20[93];
  if ( a9 )
    v35 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v44, (struct RFONTOBJ *)(unsigned __int16)v9, a3);
  else
    v35 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v44, v9, a3);
  v30 = v35;
  if ( !v35 || !v35->fxD )
  {
    v44 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_48;
  *(_DWORD *)(v42 + 4LL * a5) = 3;
  ++*((_DWORD *)a3 + 64);
LABEL_47:
  *a7 = 0;
LABEL_48:
  v44 = 0LL;
  v31 = (RFONTOBJ *)&v44;
LABEL_27:
  RFONTOBJ::~RFONTOBJ(v31);
  return v30;
}
