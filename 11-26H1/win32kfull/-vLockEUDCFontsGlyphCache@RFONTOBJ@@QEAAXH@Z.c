/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1400C3EF0
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GrepAcquireLockValidate@$04@@YAXXZ @ 0x1400C5C60 (--$GrepAcquireLockValidate@$04@@YAXXZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401E2500 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  HSEMAPHORE v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 i; // rbx
  __int64 v20; // rcx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(v4 + 848);
  if ( v5 <= 0x20 )
  {
    v21[0] = *(_QWORD *)(v4 + 744);
    v21[1] = *(_QWORD *)(v4 + 736);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 864);
      v9 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v8 < v9 )
        break;
      v15 = v8 - v9;
      if ( (unsigned int)v15 < 2 )
      {
        _mm_lfence();
        v10 = v21[v15];
LABEL_6:
        if ( v10 )
        {
          if ( a2 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 120) < *(_QWORD *)(v10 + 120) )
                RFONTOBJ::vLockSystemTTGlyphCache(this);
            }
          }
          v12 = *(HSEMAPHORE *)(v10 + 504);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONT_Cache", v12, 0LL);
          GreAcquireSemaphoreInternal(v12);
          GrepAcquireLockValidate<5>(v14, v13);
          v22 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        }
      }
      ++v6;
      if ( !--v7 )
      {
        if ( a2 )
          RFONTOBJ::vLockSystemTTGlyphCache(this);
        return;
      }
    }
    _mm_lfence();
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * *(unsigned __int8 *)(v6 + *(_QWORD *)this + 864));
    goto LABEL_6;
  }
  if ( a2 )
    RFONTOBJ::vLockSystemTTGlyphCache(this);
  v16 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v16 )
  {
    GreAcquireSemaphore<5,RFONT *>(v16);
    v22 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  v17 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v17 )
  {
    GreAcquireSemaphore<5,RFONT *>(v17);
    v22 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  v18 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 752) + 8 * i);
    if ( v20 )
    {
      GreAcquireSemaphore<5,RFONT *>(v20);
      v22 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
    }
    v18 = *(_QWORD *)this;
  }
}
