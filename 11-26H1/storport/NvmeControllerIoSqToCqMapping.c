/*
 * XREFs of NvmeControllerIoSqToCqMapping @ 0x1400F74F8
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerIoSqToCqMappingForHeteroPlatform @ 0x1400F7948 (NvmeControllerIoSqToCqMappingForHeteroPlatform.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F958C (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerIoSqToCqMapping(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  _DWORD *Pool; // rsi
  unsigned int v5; // r15d
  __int64 v6; // rdx
  int v7; // r11d
  __int64 v8; // r9
  unsigned __int16 *v9; // r15
  int v10; // ecx
  unsigned int v11; // r13d
  _WORD *v12; // rbp
  _DWORD *v13; // rax
  unsigned int v14; // edx
  unsigned int i; // ecx
  bool v16; // zf
  unsigned __int16 *v17; // r14
  unsigned int j; // r9d
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  unsigned int v21; // r15d
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // r8d
  unsigned int k; // r8d
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned int v34; // eax
  unsigned __int16 v35; // dx
  __int64 v36; // rax
  unsigned int v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  _DWORD *v40; // [rsp+40h] [rbp-58h]
  char v41; // [rsp+A0h] [rbp+8h]
  unsigned int v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 128);
  v2 = 0;
  v38 = 0;
  Pool = 0LL;
  v41 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 144) & 0x1000;
  v7 = *(_DWORD *)(v1 + 416) & 0x200;
  v39 = (unsigned int)v6;
  v43 = v7;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
  {
    v13 = (_DWORD *)(a1 + 908);
    v11 = 0;
    v40 = (_DWORD *)(a1 + 908);
    v12 = (_WORD *)(a1 + 26);
    v17 = (unsigned __int16 *)(a1 + 22);
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(v1 + 8);
  v9 = (unsigned __int16 *)(a1 + 26);
  v10 = *(unsigned __int16 *)(a1 + 26);
  v42 = 4 * v10 + 8;
  v38 = 4 * *(unsigned __int16 *)(a1 + 22) + 8;
  if ( v42 <= v38 )
    v10 = *(unsigned __int16 *)(a1 + 22);
  v11 = 4 * v10 + 8;
  Pool = (_DWORD *)RaidAllocatePool(256LL, v11, 1380147538LL, v8);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v12 = v9;
  v13 = (_DWORD *)(a1 + 908);
  v40 = (_DWORD *)(a1 + 908);
  if ( *(_DWORD *)(a1 + 908) <= 1u )
    goto LABEL_15;
  *Pool = 1;
  Pool[1] = *v9;
  v40 = (_DWORD *)(a1 + 908);
  if ( (unsigned int)NvmeControllerQueryStorMQProperty(a1, 2147483656LL, v42) )
  {
    v13 = (_DWORD *)(a1 + 908);
LABEL_15:
    v5 = v42;
    v17 = (unsigned __int16 *)(a1 + 22);
    v7 = v43;
    v6 = v39;
    goto LABEL_16;
  }
  v14 = *v9;
  for ( i = 0; i < v14; ++i )
  {
    if ( Pool[i + 2] >= *(_DWORD *)(a1 + 908) )
      break;
  }
  v7 = v43;
  v13 = (_DWORD *)(a1 + 908);
  v5 = v42;
  v16 = i == v14;
  v6 = v39;
  v17 = (unsigned __int16 *)(a1 + 22);
  v40 = (_DWORD *)(a1 + 908);
  if ( v16 )
  {
    v41 = 1;
    v40 = (_DWORD *)(a1 + 908);
  }
LABEL_16:
  for ( j = 0; j < (unsigned __int16)*v12; v13 = v40 )
  {
    if ( !v6 || v7 )
    {
      *(_DWORD *)(((unsigned __int64)j << 7) + *(_QWORD *)(a1 + 864) + 24) = 0;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)j << 7);
      if ( *v13 == 1 )
      {
        v20 = *(_QWORD *)(a1 + 912) + 32LL * j;
      }
      else if ( v41 )
      {
        v20 = *(_QWORD *)(a1 + 912) + 32LL * (unsigned int)Pool[j + 2];
      }
      else
      {
        v6 = v39;
        v20 = *(_QWORD *)(a1 + 912) + 32LL * ((j + 1) % *v13);
        if ( *(_BYTE *)(a1 + 1728) == 1 )
          Pool[j + 2] = *(_DWORD *)v20;
      }
      *(_DWORD *)(v19 + 24) = *(_DWORD *)v20;
      *(_QWORD *)(v20 + 24) = v19;
    }
    ++j;
  }
  if ( *(_BYTE *)(a1 + 1728) != 1 )
  {
    v21 = v38;
    goto LABEL_42;
  }
  if ( v6 && !v7 )
    NvmeControllerSetStorMQProperty(a1, 2147483656LL, v5);
  memset_0(Pool, 0, v11);
  v21 = v38;
  *Pool = 1;
  Pool[1] = *(unsigned __int16 *)(a1 + 22);
  if ( (unsigned int)NvmeControllerQueryStorMQProperty(a1, 2147483655LL, v38) )
    goto LABEL_42;
  v22 = *(unsigned __int16 *)(a1 + 22);
  v23 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
    {
      v24 = Pool[v23 + 2];
      if ( !v24 || v24 > (unsigned __int16)*v12 )
        goto LABEL_42;
    }
    while ( ++v23 < v22 );
  }
  if ( v23 != v22 )
  {
LABEL_42:
    if ( (int)NvmeControllerIoSqToCqMappingForHeteroPlatform(a1) < 0 )
    {
      v27 = *v17;
      v28 = 0;
      v29 = 0;
      if ( *v17 )
      {
        v30 = (unsigned __int16)*v12;
        LOWORD(v31) = *v17;
        do
        {
          v27 = v31;
          if ( v29 >= v30 )
            break;
          v32 = v28++;
          *(_WORD *)(192 * v32 + *(_QWORD *)(a1 + 728) + 138) = *(_WORD *)(((unsigned __int64)v29 << 7)
                                                                         + *(_QWORD *)(a1 + 864)
                                                                         + 32);
          v31 = *v17;
          v30 = (unsigned __int16)*v12;
          v27 = *v17;
          v29 = v29 + 1 < v30 ? v29 + 1 : 0;
        }
        while ( v28 < v31 );
      }
      v33 = 1;
      v34 = v27;
      while ( v28 < v34 )
      {
        v35 = v27;
        if ( v33 <= (unsigned __int16)*v12 )
        {
          v36 = v28++;
          *(_WORD *)(192 * v36 + *(_QWORD *)(a1 + 728) + 138) = v33++;
          v35 = *v17;
        }
        v27 = v35;
        v34 = v35;
        if ( v33 >= (unsigned __int16)*v12 )
          v33 = 1;
      }
    }
    goto LABEL_53;
  }
  for ( k = 0; k < *(unsigned __int16 *)(a1 + 22); *(_WORD *)(192 * v26 + *(_QWORD *)(a1 + 728) + 138) = Pool[v26 + 2] )
    v26 = k++;
LABEL_53:
  if ( *(_BYTE *)(a1 + 1728) == 1 )
    NvmeControllerSetStorMQProperty(a1, 2147483655LL, v21);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x52436152u);
  return v2;
}
