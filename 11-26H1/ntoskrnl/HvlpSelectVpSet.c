/*
 * XREFs of HvlpSelectVpSet @ 0x1405BD36C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x1405BB054 (HvlIsSingleGroupRequired.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1405BC7B8 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1405BCCF0 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x1406E0AA8 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // r15
  char v4; // r12
  unsigned int i; // esi
  _WORD *v7; // rcx
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  __int128 *v14; // r9
  __int64 v15; // rdx
  unsigned int j; // ecx
  bool IsSingleGroupRequired; // al
  unsigned int v18; // r8d
  unsigned int v19; // edx
  unsigned __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r8d
  _WORD *v25; // rcx
  __int64 v26; // r9
  _DWORD *v27; // rcx
  int v28; // r9d
  __int64 v29; // r11
  unsigned int v30; // r8d
  unsigned int k; // r8d
  unsigned __int64 v32; // r8
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  unsigned int v35; // esi
  _BYTE *v36; // rbp
  unsigned int v37; // r9d
  unsigned int m; // edx
  __int64 v39; // r8
  __int64 v40; // rcx
  _BYTE *v41; // rsi
  __int64 v42; // rcx
  unsigned int v43; // ebp
  __int64 v44; // rsi
  char v45; // al
  unsigned int n; // edx
  unsigned int v47; // ecx
  __int128 v49; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v50[64]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1;
  HvlpMinrootConfigurationError = 0;
  v3 = 0;
  v49 = 0LL;
  v4 = 0;
  HviGetImplementationLimits(&v49);
  if ( (HvlpFlags & 0x800000) != 0 && (HvlpRootFlags & 0x800) == 0 )
  {
    v3 = 1;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      HvlpComputeLpComparisonMetrics(v2, a2, i);
      if ( *(_BYTE *)(a2 + 40LL * i + 2) && !*(_DWORD *)(a2 + 40LL * i + 28) )
      {
        v3 = 0;
        break;
      }
    }
  }
  if ( (_DWORD)v2 )
  {
    v7 = (_WORD *)(a2 + 8);
    v8 = v2;
    do
    {
      v7[2] = *v7;
      v9 = 0;
      *(v7 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v9 = *((_BYTE *)v7 - 6);
      *((_BYTE *)v7 - 5) = v9;
      v7 += 20;
      --v8;
    }
    while ( v8 );
  }
  if ( !v3 )
    goto LABEL_64;
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcPerCoreSpecified & 1) != 0 )
  {
    KeRootProcPerCoreSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    HvlpMinrootConfigurationError = 1;
    ++KeRootProcSpecified;
  }
  v10 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v11 = 0;
    do
    {
      if ( *((_WORD *)&KeRootProcNumaNodes + v11) == *(_WORD *)(a2 + 8) )
        break;
      ++v11;
    }
    while ( v11 < KeRootProcNumaNodesSpecified );
    if ( v11 == KeRootProcNumaNodesSpecified )
    {
      v10 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_52;
  memset_0(v50, 0, sizeof(v50));
  v12 = 0;
  if ( !v10 )
    v10 = (unsigned __int16)KeNumberNodes;
  v13 = 0;
  if ( !v10 )
  {
LABEL_45:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_52;
  }
  v14 = &KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v15 = *(unsigned __int16 *)v14;
      if ( (unsigned int)v15 >= 0x40 || v50[v15] )
        goto LABEL_43;
      v50[v15] = 1;
    }
    else
    {
      LODWORD(v15) = v13;
    }
    for ( j = 0; j < (unsigned int)v2; ++j )
    {
      if ( *(_BYTE *)(a2 + 40LL * j + 2) && *(unsigned __int16 *)(a2 + 40LL * j + 8) == (_DWORD)v15 )
      {
        ++v12;
        break;
      }
    }
LABEL_43:
    ++v13;
    v14 = (__int128 *)((char *)v14 + 2);
  }
  while ( v13 < v10 );
  if ( !v12 )
    goto LABEL_45;
  if ( KeRootProcSpecified <= v12 )
  {
    IsSingleGroupRequired = HvlIsSingleGroupRequired();
    HvlpMinrootConfigurationError = 1;
    if ( IsSingleGroupRequired )
    {
      KeRootProcSpecified = 64;
      if ( v12 >= 0x40 )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcNumaNodesSpecified = 1;
      }
    }
    else
    {
      KeRootProcSpecified = 0;
    }
  }
LABEL_52:
  if ( KeRootProcNumaNodeLpsSpecified )
  {
    if ( KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
      && _bittest64((const signed __int64 *)KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1], 0) )
    {
      v18 = 1;
      v19 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
      while ( v18 < (unsigned int)v2 )
      {
        if ( (v19 & *(_DWORD *)(a2 + 40LL * v18 + 4)) == (v19 & *(_DWORD *)(a2 + 4)) )
        {
          v20 = *(unsigned int *)(a2 + 40LL * v18 + 36);
          if ( v20 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
            || !_bittest64(
                  (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1] + 8 * (v20 >> 6)),
                  *(_DWORD *)(a2 + 40LL * v18 + 36) & 0x3F) )
          {
            goto LABEL_61;
          }
        }
        ++v18;
      }
    }
    else
    {
LABEL_61:
      if ( HvlIsSingleGroupRequired() )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcSpecified = 64;
        KeRootProcNumaNodesSpecified = 1;
      }
      KeRootProcNumaNodeLpsSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
LABEL_64:
  *(_BYTE *)(a2 + 1) = 1;
  v21 = 1;
  *(_BYTE *)(a2 + 3) = 1;
  while ( 2 )
  {
    if ( (_DWORD)v2 )
    {
      v22 = a2;
      v23 = v2;
      while ( 1 )
      {
        if ( *(_BYTE *)v22 )
        {
          if ( !*(_BYTE *)(v22 + 1) && *(_BYTE *)(v22 + 2) && v21 != (_DWORD)v49 )
          {
            if ( !KeRootProcPerNodeSpecified )
              goto LABEL_78;
            v24 = 0;
            v25 = (_WORD *)(a2 + 8);
            v26 = v2;
            do
            {
              if ( *((_BYTE *)v25 - 7) && *v25 == *(_WORD *)(v22 + 8) )
                ++v24;
              v25 += 20;
              --v26;
            }
            while ( v26 );
            if ( v24 != KeRootProcPerNodeSpecified )
            {
LABEL_78:
              if ( !KeRootProcPerCoreSpecified )
                goto LABEL_85;
              v27 = (_DWORD *)(a2 + 4);
              v28 = 0;
              v29 = v2;
              v30 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
              do
              {
                if ( *((_BYTE *)v27 - 3) && (*v27 & v30) == (v30 & *(_DWORD *)(v22 + 4)) )
                  ++v28;
                v27 += 10;
                --v29;
              }
              while ( v29 );
              if ( v28 != KeRootProcPerCoreSpecified )
              {
LABEL_85:
                if ( KeRootProcNumaNodesSpecified )
                {
                  for ( k = 0; k < KeRootProcNumaNodesSpecified; ++k )
                  {
                    if ( *((_WORD *)&KeRootProcNumaNodes + k) == *(_WORD *)(v22 + 12) )
                      goto LABEL_90;
                  }
                }
                else
                {
LABEL_90:
                  if ( !KeRootProcSpecified || v21 != KeRootProcSpecified )
                  {
                    if ( !KeRootProcNumaNodeLpsSpecified )
                      goto LABEL_96;
                    v32 = *(unsigned int *)(v22 + 36);
                    if ( v32 < KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v22 + 8)] )
                    {
                      if ( _bittest64(
                             (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v22 + 8) + 1]
                                                    + 8 * (v32 >> 6)),
                             *(_DWORD *)(v22 + 36) & 0x3F) )
                      {
                        goto LABEL_96;
                      }
                    }
                  }
                }
              }
            }
          }
          *(_BYTE *)v22 = 0;
        }
LABEL_96:
        v22 += 40LL;
        if ( !--v23 )
        {
          v33 = 0;
          v34 = (_BYTE *)a2;
          while ( !*v34 )
          {
            ++v33;
            v34 += 40;
            if ( v33 >= (unsigned int)v2 )
              goto LABEL_102;
          }
          goto LABEL_103;
        }
      }
    }
    v33 = 0;
LABEL_102:
    if ( v33 != (_DWORD)v2 )
    {
LABEL_103:
      v35 = 0;
      if ( (_DWORD)v2 )
      {
        v36 = (_BYTE *)a2;
        do
        {
          if ( *v36 )
            HvlpComputeLpComparisonMetrics(v2, a2, v35);
          ++v35;
          v36 += 40;
        }
        while ( v35 < (unsigned int)v2 );
      }
      v37 = -1;
      for ( m = 0; m < (unsigned int)v2; ++m )
      {
        if ( *(_BYTE *)(a2 + 40LL * m) )
        {
          v37 = m;
          break;
        }
      }
      v39 = v37 + 1;
      if ( (unsigned int)v39 < (unsigned int)v2 )
      {
        v40 = 5 * v39;
        v41 = (_BYTE *)(a2 + 40 * v39);
        do
        {
          if ( *v41 )
          {
            if ( (unsigned int)HvlpLpComparison(v40, a2, v39, v37) == -1 )
              v37 = v39;
          }
          LODWORD(v39) = v39 + 1;
          v41 += 40;
        }
        while ( (unsigned int)v39 < (unsigned int)v2 );
      }
      ++v21;
      v42 = 5LL * v37;
      *(_BYTE *)(a2 + 8 * v42 + 1) = 1;
      *(_BYTE *)(a2 + 8 * v42 + 3) = 1;
      continue;
    }
    break;
  }
  if ( v3 )
  {
    v43 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v44 = a2 + 41;
      do
      {
        if ( *(_BYTE *)v44 )
        {
          HvlpComputeLpComparisonMetrics(v2, a2, v43);
          if ( !*(_DWORD *)(v44 + 27) )
          {
            *(_BYTE *)v44 = 0;
            v45 = 0;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v45 = *(_BYTE *)(v44 + 1);
            *(_BYTE *)(v44 + 2) = v45;
            v4 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v43;
        v44 += 40LL;
      }
      while ( v43 < (unsigned int)v2 );
    }
  }
  if ( !KeRootProcNumaNodesSpecified && !KeRootProcNumaNodeLpsSpecified && !v4 )
  {
    for ( n = 0; n < (unsigned int)v2; ++n )
    {
      if ( *(_BYTE *)(a2 + 40LL * n + 2) )
      {
        v47 = 0;
        if ( (_DWORD)v2 )
        {
          while ( *(_WORD *)(a2 + 40LL * v47 + 8) != *(_WORD *)(a2 + 40LL * n + 8) || !*(_BYTE *)(a2 + 40LL * v47 + 1) )
          {
            if ( ++v47 >= (unsigned int)v2 )
              goto LABEL_139;
          }
        }
        else
        {
LABEL_139:
          if ( v47 == (_DWORD)v2 )
            return 3221225473LL;
        }
      }
    }
  }
  return 0LL;
}
