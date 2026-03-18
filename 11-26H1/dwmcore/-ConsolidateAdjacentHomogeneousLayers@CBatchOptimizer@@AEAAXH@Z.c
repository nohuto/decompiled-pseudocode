/*
 * XREFs of ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18007166C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180071880 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180071958 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180174D00 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(CBatchOptimizer *this, int a2)
{
  __int64 v3; // r9
  char *v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  char *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // r10
  int *v14; // r11
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r8
  int *v20; // r10
  int *i; // rsi
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  char v25; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 != *((_DWORD *)this + 8) - 1 )
  {
    v3 = a2;
    v4 = (char *)this + 520 * *((int *)this + a2 + 12);
    if ( *((_DWORD *)v4 + 25) )
    {
      if ( *((_QWORD *)v4 + 14) )
      {
        v5 = *((int *)this + a2 + 13);
        v6 = a2 + 1;
        v7 = (char *)this + 520 * v5;
        if ( *((_QWORD *)v7 + 14) )
        {
          if ( *((_QWORD *)v4 + 10) == *((_QWORD *)v7 + 10)
            && *((_DWORD *)v4 + 22) == *((_DWORD *)v7 + 22)
            && v4[92] == v7[92] )
          {
            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, v6);
            if ( !*((_DWORD *)v7 + 26) )
            {
              v8 = *((_QWORD *)v4 + 14);
              v9 = *((_QWORD *)v7 + 14);
              v25 = 0;
              (*(void (__fastcall **)(__int64, __int64 *, __int64, char *))(*(_QWORD *)v8 + 72LL))(v8, &v24, v9, &v25);
              if ( !v25 )
              {
                v10 = v24;
                v24 = 0LL;
                if ( v10 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
              }
              v11 = v24;
              v24 = 0LL;
              if ( v11 )
              {
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v4 + 112, v11);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v7 + 112, v11);
                *((_DWORD *)v4 + 26) = 1;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
              }
            }
          }
        }
      }
    }
    else
    {
      v12 = a2 - 1;
      v13 = a2 - 1;
      v14 = (int *)((char *)this + 4 * v13 + 48);
      if ( !*((_DWORD *)this + 130 * *v14 + 25) )
      {
        do
        {
          if ( !v13 )
            break;
          v15 = *--v14;
          --v12;
          --v13;
        }
        while ( !*((_DWORD *)this + 130 * v15 + 25) );
      }
      v16 = a2 + 1;
      v17 = *((int *)this + 8);
      v18 = v12;
      v19 = v16;
      v20 = (int *)((char *)this + 4 * v12 + 48);
LABEL_19:
      if ( v18 != v3 )
      {
        for ( i = (int *)((char *)this + 4 * v19 + 48); ; ++i )
        {
          if ( v19 == v17 )
          {
LABEL_22:
            ++v12;
            ++v18;
            ++v20;
            goto LABEL_19;
          }
          v22 = 520LL * *i;
          v23 = *(_DWORD *)((char *)this + v22 + 100);
          if ( *(_QWORD *)((char *)this + v22 + 80) == *((_QWORD *)this + 65 * *v20 + 10) )
            break;
          if ( v23 )
            goto LABEL_22;
          ++v16;
          ++v19;
        }
        if ( v23 )
          CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, v16--);
        CBatchOptimizer::DiscardEmptyLayers(this, v12 + 1, v16 - v12);
        CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v12);
      }
    }
  }
}
