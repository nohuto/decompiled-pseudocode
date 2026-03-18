/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400C2180 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140183B5C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1401C5AE4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x14020638C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  size_t v12; // r13
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  char *v19; // r12
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 *v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h]
  unsigned int v44; // [rsp+98h] [rbp+10h]
  int v45; // [rsp+A0h] [rbp+18h]
  unsigned int v46; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v6) = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v45 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v45 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = (unsigned int *)(v4 + 8);
  }
  else
  {
    v33 = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v33 + 72);
    if ( !v3 )
      return 0LL;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(unsigned int **)(v33 + 72);
  }
  v44 = v7;
  v9 = *v8;
  v41 = v7;
  v10 = 16LL * v7;
  v40 = *v8;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v12 = 8 * v9;
  if ( (unsigned __int64)(8 * v9) > 0xFFFFFFFF )
    return 0LL;
  v13 = v10 + 16;
  if ( (unsigned int)v10 >= 0xFFFFFFF0 )
    return 0LL;
  v14 = v13 + v12;
  v46 = v13 + v12;
  if ( v13 + (unsigned int)v12 < v13 )
    return 0LL;
  v15 = v14 + (*(_DWORD *)(v2 + 648) != 0 ? 768 : 2048);
  if ( v15 + 8 > 0xC00 )
  {
    v15 = (v14 + 4095) & 0xFFFFF000;
    if ( v15 - v14 < 0x80 )
      v15 += 4096;
  }
  v16 = PALLOCNOZ(v15, 1667326791LL);
  v17 = *(_QWORD *)this;
  v42 = v16;
  if ( !v16 )
  {
    *(_DWORD *)(v17 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v17 + 480) = v16;
  v18 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v19 = (char *)(v18 + v10 + 16);
  *(_DWORD *)v18 = v44;
  *(_QWORD *)(v18 + 8) = 0LL;
  memset_0(v19, 0, v12);
  if ( v44 )
  {
    v20 = v41;
    if ( v45 )
    {
      v21 = (unsigned __int16 *)(v4 + 16);
      v22 = v18 - v4;
      do
      {
        *(_QWORD *)((char *)v21 + v22 + 8) = v19;
        *(_DWORD *)((char *)v21 + v22) = *v21;
        v23 = v21[1];
        *(_DWORD *)((char *)v21 + v22 + 4) = v23;
        v21 += 8;
        v19 += 8 * v23;
        --v20;
      }
      while ( v20 );
    }
    else
    {
      v37 = (unsigned __int16 *)(v3 + 10);
      v38 = v18 + 16;
      do
      {
        *(_QWORD *)(v38 + 8) = v19;
        *(_DWORD *)v38 = *(v37 - 1);
        v38 += 16LL;
        v39 = *v37;
        v37 += 2;
        *(_DWORD *)(v38 - 12) = v39;
        v19 += 8 * v39;
        --v20;
      }
      while ( v20 );
    }
  }
  v24 = (_QWORD *)(v42 + v46);
  *(_QWORD *)(v2 + 536) = v24;
  *v24 = 0LL;
  v25 = v42 + v15;
  *(_QWORD *)(v2 + 512) = *(_QWORD *)(v2 + 536) + 16LL;
  *(_QWORD *)(v2 + 528) = v25;
  *(_QWORD *)(v2 + 520) = v25;
  v26 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v26 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_27;
  if ( v26 == 2 )
  {
    *(_DWORD *)(v2 + 552) = v6;
    goto LABEL_26;
  }
  v27 = *(_QWORD *)(v2 + 632);
  v28 = 8 * v27;
  v6 = 16 * v27;
  if ( v6 <= 0xC00 )
  {
    *(_DWORD *)(v2 + 552) = 4096;
    goto LABEL_26;
  }
  v29 = 0x2000;
  if ( v6 <= 0x2000 )
  {
    v29 = (v6 + 4095) & 0xFFFFF000;
  }
  else if ( v28 > 0x2000 )
  {
    v30 = 589824;
    v31 = (v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v29 = 589824;
    if ( v31 < 0x90000 )
    {
      v30 = v31;
      v29 = v31;
    }
    LODWORD(v6) = v30;
    goto LABEL_25;
  }
  LODWORD(v6) = v29;
LABEL_25:
  *(_DWORD *)(v2 + 552) = v29;
LABEL_26:
  *(_DWORD *)(v2 + 548) = v6;
  *(_DWORD *)(v2 + 556) = 589824 * ((unsigned int)(v40 + 1023) >> 10) / *(_DWORD *)(v2 + 552);
LABEL_27:
  v32 = **(int **)(*(_QWORD *)this + 480LL);
  if ( (unsigned int)v32 > 0xC8 )
  {
    *(_DWORD *)(v2 + 604) = v32 - 1;
    v34 = (unsigned int)(v32 - 1);
    if ( (((_DWORD)v32 - 1) & 0xF000) != 0 )
    {
      v35 = (unsigned int)acBits[(v34 >> 12) & 0xF] + 12;
    }
    else if ( (v34 & 0xF00) != 0 )
    {
      v35 = (unsigned int)acBits[(v34 >> 8) & 0xF] + 8;
    }
    else
    {
      v36 = v32 - 1;
      if ( (v34 & 0xF0) != 0 )
        v35 = (unsigned int)acBits[(v36 >> 4) & 0xF] + 4;
      else
        v35 = acBits[v36 & 0xF];
    }
    *(_DWORD *)(v2 + 612) = v35;
    *(_DWORD *)(v2 + 608) = *((_DWORD *)&aiStart + v35);
  }
  else
  {
    *(_DWORD *)(v2 + 604) = 0;
  }
  return 1LL;
}
