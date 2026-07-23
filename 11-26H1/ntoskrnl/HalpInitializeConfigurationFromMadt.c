/*
 * XREFs of HalpInitializeConfigurationFromMadt @ 0x140CB76B0
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     HalpParseChannelCount @ 0x1405A36A0 (HalpParseChannelCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAllocateNumaConfigData @ 0x140CB7250 (HalpAllocateNumaConfigData.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140CBACD8 (HalpChannelInitializeStaticConfiguration.c)
 */

__int64 __fastcall HalpInitializeConfigurationFromMadt(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  char *v3; // rdx
  unsigned __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v6; // r8
  char *v7; // r10
  unsigned __int64 v8; // rcx
  char v9; // al
  bool v10; // zf
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r8d
  char *v15; // r9
  unsigned __int64 v16; // r10
  char *v17; // r14
  unsigned __int64 v18; // r11
  char *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  size_t v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // r8
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // r10
  __int64 v37; // rdx
  unsigned int v38; // eax
  int v39; // r9d
  __int64 v40; // r11
  __int64 v41; // rcx

  v1 = 0;
  result = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( !result )
    return result;
  v3 = (char *)(result + 44);
  v4 = result + *(unsigned int *)(result + 4);
  v5 = 2048;
  if ( result + 46 > v4 )
    goto LABEL_17;
  do
  {
    v6 = (unsigned __int8)v3[1];
    v7 = v3;
    if ( (unsigned __int8)v6 < 2u )
      break;
    v8 = (unsigned __int64)&v3[v6];
    v3 = (char *)v8;
    if ( v8 > v4 )
      break;
    v9 = *v7;
    if ( *v7 )
    {
      if ( v9 != 9 )
      {
        if ( v9 != 11 || (unsigned __int8)v6 < 0x28u )
          continue;
LABEL_13:
        ++v1;
        continue;
      }
      v10 = (_BYTE)v6 == 16;
    }
    else
    {
      v10 = (_BYTE)v6 == 8;
    }
    if ( v10 )
      goto LABEL_13;
  }
  while ( v8 + 2 <= v4 );
  if ( v1 > 0x800 )
    v1 = 2048;
LABEL_17:
  if ( HalpSplitLargeNumaNodes )
  {
    v5 = HalpMaximumGroupSize;
    v11 = (v1 + HalpMaximumGroupSize - 1) / HalpMaximumGroupSize;
    if ( v11 > 0x40 )
    {
      v11 = 64;
      v1 = HalpMaximumGroupSize << 6;
    }
  }
  else
  {
    v11 = 1;
  }
  v12 = HalpParseChannelCount();
  result = HalpAllocateNumaConfigData(v11, v1, 0, v12);
  v13 = HalpNumaConfig;
  if ( HalpNumaConfig )
  {
    *(_DWORD *)(HalpNumaConfig + 60) = v1;
    v14 = 0;
    *(_DWORD *)(v13 + 56) = v11;
    if ( v1 )
    {
      if ( v1 < 4 )
        goto LABEL_37;
      v15 = *(char **)v13;
      v16 = v13 + 8;
      v17 = *(char **)(v13 + 8);
      v18 = *(_QWORD *)v13 + 4LL * (v1 - 1);
      v19 = &v17[4 * v1 - 4];
      if ( (unsigned __int64)v17 <= v18 && v19 >= v15 )
        goto LABEL_37;
      if ( (unsigned __int64)v17 <= v13 && (unsigned __int64)v19 >= v13 )
        goto LABEL_37;
      if ( (unsigned __int64)v17 <= v16 && (unsigned __int64)v19 >= v16 )
        goto LABEL_37;
      if ( (unsigned __int64)v15 <= v13 && v18 >= v13 )
        goto LABEL_37;
      v20 = v13 + 8;
      if ( (unsigned __int64)v15 <= v20 && v18 >= v20 )
        goto LABEL_37;
      v21 = v1 & 0xFFFFFFFC;
      do
      {
        v14 += 4;
        v22 = v14;
      }
      while ( v14 < v21 );
      v23 = 4LL * v21;
      memset_0(v15, -1, v23);
      memset_0(v17, -1, v23 & 0xFFFFFFFFFFFFFFFCuLL);
      v14 = v22;
      if ( v22 < v1 )
      {
LABEL_37:
        v24 = (_QWORD *)HalpNumaConfig;
        v25 = 4LL * v14;
        v26 = v1 - v14;
        do
        {
          *(_DWORD *)(v25 + *v24) = -1;
          *(_DWORD *)(v25 + v24[1]) = -1;
          v25 += 4LL;
          --v26;
        }
        while ( v26 );
      }
    }
    v27 = HalpNumaConfig;
    v28 = 0;
    if ( *(_DWORD *)(HalpNumaConfig + 56) )
    {
      v29 = 0;
      do
      {
        v30 = v28++;
        *(_DWORD *)(*(_QWORD *)(v27 + 24) + 4 * v30) = v29;
        v29 = v28;
        *(_DWORD *)(*(_QWORD *)(v27 + 32) + 4 * v30) = 0;
        *(_DWORD *)(*(_QWORD *)(v27 + 40) + 4 * v30) = v5;
      }
      while ( (unsigned int)v28 < *(_DWORD *)(v27 + 56) );
    }
    v31 = HalpNumaConfig;
    v32 = v28;
    v33 = 0LL;
    *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4 * v32 - 4) = v1 - v5 * (v32 - 1);
    if ( v1 )
    {
      v34 = 0LL;
      do
      {
        v32 = *(_QWORD *)(v31 + 16);
        v35 = v33;
        v33 = (unsigned int)(v33 + 1);
        *(_DWORD *)(v34 + v32) = v35 / v5;
        v34 += 4LL;
      }
      while ( (unsigned int)v33 < v1 );
    }
    v36 = HalpNumaConfig;
    v37 = 0LL;
    v38 = *(_DWORD *)(HalpNumaConfig + 56);
    if ( v38 )
    {
      v39 = 0;
      do
      {
        v33 = 0LL;
        v32 = v38;
        if ( v38 )
        {
          v40 = HalpNumaConfig;
          do
          {
            v41 = (unsigned int)(v33 + *(_DWORD *)(v40 + 64) * v39);
            v33 = (unsigned int)(v33 + 1);
            *(_WORD *)(*(_QWORD *)(v40 + 48) + 2 * v41) = 0;
            v32 = *(unsigned int *)(v36 + 56);
          }
          while ( (unsigned int)v33 < (unsigned int)v32 );
        }
        LOWORD(v37) = v37 + 1;
        v38 = v32;
        v39 = (unsigned __int16)v37;
      }
      while ( (unsigned __int16)v37 < (unsigned int)v32 );
    }
    return HalpChannelInitializeStaticConfiguration(v32, v37, v33);
  }
  return result;
}
