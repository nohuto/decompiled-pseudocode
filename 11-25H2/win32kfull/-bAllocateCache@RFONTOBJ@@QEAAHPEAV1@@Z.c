/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94
 * Callers:
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400A8E44 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1400A9EF8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AA618 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AB6B8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AC520 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400ACAC0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AD0B0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AD7F0 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AE654 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AE6AC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400FE280 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  unsigned int v7; // ecx
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  char *v20; // r12
  __int64 v21; // rdx
  unsigned __int16 *v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  int v30; // ecx
  unsigned __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int16 *v37; // rbp
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  __int64 Size; // [rsp+30h] [rbp-58h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  unsigned int v46; // [rsp+98h] [rbp+10h]
  int v47; // [rsp+A0h] [rbp+18h]
  unsigned int v48; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v6) = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v47 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v47 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = (unsigned int *)(v4 + 8);
  }
  else
  {
    v34 = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v34 + 72);
    if ( !v3 )
      return 0LL;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(unsigned int **)(v34 + 72);
  }
  v46 = v7;
  v9 = *v8;
  v42 = v7;
  v10 = 16LL * v7;
  v41 = *v8;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v12 = 8 * v9;
  Size = 8 * v9;
  if ( (unsigned __int64)(8 * v9) > 0xFFFFFFFF )
    return 0LL;
  v13 = v10 + 16;
  if ( (unsigned int)v10 >= 0xFFFFFFF0 )
    return 0LL;
  v14 = v13 + v12;
  v48 = v13 + v12;
  if ( v13 + v12 < v13 )
    return 0LL;
  v15 = 4096;
  v16 = v14 + (*(_DWORD *)(v2 + 648) != 0 ? 768 : 2048);
  if ( v16 + 8 > 0xC00 )
  {
    v16 = (v14 + 4095) & 0xFFFFF000;
    if ( v16 - v14 < 0x80 )
      v16 += 4096;
  }
  v17 = PALLOCNOZ(v16, 1667326791LL);
  v18 = *(_QWORD *)this;
  v44 = v17;
  if ( !v17 )
  {
    *(_DWORD *)(v18 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v18 + 480) = v17;
  v19 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v20 = (char *)(v19 + v10 + 16);
  *(_QWORD *)(v19 + 8) = 0LL;
  *(_DWORD *)v19 = v46;
  memset_0(v20, 0, Size);
  if ( v46 )
  {
    v21 = v42;
    if ( v47 )
    {
      v22 = (unsigned __int16 *)(v4 + 18);
      v23 = v19 - v4;
      do
      {
        *(_QWORD *)((char *)v22 + v23 + 6) = v20;
        *(_DWORD *)((char *)v22 + v23 - 2) = *(v22 - 1);
        v24 = *v22;
        *(_DWORD *)((char *)v22 + v23 + 2) = v24;
        v22 += 8;
        v20 += 8 * v24;
        --v21;
      }
      while ( v21 );
    }
    else
    {
      v37 = (unsigned __int16 *)(v3 + 8);
      v38 = v19 + 20;
      do
      {
        *(_QWORD *)(v38 + 4) = v20;
        v39 = *v37;
        v37 += 2;
        *(_DWORD *)(v38 - 4) = v39;
        v40 = *(v37 - 1);
        *(_DWORD *)v38 = v40;
        v38 += 16LL;
        v20 += 8 * v40;
        --v21;
      }
      while ( v21 );
    }
  }
  v25 = (_QWORD *)(v44 + v48);
  *(_QWORD *)(v2 + 536) = v25;
  *v25 = 0LL;
  v26 = v44 + v16;
  *(_QWORD *)(v2 + 512) = *(_QWORD *)(v2 + 536) + 16LL;
  *(_QWORD *)(v2 + 528) = v26;
  *(_QWORD *)(v2 + 520) = v26;
  v27 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v27 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_26;
  if ( v27 == 2 )
  {
    *(_DWORD *)(v2 + 552) = v6;
    v15 = v6;
  }
  else
  {
    v28 = *(_QWORD *)(v2 + 632);
    v29 = 8 * v28;
    v6 = 16 * v28;
    if ( v6 <= 0xC00 )
    {
      *(_DWORD *)(v2 + 552) = 4096;
    }
    else
    {
      v15 = 0x2000;
      if ( v6 <= 0x2000 )
      {
        v15 = (v6 + 4095) & 0xFFFFF000;
      }
      else if ( v29 > 0x2000 )
      {
        v30 = 589824;
        v31 = (v29 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v32 = 589824;
        if ( v31 < 0x90000 )
        {
          v32 = v31;
          v30 = v31;
        }
        *(_DWORD *)(v2 + 552) = v32;
        LODWORD(v6) = v30;
        v15 = v32;
        goto LABEL_25;
      }
      *(_DWORD *)(v2 + 552) = v15;
      LODWORD(v6) = v15;
    }
  }
LABEL_25:
  *(_DWORD *)(v2 + 548) = v6;
  *(_DWORD *)(v2 + 556) = 589824 * ((unsigned int)(v41 + 1023) >> 10) / v15;
LABEL_26:
  v33 = **(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( v33 > 0xC8 )
  {
    v35 = v33 - 1;
    *(_DWORD *)(v2 + 604) = v35;
    if ( (v35 & 0xF000) != 0 )
    {
      v36 = (unsigned int)acBits[(v35 >> 12) & 0xF] + 12;
    }
    else if ( (v35 & 0xF00) != 0 )
    {
      v36 = (unsigned int)acBits[((__int64)(int)v35 >> 8) & 0xF] + 8;
    }
    else if ( (v35 & 0xF0) != 0 )
    {
      v36 = (unsigned int)acBits[((__int64)(int)v35 >> 4) & 0xF] + 4;
    }
    else
    {
      v36 = acBits[v35 & 0xF];
    }
    *(_DWORD *)(v2 + 612) = v36;
    *(_DWORD *)(v2 + 608) = *((_DWORD *)&aiStart + v36);
  }
  else
  {
    *(_DWORD *)(v2 + 604) = 0;
  }
  return 1LL;
}
