/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0
 * Callers:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180070E00 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180070C04 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18007166C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  char *v1; // r8
  int v2; // edi
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  int *v9; // rdx
  __int64 v10; // rax
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rbp
  int *v14; // rdx
  char *v15; // r14
  __int64 v16; // r9
  int *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  float *v20; // rdx
  int v21; // r13d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rdx
  int v26; // ecx
  int v27; // eax
  __int64 v29; // r8
  int v30; // r11d
  _DWORD *v31; // r9
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+90h] [rbp+18h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  v1 = (char *)this + 48;
  v2 = 0;
  if ( *((_DWORD *)this + 130 * *((int *)this + 12) + 26) )
  {
    do
    {
      v4 = *((int *)v1 + 1);
      v1 += 4;
      ++v2;
    }
    while ( *((_DWORD *)this + 130 * v4 + 26) );
  }
  v5 = *((_DWORD *)this + 8);
  v34 = v5;
  v6 = v2;
  v7 = v5 - 1;
  v33 = v7;
  while ( v6 != v7 )
  {
    v8 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v8 + 100) && !*(_QWORD *)((char *)this + v8 + 112) )
    {
      v11 = v2 + 1;
      v12 = v5;
      v13 = v2 + 1;
      v36 = v5;
      while ( v13 != v12 )
      {
        v14 = (int *)((char *)this + 4 * v13 + 48);
        v15 = (char *)this + 520 * *v14;
        if ( *((_DWORD *)v15 + 26) )
        {
          do
          {
            v32 = v14[1];
            ++v14;
            ++v11;
            ++v13;
          }
          while ( *((_DWORD *)this + 130 * v32 + 26) );
        }
        else if ( *((_DWORD *)v15 + 25) == 1
               && !*((_QWORD *)v15 + 14)
               && *(_QWORD *)((char *)this + v8 + 80) == *((_QWORD *)v15 + 10) )
        {
          v16 = v13 - 1;
          v17 = (int *)((char *)this + 4 * v13 + 44);
          while ( v16 != v2 )
          {
            v18 = 520LL * *v17;
            v19 = 0LL;
            v20 = (float *)((char *)this + v18 + 284);
            while ( v19 != *(_DWORD *)((char *)this + v18 + 100) )
            {
              if ( *((float *)v15 + 72) >= *(v20 - 1)
                && v20[1] >= *((float *)v15 + 70)
                && *((float *)v15 + 73) >= *v20
                && v20[2] >= *((float *)v15 + 71) )
              {
                goto LABEL_15;
              }
              ++v19;
              v20 += 4;
            }
            --v16;
            --v17;
          }
          v21 = *((_DWORD *)v15 + 24);
          v22 = (unsigned int)(v21 - 1);
          v23 = *(_QWORD *)&v15[8 * v22 + 120];
          *((_DWORD *)v15 + 24) = v22;
          v35 = v23;
          *((_DWORD *)v15 + 25) = 0;
          v24 = 520LL * *((int *)this + v6 + 12);
          if ( v2 && *(_DWORD *)((char *)this + v24 + 100) == 20 || *(_DWORD *)((char *)this + v24 + 96) == 20 )
            CBatchOptimizer::ContinueLayer(this, v2);
          v25 = (char *)this + 520 * *((int *)this + v6 + 12);
          v26 = *((_DWORD *)v25 + 24);
          *((_DWORD *)v25 + 24) = v26 + 1;
          *(_QWORD *)&v25[8 * v26 + 120] = v35;
          if ( v2 )
            *(_OWORD *)&v25[16 * *((unsigned int *)v25 + 25) + 280] = *(_OWORD *)(v15 + 280);
          ++*((_DWORD *)v25 + 25);
          if ( v21 == 1 )
          {
            v27 = *((_DWORD *)this + 8) - 1;
            if ( v11 != v27 )
            {
              v29 = v11;
              v30 = *((_DWORD *)this + v11 + 12);
              v31 = (_DWORD *)((char *)this + 4 * v11 + 48);
              do
              {
                ++v29;
                *v31 = v31[1];
                ++v31;
              }
              while ( v29 != v27 );
              *((_DWORD *)this + v27 + 12) = v30;
            }
            --*((_DWORD *)this + 8);
            CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v11 - 1);
            return 1;
          }
          if ( CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v11) )
            return 1;
        }
LABEL_15:
        v12 = v36;
        ++v11;
        ++v13;
      }
    }
    ++v2;
    v9 = (int *)((char *)this + 4 * ++v6 + 48);
    if ( *((_DWORD *)this + 130 * *v9 + 26) )
    {
      do
      {
        v10 = v9[1];
        ++v9;
        ++v2;
        ++v6;
      }
      while ( *((_DWORD *)this + 130 * v10 + 26) );
    }
    v5 = v34;
    v7 = v33;
  }
  *((_BYTE *)this + 4240) = 0;
  return 0;
}
