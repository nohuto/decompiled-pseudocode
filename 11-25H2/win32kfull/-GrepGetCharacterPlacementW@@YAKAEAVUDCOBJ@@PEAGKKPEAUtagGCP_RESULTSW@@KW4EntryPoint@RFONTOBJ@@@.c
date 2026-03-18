/*
 * XREFs of ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x140339260 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     ?GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AB1B4 (-GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x140194714 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x140311C98 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetCharacterPlacementW(
        struct UDCOBJ *a1,
        __m128i *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6,
        int a7)
{
  unsigned int *v7; // rdi
  unsigned int v8; // ebx
  struct UDCOBJ *v10; // r10
  unsigned int v12; // ecx
  __int128 v13; // xmm0
  __m128i v14; // xmm2
  int v15; // edx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  void *v18; // xmm2_8
  unsigned int v19; // eax
  int v20; // esi
  int *v21; // r12
  int v22; // r14d
  unsigned int *v23; // rcx
  __int64 v24; // rbx
  int *v25; // rdx
  int v26; // r8d
  int v27; // ecx
  unsigned int KerningPairs; // eax
  __int64 v29; // rsi
  HSEMAPHORE v30; // rax
  HSEMAPHORE v31; // r14
  unsigned __int64 v32; // r9
  unsigned int cx; // esi
  __m128i *v34; // r10
  _DWORD *v35; // rcx
  __int16 v36; // r11
  __m128i *i; // r8
  unsigned int v38; // r8d
  __int64 v39; // rax
  int *v40; // rdx
  __m128i *j; // rax
  __int128 *v42; // rax
  int v43; // r14d
  unsigned int v44; // eax
  int v45; // eax
  __int64 k; // rcx
  signed int v47; // r9d
  unsigned int v48; // r10d
  unsigned int *v49; // r8
  __int64 v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rax
  unsigned int v53; // ecx
  int *v54; // rax
  int *v55; // r8
  int v56; // ecx
  __int64 v57; // rdx
  int v58; // eax
  _DWORD *v59; // rax
  unsigned int m; // ecx
  LONG cy; // esi
  __int128 *v62; // rax
  struct tagSIZE v63; // [rsp+58h] [rbp-61h] BYREF
  unsigned int Size; // [rsp+60h] [rbp-59h] BYREF
  unsigned int Size_4; // [rsp+64h] [rbp-55h]
  unsigned int *v66; // [rsp+68h] [rbp-51h] BYREF
  int v67; // [rsp+70h] [rbp-49h]
  void *Src; // [rsp+78h] [rbp-41h]
  void *v69[2]; // [rsp+88h] [rbp-31h]
  __m128i v70; // [rsp+98h] [rbp-21h]
  void *v71[2]; // [rsp+A8h] [rbp-11h]
  __int128 v72; // [rsp+B8h] [rbp-1h]
  int v74; // [rsp+118h] [rbp+5Fh] BYREF
  unsigned int v75; // [rsp+120h] [rbp+67h]

  v75 = a4;
  v7 = 0LL;
  v63.cy = 0;
  v8 = a3;
  v63.cx = 0;
  v10 = a1;
  Size_4 = 0;
  v66 = 0LL;
  if ( !a5 )
  {
    if ( (unsigned int)GrepGetTextExtentW(a1, a2, a3, &v63, 1u, 8) )
      return (unsigned int)LOWORD(v63.cx) | (v63.cy << 16);
    return 0LL;
  }
  v12 = *((_DWORD *)a5 + 14);
  v13 = *a5;
  v14 = (__m128i)a5[1];
  if ( a3 > v12 )
    v8 = *((_DWORD *)a5 + 14);
  v15 = a6 | 0x100000;
  v16 = a5[3];
  Size = v8;
  *(_OWORD *)v69 = v13;
  v17 = a5[2];
  if ( (a6 & 0x10000) == 0 )
    v15 = a6;
  v70 = v14;
  v18 = (void *)_mm_srli_si128(v14, 8).m128i_u64[0];
  *(_OWORD *)v71 = v17;
  v72 = v16;
  v74 = v15;
  Src = v18;
  if ( (v15 & 0x200000) != 0 && v18 )
  {
    v19 = nCalcJustInArray(&v66, 1u, v18, 1, v12);
    v15 = v74;
    a4 = v75;
    v10 = a1;
    v7 = v66;
    Size_4 = v19;
  }
  v20 = v18 != 0LL;
  a7 = v20;
  if ( v71[0] )
  {
    v20 += 2;
    a7 = v20;
  }
  v21 = (int *)v18;
  if ( v20 == 2 )
    v21 = (int *)v71[0];
  v22 = v15 & 0x100000;
  v67 = v15 & 0x100000;
  if ( !(unsigned int)GrepGetTextExtentExW(
                        v10,
                        (const unsigned __int16 *)a2,
                        v8,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v15 & 0x100000) != 0)),
                        v21,
                        &v63,
                        0,
                        8) )
  {
    if ( !v7 )
      return 0LL;
    v23 = v7;
LABEL_18:
    Win32FreePool(v23);
    return 0LL;
  }
  LODWORD(v24) = Size;
  if ( v21 )
  {
    if ( Size )
    {
      v25 = &v21[Size - 1];
      if ( v25 > v21 )
      {
        v26 = *v25;
        do
        {
          v27 = *(v25 - 1);
          *v25-- = v26 - v27;
          v26 = v27;
        }
        while ( v25 > v21 );
      }
    }
  }
  if ( v22 && !(_DWORD)v24 )
  {
    if ( v7 )
      Win32FreePool(v7);
    return (unsigned int)LOWORD(v63.cx) | (v63.cy << 16);
  }
  if ( (v74 & 8) != 0
    && v20
    && (unsigned int)v24 >= 2
    && (KerningPairs = GrepGetKerningPairs(a1, 0, 0LL, 8u), (v29 = KerningPairs) != 0)
    && (v30 = (HSEMAPHORE)PALLOCMEM(8 * KerningPairs, 1954051143LL), (v31 = v30) != 0LL) )
  {
    if ( (unsigned int)GrepGetKerningPairs(a1, v29, v30, 8u) != (_DWORD)v29 )
    {
      if ( v7 )
        Win32FreePool(v7);
      v23 = (unsigned int *)v31;
      goto LABEL_18;
    }
    v32 = (unsigned __int64)(v31 + 2 * v29);
    cx = v63.cx;
    if ( (unsigned __int64)v31 < v32 )
    {
      v34 = (__m128i *)((char *)a2 + 2 * (unsigned int)(v24 - 1));
      v35 = v31 + 1;
      do
      {
        v36 = *((_WORD *)v35 - 2);
        for ( i = a2; i < v34; i = (__m128i *)((char *)i + 2) )
        {
          if ( v36 == i->m128i_i16[0] && i->m128i_i16[1] == *((_WORD *)v35 - 1) )
          {
            v21[((char *)i - (char *)a2) >> 1] += *v35;
            cx += *v35;
            v63.cx = cx;
          }
        }
        v35 += 2;
      }
      while ( (unsigned __int64)(v35 - 1) < v32 );
    }
    Win32FreePool(v31);
    v38 = v75;
    if ( v67 )
    {
      while ( cx > v75 )
      {
        if ( !(_DWORD)v24 )
          goto LABEL_62;
        v24 = (unsigned int)(v24 - 1);
        cx -= v21[v24];
        v63.cx = cx;
      }
      if ( !(_DWORD)v24 )
      {
LABEL_62:
        if ( v7 )
          Win32FreePool(v7);
        v42 = a5;
        *((_DWORD *)a5 + 14) = 0;
        *((_DWORD *)v42 + 15) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v63.cx;
    v38 = v75;
  }
  if ( (v74 & 0x10000) == 0 )
    goto LABEL_84;
  if ( a7 )
  {
    if ( (_DWORD)v24 )
    {
      v39 = (unsigned int)(v24 - 1);
      v40 = &v21[v39];
      for ( j = (__m128i *)((char *)a2 + 2 * v39); j >= a2 && j->m128i_i16[0] == 32; j = (__m128i *)((char *)j - 2) )
      {
        cx -= *v40;
        LODWORD(v24) = v24 - 1;
        --v40;
      }
      if ( !(_DWORD)v24 )
        goto LABEL_62;
      v43 = v38 - cx;
      if ( (int)(v38 - cx) >= 0 && (unsigned int)v24 >= 2 )
      {
        v44 = Size_4;
        if ( !Size_4 )
        {
          v44 = nCalcJustInArray(&v66, 0x20u, a2, 0, v24);
          v7 = v66;
          if ( !v44 )
            goto LABEL_78;
        }
        v45 = v44 - 1;
        for ( k = v45; k >= 0; --k )
        {
          if ( (int)v24 - 1 >= v7[k] )
            break;
          --v45;
        }
        if ( v45 >= 0 )
        {
          v47 = v43 % (unsigned int)(v45 + 1);
          v48 = v43 / (unsigned int)(v45 + 1);
          v49 = v7;
          v50 = (unsigned int)(v45 + 1);
          do
          {
            v51 = v48;
            if ( v47 > 0 )
              v51 = v48 + 1;
            v52 = *v49;
            --v47;
            ++v49;
            v21[v52] += v51;
            --v50;
          }
          while ( v50 );
        }
        else
        {
LABEL_78:
          while ( v43 > 0 )
          {
            v53 = 0;
            v54 = v21;
            do
            {
              ++*v54;
              if ( !--v43 )
                break;
              ++v53;
              ++v54;
            }
            while ( v53 < (int)v24 - 1 );
          }
        }
      }
      v63.cx = v75;
    }
LABEL_84:
    if ( a7 == 3 )
      memmove(v71[0], Src, 4LL * (unsigned int)v24);
  }
  v55 = (int *)v71[0];
  if ( v71[0] )
  {
    v56 = 0;
    if ( (_DWORD)v24 )
    {
      v57 = (unsigned int)v24;
      do
      {
        v58 = *v55;
        *v55 = v56;
        v56 += v58;
        ++v55;
        --v57;
      }
      while ( v57 );
    }
  }
  if ( v69[1] )
    memmove(v69[1], a2, 2LL * (unsigned int)v24);
  if ( v71[1] )
    memset_0(v71[1], 1, (unsigned int)v24);
  v59 = (_DWORD *)v70.m128i_i64[0];
  if ( v70.m128i_i64[0] )
  {
    for ( m = 0; m < (unsigned int)v24; ++v59 )
      *v59 = m++;
  }
  if ( (_QWORD)v72 && *GrepGetGlyphIndicesW(&v74, a1, (unsigned __int16 *)a2, v24, v72, 0, 0, 8) == -1 )
  {
    LODWORD(v24) = 0;
    cy = 0;
    v63.cx = 0;
  }
  else
  {
    cy = v63.cy;
  }
  if ( v7 )
    Win32FreePool(v7);
  v62 = a5;
  *((_DWORD *)a5 + 14) = v24;
  *((_DWORD *)v62 + 15) = v24;
  return (cy << 16) | (unsigned int)LOWORD(v63.cx);
}
