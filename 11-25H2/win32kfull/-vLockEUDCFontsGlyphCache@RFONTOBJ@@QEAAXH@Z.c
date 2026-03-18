/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x140180754
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401808EC (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 i; // rsi
  __int64 v17; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(v4 + 848);
  if ( v5 <= 0x20 )
  {
    v18[0] = *(_QWORD *)(v4 + 744);
    v18[1] = *(_QWORD *)(v4 + 736);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 864);
      v9 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v8 < v9 )
        break;
      v12 = v8 - v9;
      if ( (unsigned int)v12 < 2 )
      {
        _mm_lfence();
        v10 = v18[v12];
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
          GreAcquireSemaphore<5,RFONT *>(v10);
          v19 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
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
  v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v13 )
  {
    GreAcquireSemaphore<5,RFONT *>(v13);
    v19 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  }
  v14 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v14 )
  {
    GreAcquireSemaphore<5,RFONT *>(v14);
    v19 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  }
  v15 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 752) + 8 * i);
    if ( v17 )
    {
      GreAcquireSemaphore<5,RFONT *>(v17);
      v19 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    }
    v15 = *(_QWORD *)this;
  }
}
