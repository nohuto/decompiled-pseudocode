/*
 * XREFs of ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x14032A5F0 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x14033407C (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetCharacterPlacementW(
        struct DCOBJ *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagGCP_RESULTSW *a5,
        unsigned int a6)
{
  unsigned int *v6; // rdi
  UINT v7; // ebx
  struct DCOBJ *v9; // r10
  UINT nGlyphs; // r8d
  __int128 v12; // xmm0
  __m128i v13; // xmm2
  unsigned int v14; // edx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  void *v17; // xmm2_8
  unsigned int v18; // eax
  int v19; // esi
  unsigned int *v20; // r12
  int v21; // r14d
  unsigned int *v22; // rcx
  __int64 v23; // rbx
  unsigned int *v24; // rdx
  unsigned int v25; // r8d
  int v26; // ecx
  unsigned int KerningPairs; // eax
  __int64 v28; // rsi
  struct tagKERNINGPAIR *v29; // rax
  struct tagKERNINGPAIR *v30; // r14
  unsigned __int64 v31; // r9
  unsigned int cx; // esi
  unsigned __int16 *v33; // r10
  int *p_iKernAmount; // rcx
  __int16 v35; // r11
  unsigned __int16 *i; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rax
  unsigned int *v39; // rdx
  unsigned __int16 *j; // rax
  int v41; // r14d
  unsigned int v42; // eax
  int v43; // eax
  __int64 k; // rcx
  signed int v45; // r9d
  unsigned int v46; // r10d
  unsigned int *v47; // r8
  __int64 v48; // rdx
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned int *v52; // rax
  unsigned int *v53; // r8
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int v56; // eax
  _DWORD *v57; // rax
  unsigned int m; // ecx
  LONG cy; // esi
  struct tagGCP_RESULTSW *v60; // rax
  struct tagSIZE v61; // [rsp+48h] [rbp-59h] BYREF
  int v62; // [rsp+50h] [rbp-51h]
  UINT Size; // [rsp+54h] [rbp-4Dh] BYREF
  unsigned int Size_4; // [rsp+58h] [rbp-49h]
  unsigned int *v65; // [rsp+60h] [rbp-41h] BYREF
  int v66; // [rsp+68h] [rbp-39h]
  void *Src; // [rsp+70h] [rbp-31h]
  void *v68[2]; // [rsp+78h] [rbp-29h]
  __m128i v69; // [rsp+88h] [rbp-19h]
  unsigned int *v70[2]; // [rsp+98h] [rbp-9h]
  __int128 v71; // [rsp+A8h] [rbp+7h]
  unsigned int v73; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v74; // [rsp+110h] [rbp+6Fh]

  v74 = a4;
  v6 = 0LL;
  Size_4 = 0;
  v7 = a3;
  v61 = 0LL;
  v9 = a1;
  v65 = 0LL;
  if ( !a5 )
  {
    if ( (unsigned int)GrepGetTextExtentW(a1, a2, a3, &v61, 1u) )
      return (unsigned int)LOWORD(v61.cx) | (v61.cy << 16);
    return 0LL;
  }
  nGlyphs = a5->nGlyphs;
  v12 = *(_OWORD *)&a5->lStructSize;
  v13 = *(__m128i *)&a5->lpOrder;
  if ( v7 > nGlyphs )
    v7 = a5->nGlyphs;
  v14 = a6 | 0x100000;
  v15 = *(_OWORD *)&a5->lpGlyphs;
  Size = v7;
  *(_OWORD *)v68 = v12;
  v16 = *(_OWORD *)&a5->lpCaretPos;
  if ( (a6 & 0x10000) == 0 )
    v14 = a6;
  v69 = v13;
  v17 = (void *)_mm_srli_si128(v13, 8).m128i_u64[0];
  *(_OWORD *)v70 = v16;
  v71 = v15;
  v73 = v14;
  Src = v17;
  if ( (v14 & 0x200000) != 0 && v17 )
  {
    v18 = nCalcJustInArray(&v65, 1u, v17, 1, nGlyphs);
    v14 = v73;
    a4 = v74;
    v9 = a1;
    v6 = v65;
    Size_4 = v18;
  }
  v19 = v17 != 0LL;
  v62 = v19;
  if ( v70[0] )
  {
    v19 += 2;
    v62 = v19;
  }
  v20 = (unsigned int *)v17;
  if ( v19 == 2 )
    v20 = v70[0];
  v21 = v14 & 0x100000;
  v66 = v14 & 0x100000;
  if ( !(unsigned int)GrepGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v14 & 0x100000) != 0)),
                        v20,
                        &v61,
                        0) )
  {
    if ( !v6 )
      return 0LL;
    v22 = v6;
LABEL_18:
    Win32FreePool(v22);
    return 0LL;
  }
  LODWORD(v23) = Size;
  if ( v20 )
  {
    if ( Size )
    {
      v24 = &v20[Size - 1];
      if ( v24 > v20 )
      {
        v25 = *v24;
        do
        {
          v26 = *(v24 - 1);
          *v24-- = v25 - v26;
          v25 = v26;
        }
        while ( v24 > v20 );
      }
    }
  }
  if ( v21 && !(_DWORD)v23 )
  {
    if ( v6 )
      Win32FreePool(v6);
    return (unsigned int)LOWORD(v61.cx) | (v61.cy << 16);
  }
  if ( (v73 & 8) != 0
    && v19
    && (unsigned int)v23 >= 2
    && (KerningPairs = GrepGetKerningPairs(a1, 0, 0LL), (v28 = KerningPairs) != 0)
    && (v29 = (struct tagKERNINGPAIR *)PALLOCMEM(8 * KerningPairs, 1954051143LL), (v30 = v29) != 0LL) )
  {
    if ( (unsigned int)GrepGetKerningPairs(a1, v28, v29) != (_DWORD)v28 )
    {
      if ( v6 )
        Win32FreePool(v6);
      v22 = (unsigned int *)v30;
      goto LABEL_18;
    }
    v31 = (unsigned __int64)&v30[v28];
    cx = v61.cx;
    if ( (unsigned __int64)v30 < v31 )
    {
      v33 = &a2[(unsigned int)(v23 - 1)];
      p_iKernAmount = &v30->iKernAmount;
      do
      {
        v35 = *((_WORD *)p_iKernAmount - 2);
        for ( i = a2; i < v33; ++i )
        {
          if ( v35 == *i && i[1] == *((_WORD *)p_iKernAmount - 1) )
          {
            v20[i - a2] += *p_iKernAmount;
            cx += *p_iKernAmount;
            v61.cx = cx;
          }
        }
        p_iKernAmount += 2;
      }
      while ( (unsigned __int64)(p_iKernAmount - 1) < v31 );
    }
    Win32FreePool(v30);
    v37 = v74;
    if ( v66 )
    {
      while ( cx > v74 )
      {
        if ( !(_DWORD)v23 )
          goto LABEL_62;
        v23 = (unsigned int)(v23 - 1);
        cx -= v20[v23];
        v61.cx = cx;
      }
      if ( !(_DWORD)v23 )
      {
LABEL_62:
        if ( v6 )
          Win32FreePool(v6);
        *(_QWORD *)&a5->nGlyphs = 0LL;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v61.cx;
    v37 = v74;
  }
  if ( (v73 & 0x10000) == 0 )
    goto LABEL_84;
  if ( v62 )
  {
    if ( (_DWORD)v23 )
    {
      v38 = (unsigned int)(v23 - 1);
      v39 = &v20[v38];
      for ( j = &a2[v38]; j >= a2 && *j == 32; --j )
      {
        cx -= *v39;
        LODWORD(v23) = v23 - 1;
        --v39;
      }
      if ( !(_DWORD)v23 )
        goto LABEL_62;
      v41 = v37 - cx;
      if ( (int)(v37 - cx) >= 0 && (unsigned int)v23 >= 2 )
      {
        v42 = Size_4;
        if ( !Size_4 )
        {
          v42 = nCalcJustInArray(&v65, 0x20u, a2, 0, v23);
          v6 = v65;
          if ( !v42 )
            goto LABEL_78;
        }
        v43 = v42 - 1;
        for ( k = v43; k >= 0; --k )
        {
          if ( (int)v23 - 1 >= v6[k] )
            break;
          --v43;
        }
        if ( v43 >= 0 )
        {
          v45 = v41 % (unsigned int)(v43 + 1);
          v46 = v41 / (unsigned int)(v43 + 1);
          v47 = v6;
          v48 = (unsigned int)(v43 + 1);
          do
          {
            v49 = v46;
            if ( v45 > 0 )
              v49 = v46 + 1;
            v50 = *v47;
            --v45;
            ++v47;
            v20[v50] += v49;
            --v48;
          }
          while ( v48 );
        }
        else
        {
LABEL_78:
          while ( v41 > 0 )
          {
            v51 = 0;
            v52 = v20;
            do
            {
              ++*v52;
              if ( !--v41 )
                break;
              ++v51;
              ++v52;
            }
            while ( v51 < (int)v23 - 1 );
          }
        }
      }
      v61.cx = v74;
    }
LABEL_84:
    if ( v62 == 3 )
      memmove(v70[0], Src, 4LL * (unsigned int)v23);
  }
  v53 = v70[0];
  if ( v70[0] )
  {
    v54 = 0;
    if ( (_DWORD)v23 )
    {
      v55 = (unsigned int)v23;
      do
      {
        v56 = *v53;
        *v53 = v54;
        v54 += v56;
        ++v53;
        --v55;
      }
      while ( v55 );
    }
  }
  if ( v68[1] )
    memmove(v68[1], a2, 2LL * (unsigned int)v23);
  if ( v70[1] )
    memset_0(v70[1], 1, (unsigned int)v23);
  v57 = (_DWORD *)v69.m128i_i64[0];
  if ( v69.m128i_i64[0] )
  {
    for ( m = 0; m < (unsigned int)v23; ++v57 )
      *v57 = m++;
  }
  if ( (_QWORD)v71 && *GrepGetGlyphIndicesW(&v73, a1, a2, v23, v71, 0, 0) == -1 )
  {
    LODWORD(v23) = 0;
    cy = 0;
    v61.cx = 0;
  }
  else
  {
    cy = v61.cy;
  }
  if ( v6 )
    Win32FreePool(v6);
  v60 = a5;
  a5->nGlyphs = v23;
  v60->nMaxFit = v23;
  return (cy << 16) | (unsigned int)LOWORD(v61.cx);
}
