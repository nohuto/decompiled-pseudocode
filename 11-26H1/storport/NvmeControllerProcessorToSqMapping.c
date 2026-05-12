/*
 * XREFs of NvmeControllerProcessorToSqMapping @ 0x1400F91C4
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F958C (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerProcessorToSqMapping(__int64 a1)
{
  _DWORD *v1; // rbp
  int v3; // edi
  _DWORD *v4; // rsi
  void *v6; // rcx
  __int64 Pool; // rax
  unsigned int v8; // r14d
  __int64 v9; // r9
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int v13; // r8d
  char v14; // r15
  unsigned int i; // r9d
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int j; // r14d
  __int64 v19; // r12
  unsigned int v20; // r8d
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned int v25; // edx
  unsigned int k; // r8d
  __int64 v27; // r14
  unsigned int v28; // r11d
  unsigned int v29; // r13d
  __int64 v30; // r12
  unsigned int v31; // r9d
  __int64 v32; // r15
  unsigned int v33; // r10d
  __int64 v34; // rdx
  void *v35; // rcx
  __int64 ProcNumber; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v37; // [rsp+88h] [rbp+20h]

  v1 = g_CpuInfo;
  v37 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !g_CpuInfo )
    return 3221225701LL;
  v6 = *(void **)(a1 + 872);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52436152u);
  Pool = RaidAllocatePool(64LL, 2LL * (unsigned int)v1[2], 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 872) = Pool;
  if ( !Pool )
    goto LABEL_6;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    goto LABEL_18;
  v8 = 4 * v1[2] + 8;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL);
  v37 = v8;
  v10 = (_DWORD *)RaidAllocatePool(256LL, v8, 1380147538LL, v9);
  v4 = v10;
  if ( v10 )
  {
    *v10 = 1;
    v10[1] = v1[2];
    if ( !(unsigned int)NvmeControllerQueryStorMQProperty(a1, 2147483654LL, v8) )
    {
      v11 = v1[2];
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = v4[v12 + 2];
          if ( !v13 || v13 > *(unsigned __int16 *)(a1 + 22) )
            break;
          if ( ++v12 >= v11 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( v12 == v11 )
        {
          v14 = 1;
          for ( i = 0; i < v11; v11 = v1[2] )
          {
            v16 = i++;
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2 * v16) = *(_WORD *)(192LL * (unsigned int)(v4[v16 + 2] - 1)
                                                                   + *(_QWORD *)(a1 + 728)
                                                                   + 136);
          }
          goto LABEL_36;
        }
      }
    }
LABEL_18:
    v17 = *(_QWORD *)(a1 + 128);
    if ( (*(_DWORD *)(v17 + 144) & 0x1000LL) != 0 && (*(_DWORD *)(v17 + 416) & 0x200) == 0 )
    {
      for ( j = 0;
            j < *(unsigned __int16 *)(a1 + 22);
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)) = *(_WORD *)(v21 + v19 + 136) )
      {
        v19 = *(_QWORD *)(a1 + 728);
        v20 = 0;
        LODWORD(ProcNumber) = 0;
        v21 = 192LL * j;
        v22 = *(_QWORD *)(a1 + 912);
        v23 = 32LL
            * *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v21 + v19 + 138) << 7)
                              + *(_QWORD *)(a1 + 864)
                              - 104);
        LOWORD(ProcNumber) = *(_WORD *)(v23 + v22 + 16);
        v24 = *(_QWORD *)(v23 + v22 + 8);
        if ( v24 )
        {
          while ( !_bittest64(&v24, v20) )
            ++v20;
        }
        BYTE2(ProcNumber) = v20;
        ++j;
      }
    }
    v25 = 0;
    for ( k = 0; ; ++k )
    {
      v11 = v1[2];
      if ( k >= v11 )
        break;
      v27 = *(_QWORD *)(a1 + 872);
      if ( !*(_WORD *)(v27 + 2LL * k) )
      {
        v28 = *(unsigned __int16 *)(a1 + 22);
        v29 = v25;
        ProcNumber = 56LL * k;
        while ( v25 < v28 )
        {
          v30 = *(_QWORD *)(a1 + 728);
          v31 = v25 + 1;
          v32 = 192LL * v25;
          if ( (*(_BYTE *)(((unsigned __int64)*(unsigned __int16 *)(v32 + v30 + 138) << 7) + *(_QWORD *)(a1 + 864) - 100) & 0xF) == *(_BYTE *)(ProcNumber + *((_QWORD *)v1 + 4) + 4) )
          {
            *(_WORD *)(v27 + 2LL * k) = *(_WORD *)(v32 + v30 + 136);
            v25 = v31 < *(unsigned __int16 *)(a1 + 22) ? v31 : 0;
            break;
          }
          v25 = v31 < v28 ? v31 : 0;
          if ( v29 == v25 )
          {
            v3 = -1073741595;
            goto LABEL_41;
          }
        }
      }
    }
    v8 = v37;
    v14 = 0;
LABEL_36:
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      if ( !v14 )
      {
        v33 = 0;
        if ( v11 )
        {
          do
          {
            v34 = v33++;
            v4[v34 + 2] = *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2 * v34);
          }
          while ( v33 < v1[2] );
        }
      }
      NvmeControllerSetStorMQProperty(a1, 2147483654LL, v8);
    }
LABEL_41:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x52436152u);
    if ( v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_44;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_44:
  v35 = *(void **)(a1 + 872);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0x52436152u);
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  return (unsigned int)v3;
}
