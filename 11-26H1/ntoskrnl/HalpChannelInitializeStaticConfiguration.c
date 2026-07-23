/*
 * XREFs of HalpChannelInitializeStaticConfiguration @ 0x140CBACD8
 * Callers:
 *     HalpInitializeConfigurationFromMadt @ 0x140CB76B0 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     HalpValidateMpns @ 0x14078A0CC (HalpValidateMpns.c)
 *     HalpSelectFeasibleLowPowerState @ 0x140CBB0E8 (HalpSelectFeasibleLowPowerState.c)
 */

void HalpChannelInitializeStaticConfiguration()
{
  unsigned __int16 v0; // r13
  unsigned __int16 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int16 i; // si
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int16 v20; // si
  unsigned int j; // edi
  __int64 v22; // r10
  char v23; // cl
  char v24; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int16 v25; // [rsp+78h] [rbp+10h]
  unsigned __int64 v26; // [rsp+80h] [rbp+18h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  v26 = 0LL;
  v24 = 0;
  v27 = 0LL;
  if ( dword_140F87A80 )
  {
    if ( *(_BYTE *)(HalpAcpiMpst + 8) != 1 )
      goto LABEL_46;
    v0 = *(_WORD *)(HalpAcpiMpst + 40);
    v1 = (unsigned __int16 *)(HalpAcpiMpst + 44);
    v2 = *(unsigned int *)(HalpAcpiMpst + 4);
    v3 = -1LL;
    v25 = v0;
    v4 = HalpAcpiMpst + v2;
    v5 = 0;
    v6 = 0LL;
    v7 = 0LL;
    for ( i = 0; i < v0; ++i )
    {
      if ( (*(_BYTE *)v1 & 1) != 0 )
      {
        if ( (*(_BYTE *)v1 & 4) != 0 )
          goto LABEL_46;
        v9 = *((unsigned int *)v1 + 6);
        if ( (_DWORD)v9 )
        {
          if ( (unsigned __int64)&v1[v9 + 16] > v4 )
            goto LABEL_46;
          qsort(v1 + 16, (unsigned int)v9, 2uLL, (int (__cdecl *)(const void *, const void *))HalpMpsValueAscendingSort);
          v26 = *((_QWORD *)v1 + 1);
          v10 = v26 >> 12;
          v11 = v26 >> 12;
          if ( v26 >> 12 >= v3 )
            v11 = v3;
          v3 = v11;
          v27 = *((_QWORD *)v1 + 2);
          v12 = (v27 >> 12) + v10 - 1;
          v13 = v12;
          if ( v12 <= v6 )
            v13 = v6;
          v7 += v27 >> 12;
          v14 = 0;
          v6 = v13;
          v15 = 0;
          if ( HalpNumaMemoryRanges )
          {
            if ( v10 >= *(_QWORD *)HalpNumaMemoryRanges && v10 >= *((_QWORD *)HalpNumaMemoryRanges + 2) )
            {
              v16 = 1;
              do
              {
                ++v16;
                ++v15;
              }
              while ( v10 >= *((_QWORD *)HalpNumaMemoryRanges + 2 * v16) );
              v0 = v25;
              v14 = 0;
            }
            v15 = *((_DWORD *)HalpNumaMemoryRanges + 4 * v15 + 2);
            if ( v12 >= *(_QWORD *)HalpNumaMemoryRanges && v12 >= *((_QWORD *)HalpNumaMemoryRanges + 2) )
            {
              v17 = 1;
              do
              {
                ++v17;
                ++v14;
              }
              while ( v12 >= *((_QWORD *)HalpNumaMemoryRanges + 2 * v17) );
              v0 = v25;
            }
            if ( *((_DWORD *)HalpNumaMemoryRanges + 4 * v14 + 2) != v15 )
              goto LABEL_46;
          }
          v18 = 2LL * v5;
          *((_QWORD *)qword_140F87A78 + v18) = v1;
          *((_WORD *)qword_140F87A78 + 4 * v18 + 4) = v1[1];
          ++v5;
          *((_WORD *)qword_140F87A78 + 4 * v18 + 5) = v15;
        }
      }
      v1 = (unsigned __int16 *)((char *)v1 + *((unsigned int *)v1 + 1));
    }
    if ( (!HalpNumaMemoryRanges || v3 == HalpMinNumaPage && v6 == HalpMaxNumaPage && v7 == HalpNumaPageCount)
      && (unsigned __int64)(v1 + 1) <= v4
      && (v19 = *v1, (unsigned __int64)&v1[14 * v19 + 2] <= v4)
      && (qsort(qword_140F87A78, v5, 0x10uLL, HalpChannelMpnIdSort), (unsigned int)HalpValidateMpns()) )
    {
      qsort(qword_140F87A78, v5, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpChannelAssignmentSort);
      v20 = 0;
      for ( j = 0; j < v5; ++j )
      {
        v22 = *((_QWORD *)qword_140F87A78 + 2 * j);
        v26 = *(_QWORD *)(v22 + 8);
        *((_QWORD *)qword_140F87A78 + 2 * j) = v26 >> 12;
        if ( j && *((_WORD *)qword_140F87A78 + 8 * j + 5) == *((_WORD *)qword_140F87A78 + 8 * j - 3) )
        {
          if ( *((_WORD *)qword_140F87A78 + 8 * j + 4) != *((_WORD *)qword_140F87A78 + 8 * j - 4) )
            ++v20;
        }
        else
        {
          v20 = 0;
        }
        *((_WORD *)qword_140F87A78 + 8 * j + 6) = v20;
        if ( (unsigned int)HalpSelectFeasibleLowPowerState(v22, &v24, (unsigned __int16)v19, v1 + 2) != 1 )
          goto LABEL_46;
        v23 = v24;
        if ( v24 )
        {
          *((_BYTE *)qword_140F87A78 + 16 * j + 14) = 1;
          *((_BYTE *)qword_140F87A78 + 16 * j + 15) = v23;
        }
      }
      qsort(qword_140F87A78, v5, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpChannelAscendingSort);
      *((_QWORD *)qword_140F87A78 + 2 * j) = -1LL;
      *(_QWORD *)qword_140F87A78 = 0LL;
    }
    else
    {
LABEL_46:
      dword_140F87A80 = 0;
      qword_140F87A78 = 0LL;
    }
  }
}
