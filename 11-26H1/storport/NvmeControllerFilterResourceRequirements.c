/*
 * XREFs of NvmeControllerFilterResourceRequirements @ 0x1400F34FC
 * Callers:
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140199CA8 (NvmeAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     IsPci3MsiInterrupt @ 0x1400E3270 (IsPci3MsiInterrupt.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerFilterResourceRequirements(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // r12d
  unsigned __int16 *v4; // rsi
  __int64 v6; // r9
  unsigned int v7; // ebp
  int v8; // r13d
  void *v9; // r15
  char v10; // r14
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r10d
  __int16 v21; // r11
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 v24; // r8
  unsigned int v25; // r11d
  int v26; // edx
  __int64 v27; // r8
  unsigned int v28; // r9d
  __int64 v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r8d
  unsigned int v32; // edx
  int v33; // edx
  _OWORD *v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r15d
  unsigned int v39; // edi
  unsigned int v40; // r9d
  __int64 v41; // rdx
  unsigned int v42; // r10d
  int v43; // ebp
  __int64 v44; // r14
  __int64 v45; // r12
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v47; // r13
  __int64 v48; // rcx
  int v49; // ebp
  __int64 v50; // r14
  __int64 v51; // r13
  ULONG v52; // eax
  __int64 v53; // r15
  int v54; // ebp
  unsigned int v55; // r15d
  __int64 v56; // r14
  ULONG v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  unsigned int v61; // ecx
  unsigned int i; // edx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v67; // [rsp+20h] [rbp-58h]
  unsigned int v68; // [rsp+24h] [rbp-54h]
  int v69; // [rsp+24h] [rbp-54h]
  int v70; // [rsp+28h] [rbp-50h]
  __int64 Pool; // [rsp+38h] [rbp-40h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+10h] BYREF
  int v73; // [rsp+90h] [rbp+18h]
  unsigned int v74; // [rsp+98h] [rbp+20h]

  v2 = a2[9];
  v3 = 0;
  v4 = (unsigned __int16 *)g_CpuInfo;
  v68 = 0;
  v6 = a1;
  v70 = 0;
  v7 = 0;
  v73 = v2;
  v8 = 0;
  v9 = 0LL;
  v10 = 1;
  if ( v2 )
  {
    v11 = (char *)a2 + 41;
    do
    {
      if ( IsPci3MsiInterrupt((__int64)(v11 - 1)) )
      {
        ++v7;
      }
      else if ( *v12 == 1 && (v12[3] & 1) != 0 )
      {
        ++v8;
      }
      v11 = v12 + 32;
    }
    while ( v13 != 1 );
    v70 = v8;
  }
  v14 = *((_DWORD *)v4 + 3);
  if ( v7 <= v14 + 1 )
  {
    if ( !g_HeterogenousCPU )
      goto LABEL_108;
    if ( v7 <= 1 )
      goto LABEL_108;
    if ( v7 >= v14 )
      goto LABEL_108;
    v37 = *((unsigned int *)v4 + 3);
    ProcNumber = 0;
    v67 = 0;
    v74 = 0;
    Pool = RaidAllocatePool(64LL, v37, 1380147538LL, v6);
    v9 = (void *)Pool;
    if ( !Pool )
      goto LABEL_108;
    v38 = *((_DWORD *)v4 + 11);
    if ( v38 >= v7 )
      v38 = v7 >> 1;
    v39 = 0;
    if ( v7 > 2 )
    {
      v40 = a2[9];
      while ( 1 )
      {
        if ( v39 >= v40 )
          goto LABEL_58;
        if ( IsPci3MsiInterrupt((__int64)&a2[8 * v39 + 10]) )
          break;
        ++v39;
      }
      *(unsigned int *)((char *)a2 + v41 + 48) = v42;
      *(_WORD *)((char *)a2 + v41 + 44) |= 4u;
      ++v39;
      *(unsigned int *)((char *)a2 + v41 + 52) = v42;
      *(unsigned int *)((char *)a2 + v41 + 56) = 0;
      *(unsigned int *)((char *)a2 + v41 + 60) = 3;
      *(_QWORD *)((char *)a2 + v41 + 64) = 0LL;
    }
LABEL_58:
    v43 = 0;
    v44 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    while ( v39 < a2[9] && v38 )
    {
      if ( IsPci3MsiInterrupt((__int64)&a2[8 * v39 + 10]) )
      {
        do
        {
          if ( !v44 )
            goto LABEL_69;
          while ( 1 )
          {
            v45 = 1LL << v43;
            if ( ((1LL << v43) & v44) != 0 )
              break;
            ++v43;
          }
          ProcNumber.Group = v68;
          ProcNumber.Number = v43;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( ProcessorIndexFromNumber == -1 )
            goto LABEL_106;
          v44 &= ~(1LL << v43++);
        }
        while ( *(_BYTE *)(56LL * ProcessorIndexFromNumber + *((_QWORD *)v4 + 4) + 4) );
        v47 = 8LL * v39;
        LOWORD(a2[v47 + 11]) |= 4u;
        ++v67;
        a2[v47 + 12] = -2;
        a2[v47 + 13] = -2;
        HIWORD(a2[v47 + 14]) = v68;
        *(_QWORD *)&a2[v47 + 16] = v45;
        v3 = 0;
        LOWORD(a2[v47 + 14]) = 4;
        a2[v47 + 15] = 3;
        *(_BYTE *)(ProcessorIndexFromNumber + Pool) = 1;
        v44 &= ~*(_QWORD *)(*((_QWORD *)v4 + 4) + 56LL * ProcessorIndexFromNumber + 24);
        if ( --v38 )
        {
          if ( !v44 )
          {
LABEL_69:
            if ( v68 >= (unsigned int)*v4 - 1 )
              goto LABEL_106;
            v48 = 2LL * ++v68;
            v3 = 0;
            v43 = 0;
            v44 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8 * v48 + 8);
          }
        }
      }
      ++v39;
    }
    v49 = 0;
    v69 = 1;
    v50 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    while ( v39 < a2[9] )
    {
      if ( IsPci3MsiInterrupt((__int64)&a2[8 * v39 + 10]) )
      {
        do
        {
          if ( !v50 )
            goto LABEL_81;
          while ( 1 )
          {
            v51 = 1LL << v49;
            if ( ((1LL << v49) & v50) != 0 )
              break;
            ++v49;
          }
          ProcNumber.Group = v3;
          ProcNumber.Number = v49;
          v52 = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( v52 == -1 )
            goto LABEL_106;
          v50 &= ~(1LL << v49++);
        }
        while ( *(_BYTE *)(56LL * v52 + *((_QWORD *)v4 + 4) + 4) != 1 );
        ++v74;
        v53 = 8LL * v39;
        LOWORD(a2[v53 + 11]) |= 4u;
        a2[v53 + 12] = -2;
        a2[v53 + 13] = -2;
        LOWORD(a2[v53 + 14]) = 4;
        HIWORD(a2[v53 + 14]) = v3;
        a2[v53 + 15] = 3;
        *(_QWORD *)&a2[v53 + 16] = v51;
        *(_BYTE *)(v52 + Pool) = 1;
        v50 &= ~*(_QWORD *)(56LL * v52 + *((_QWORD *)v4 + 4) + 24);
        if ( !v50 )
        {
LABEL_81:
          if ( v3 >= (unsigned int)*v4 - 1 )
            break;
          ++v3;
          v49 = 0;
          v50 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * v3 + 8);
        }
      }
      ++v39;
    }
    v54 = 0;
    v55 = 0;
    v56 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    if ( v39 >= a2[9] )
    {
LABEL_106:
      v9 = (void *)Pool;
      goto LABEL_107;
    }
    while ( 1 )
    {
      if ( !IsPci3MsiInterrupt((__int64)&a2[8 * v39 + 10]) )
        goto LABEL_105;
      while ( 1 )
      {
        if ( !v56 )
          goto LABEL_97;
        while ( ((1LL << v54) & v56) == 0 )
          ++v54;
        ProcNumber.Group = v55;
        ProcNumber.Number = v54;
        v57 = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( v57 == -1 )
          goto LABEL_106;
        v58 = v57;
        v59 = 56LL * v57;
        v56 &= ~(1LL << v54);
        if ( *(unsigned __int8 *)(v59 + *((_QWORD *)v4 + 4) + 4) == v69 && !*(_BYTE *)(v57 + Pool) )
          break;
        ++v54;
      }
      v60 = 8LL * v39;
      LOWORD(a2[v60 + 11]) |= 4u;
      a2[v60 + 12] = -2;
      a2[v60 + 13] = -2;
      LOWORD(a2[v60 + 14]) = 4;
      HIWORD(a2[v60 + 14]) = v55;
      a2[v60 + 15] = 3;
      *(_QWORD *)&a2[v60 + 16] = 1LL << v54;
      *(_BYTE *)(v58 + Pool) = 1;
      if ( v69 == 1 )
        ++v74;
      else
        ++v67;
      ++v54;
      v56 &= ~*(_QWORD *)(v59 + *((_QWORD *)v4 + 4) + 24);
      if ( v56 )
        goto LABEL_105;
LABEL_97:
      if ( v55 < (unsigned int)*v4 - 1 )
        break;
      if ( v39 < a2[9] - 1 )
      {
        if ( v74 >= *((_DWORD *)v4 + 14) )
        {
          if ( v67 >= *((_DWORD *)v4 + 13) )
            goto LABEL_106;
          v69 = 0;
        }
        v55 = 0;
        v56 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
        goto LABEL_104;
      }
LABEL_105:
      if ( ++v39 >= a2[9] )
        goto LABEL_106;
    }
    v56 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * ++v55 + 8);
LABEL_104:
    v54 = 0;
    goto LABEL_105;
  }
  v15 = 0;
  v73 = v14 - v7 + v2 + 1;
  v16 = 0;
  while ( v15 < a2[9] )
  {
    if ( !IsPci3MsiInterrupt((__int64)&a2[8 * v15 + 10]) )
      goto LABEL_24;
    if ( v19 )
    {
      while ( !_bittest64(&v19, v20) )
        ++v20;
    }
    if ( g_HeterogenousCPU )
    {
      if ( v10 )
      {
        v21 = 0;
        v10 = 0;
LABEL_20:
        v22 = 0LL;
        v23 = 0;
        goto LABEL_21;
      }
      v21 = 4;
    }
    else if ( v21 != 4 )
    {
      goto LABEL_20;
    }
    v22 = 1LL << v20;
    v23 = v16;
LABEL_21:
    v24 = 8 * v18;
    LOWORD(a2[v24 + 11]) |= 4u;
    *(_QWORD *)&a2[v24 + 16] = v22;
    a2[v24 + 12] = -2;
    a2[v24 + 13] = -2;
    LOWORD(a2[v24 + 14]) = v21;
    HIWORD(a2[v24 + 14]) = v23;
    a2[v24 + 15] = 3;
    if ( (v19 & ~(1LL << v20)) == 0 )
    {
      if ( v16 >= (unsigned int)*v4 - 1 )
      {
        v15 = v17 + 1;
        break;
      }
      ++v16;
    }
LABEL_24:
    v15 = v17 + 1;
  }
  v25 = a2[9];
  while ( v15 < v25 )
  {
    if ( IsPci3MsiInterrupt((__int64)&a2[8 * v15 + 10]) )
    {
      if ( v29 )
      {
        while ( !_bittest64(&v29, v28) )
          ++v28;
      }
      v30 = 8 * v27;
      LOWORD(a2[v30 + 11]) |= 4u;
      v15 = v26 + 1;
      a2[v30 + 12] = -2;
      a2[v30 + 13] = -2;
      a2[v30 + 14] = 4;
      a2[v30 + 15] = 3;
      *(_QWORD *)&a2[v30 + 16] = 1LL << v28;
      break;
    }
    v15 = v26 + 1;
  }
  v31 = a2[9];
  while ( v15 < v31 )
  {
    if ( IsPci3MsiInterrupt((__int64)&a2[8 * v15 + 10]) )
    {
      do
      {
        if ( !IsPci3MsiInterrupt((__int64)&a2[8 * v32 + 10]) && v33 != v35 )
        {
          v36 = 8LL * v35;
          *(_OWORD *)&a2[v36 + 10] = *v34;
          *(_OWORD *)&a2[v36 + 14] = v34[1];
        }
        v32 = v33 + 1;
      }
      while ( v32 < a2[9] );
      break;
    }
    v15 = v32 + 1;
  }
  v9 = 0LL;
LABEL_107:
  v2 = v73;
LABEL_108:
  if ( v70 )
  {
    v61 = 0;
    for ( i = 0; i < a2[9]; ++i )
    {
      v63 = 8LL * i;
      if ( BYTE1(a2[v63 + 10]) != 1 || (a2[v63 + 11] & 1) == 0 )
      {
        if ( i != v61 )
        {
          v64 = 8LL * v61;
          *(_OWORD *)&a2[v64 + 10] = *(_OWORD *)&a2[v63 + 10];
          *(_OWORD *)&a2[v64 + 14] = *(_OWORD *)&a2[v63 + 14];
        }
        ++v61;
      }
    }
    v2 += v61 - i;
  }
  memmove(&a2[8 * v2 + 10], &a2[8 * a2[9] + 10], *a2 - (32 * a2[9] + 40));
  v65 = a2[9];
  if ( v65 > v2 )
    memset_0((char *)a2 + *a2 - 32LL * (v65 - v2), 0, 32LL * (v65 - v2));
  a2[9] = v2;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52436152u);
  return 0LL;
}
