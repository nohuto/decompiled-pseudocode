/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AC520 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400ACAC0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AD0B0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AE6AC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400A8E44 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AB6B8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AD7F0 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x140121430 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401808EC (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x140189A08 (--0-$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14019E650 (--$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x14019EE18 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401E4844 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        struct ESTROBJ *a3,
        char *a4,
        char *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  char *v12; // rbx
  const unsigned __int16 *v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // ebx
  __int64 v18; // r8
  HSEMAPHORE v19; // rbx
  struct _GRETHREAD *v20; // rax
  struct _GRETHREAD *v21; // r15
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // r8
  __int64 v28; // r12
  unsigned int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // r15
  __int64 v32; // rcx
  struct _GRETHREAD *v33; // rax
  bool v34; // zf
  _DWORD *v35; // rbx
  int v36; // ecx
  unsigned __int16 v37; // r9
  int v38; // r15d
  signed __int64 v39; // rbx
  int *v40; // r12
  struct UDCOBJ *v41; // r14
  __int64 v42; // rbx
  struct _GLYPHDATA *result; // rax
  struct RFONTOBJ *v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r12
  size_t v47; // r8
  char *v48; // rcx
  _DWORD *v49; // r15
  int v50; // eax
  struct RFONTOBJ *v51; // r8
  unsigned __int16 v52; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v54; // rbx
  __int64 v55; // rax
  unsigned __int16 v56; // dx
  HSEMAPHORE v57; // rbx
  struct _GRETHREAD *v58; // rax
  unsigned __int64 v59; // rcx
  int v60; // r8d
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 i; // r15
  __int64 v66; // rcx
  __int64 v67; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v68[3]; // [rsp+58h] [rbp-18h]
  struct UDCOBJ *v69; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v70; // [rsp+C8h] [rbp+58h] BYREF

  v69 = a2;
  v12 = a4;
  v13 = (const unsigned __int16 *)&a5[2 * a6];
  v14 = *(_QWORD *)(W32GetSessionState() + 96);
  v15 = *(_QWORD *)a2;
  v16 = v14 + 4872;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 308LL)
    || !*(_DWORD *)(v16 + 8640) && !*(_QWORD *)(v16 + 8656) && !*(_QWORD *)(v16 + 8664) && !*(_DWORD *)(v15 + 304) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  if ( a4 >= (char *)v13 )
  {
LABEL_7:
    if ( v12 == (char *)v13 )
      return RFONTOBJ::pgdDefault(this);
  }
  else
  {
    while ( *(_WORD *)v12 >= 0x80u )
    {
      if ( *(_WORD *)v12 <= 0x9Fu )
      {
        v12 += 2;
        if ( v12 < (char *)v13 )
          continue;
      }
      goto LABEL_7;
    }
  }
  if ( !*(_DWORD *)(v15 + 304) && *(_DWORD *)(*(_QWORD *)this + 716LL) && !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
    return RFONTOBJ::pgdDefault(this);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
LABEL_14:
    v19 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
    GreAcquireSemaphoreInternal(v19);
    v20 = GreGetCurrentThreadCrossSessionCheck();
    v21 = v20;
    if ( v20 )
    {
      v22 = *(_QWORD *)v20;
      if ( (*(_QWORD *)v20 & 0xFFFFFFFFFFFF8000uLL) != 0 && (v22 & 0x8000) == 0 )
      {
        v59 = 0LL;
        v60 = 37;
        do
        {
          v61 = v59;
          if ( !_bittest64(&v22, v59) )
            v61 = v60;
          ++v59;
          v60 = v61;
        }
        while ( v59 < 0x40 );
        if ( v61 > 15 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v22, (unsigned int)v61);
      }
      v23 = *((_BYTE *)v21 + 23);
      *((_BYTE *)v21 + 23) = v23 + 1;
      if ( !v23 )
        *(_QWORD *)v21 |= 0x8000uLL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
    {
      GreAcquirePushLockShared2<16,0>(v16);
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8636));
      GreReleasePushLockShared2<16,0>(v16);
      RFONTOBJ::vInitEUDC(this, a2);
      v24 = *(_QWORD *)this;
      v25 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v25 > 0x20 )
      {
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        v62 = *(_QWORD *)(*(_QWORD *)this + 736LL);
        if ( v62 )
        {
          GreAcquireSemaphore<5,RFONT *>(v62);
          v70 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v70);
        }
        v63 = *(_QWORD *)(*(_QWORD *)this + 744LL);
        if ( v63 )
        {
          GreAcquireSemaphore<5,RFONT *>(v63);
          v70 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v70);
        }
        v64 = *(_QWORD *)this;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
        {
          v66 = *(_QWORD *)(*(_QWORD *)(v64 + 752) + 8 * i);
          if ( v66 )
          {
            GreAcquireSemaphore<5,RFONT *>(v66);
            v70 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v70);
          }
          v64 = *(_QWORD *)this;
        }
      }
      else
      {
        v68[0] = *(_QWORD *)(v24 + 744);
        v68[1] = *(_QWORD *)(v24 + 736);
        v26 = v25 + 2;
        if ( v26 )
        {
          v27 = v26;
          v28 = 0LL;
          v70 = v26;
          while ( 1 )
          {
            v29 = *(unsigned __int8 *)(v28 + *(_QWORD *)this + 864);
            v30 = *(_DWORD *)(*(_QWORD *)this + 848LL);
            if ( v29 < v30 )
              break;
            v45 = v29 - v30;
            if ( (unsigned int)v45 < 2 )
            {
              _mm_lfence();
              v31 = v68[v45];
LABEL_24:
              if ( v31 )
              {
                v32 = *(_QWORD *)(*(_QWORD *)this + 728LL);
                if ( v32 && *(_QWORD *)(v32 + 120) < *(_QWORD *)(v31 + 120) )
                  RFONTOBJ::vLockSystemTTGlyphCache(this);
                GreAcquireSemaphore<5,RFONT *>(v31);
                v67 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v67);
                v27 = v70;
              }
            }
            ++v28;
            v70 = --v27;
            if ( !v27 )
              goto LABEL_28;
          }
          _mm_lfence();
          v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                          + 8LL * *(unsigned __int8 *)(v28 + *(_QWORD *)this + 864));
          goto LABEL_24;
        }
LABEL_28:
        RFONTOBJ::vLockSystemTTGlyphCache(this);
      }
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 1u;
    }
    if ( v19 )
    {
      EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v19);
      v33 = GreGetCurrentThreadCrossSessionCheck();
      if ( v33 )
      {
        v34 = (*((_BYTE *)v33 + 23))-- == 1;
        if ( v34 )
          *(_QWORD *)v33 &= ~0x8000uLL;
        if ( !*(_QWORD *)v33 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v19);
    }
    if ( a3 )
    {
      v35 = (_DWORD *)((char *)a3 + 232);
      v36 = *((_DWORD *)a3 + 58);
      if ( (v36 & 0x400) == 0 )
      {
        v46 = *(unsigned int *)(*(_QWORD *)this + 848LL);
        *((_DWORD *)a3 + 1) &= 0xFFFFFFCF;
        if ( (v36 & 0x1000) != 0 )
        {
          v49 = (_DWORD *)((char *)a3 + 232);
        }
        else
        {
          v47 = 4LL * a6;
          v48 = (char *)(*((_QWORD *)a3 + 8) + 24LL * a6);
          *((_QWORD *)a3 + 26) = v48;
          *((_QWORD *)a3 + 25) = &v48[v47];
          memset_0(v48, 0, v47);
          *v35 |= 0x1000u;
          v49 = (_DWORD *)((char *)a3 + 232);
          *((_QWORD *)a3 + 33) = 0LL;
          *(_QWORD *)((char *)a3 + 252) = 0LL;
          *((_DWORD *)a3 + 62) = 0;
        }
        if ( (unsigned int)v46 >= 0xA )
        {
          v55 = PALLOCMEM((unsigned int)(4 * v46), 1718382187LL);
          *((_QWORD *)a3 + 33) = v55;
          if ( !v55 )
            return RFONTOBJ::pgdDefault(this);
          *v35 |= 0x800u;
        }
        else
        {
          *((_QWORD *)a3 + 33) = (char *)a3 + 272;
          memset_0((char *)a3 + 272, 0, 4 * v46);
        }
        *v49 |= 0x400u;
      }
    }
    v37 = *(_WORD *)a4;
    v38 = a8;
    v39 = a4 - a5;
    v40 = a7;
    v41 = v69;
    v42 = v39 >> 1;
    result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v69, a3, v37, v42, a6, a7, 0, a8);
    if ( result )
      return result;
    v56 = *(_WORD *)(v16 + 8600);
    result = v38 ? RFONTOBJ::pgdGetEudcMetricsPlus(this, v56, v44) : RFONTOBJ::pgdGetEudcMetrics(this, v56, v44);
    if ( result )
      return result;
    result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v41, a3, *(_WORD *)(v16 + 8600), v42, a6, v40, 1, v38);
    if ( result )
      return result;
    return RFONTOBJ::pgdDefault(this);
  }
  v17 = *(unsigned __int16 *)a4;
  v18 = *(_QWORD *)(W32GetSessionState() + 96);
  if ( !*(_DWORD *)(*(_QWORD *)this + 716LL)
    || (v50 = *(unsigned __int16 *)(v18 + 14088), (unsigned __int16)v17 < (unsigned __int16)v50)
    || (unsigned __int16)v17 > *(_WORD *)(v18 + 14090)
    || ((0x80000000 >> ((v17 - v50) % 32)) & *(_DWORD *)(*(_QWORD *)(v18 + 14096) + 4LL * ((v17 - v50) / 32))) == 0 )
  {
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *(_WORD *)a4) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
      {
        SEMOBJ<15>::SEMOBJ<15>(&a5, *(_QWORD *)this);
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        v57 = (HSEMAPHORE)a5;
        if ( a5 )
        {
          EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", a5);
          v58 = GreGetCurrentThreadCrossSessionCheck();
          if ( v58 )
          {
            v34 = (*((_BYTE *)v58 + 23))-- == 1;
            if ( v34 )
              *(_QWORD *)v58 &= ~0x8000uLL;
            if ( !*(_QWORD *)v58 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v57);
        }
      }
      return RFONTOBJ::pgdDefault(this);
    }
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    return RFONTOBJ::pgdDefault(this);
  SEMOBJ<15>::SEMOBJ<15>(&v69, *(_QWORD *)this);
  RFONTOBJ::vLockSystemTTGlyphCache(this);
  if ( v69 )
    GreReleaseSemaphoreCommon<15,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
  if ( a3 && !_bittest((const signed __int32 *)a3 + 58, 0xCu) )
    ESTROBJ::bPartitionInit(a3, a6, 0, 0);
  v69 = *(struct UDCOBJ **)(*(_QWORD *)this + 728LL);
  if ( v69
    && ((v52 = *(_WORD *)a4, !a8)
      ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v69, v52, v51))
      : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v69, v52, v51)),
        (v54 = EudcMetrics) != 0LL) )
  {
    if ( a3 )
    {
      ++*((_DWORD *)a3 + 62);
      *(_DWORD *)(*((_QWORD *)a3 + 26) + 4 * ((a4 - a5) >> 1)) = 1;
      *a7 = 0;
    }
  }
  else
  {
    v54 = RFONTOBJ::pgdDefault(this);
  }
  v69 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v69);
  return v54;
}
