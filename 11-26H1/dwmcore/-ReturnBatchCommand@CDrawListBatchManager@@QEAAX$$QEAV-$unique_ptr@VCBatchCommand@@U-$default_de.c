/*
 * XREFs of ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071A70
 * Callers:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180071880 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801B88BC (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBatchManager::ReturnBatchCommand(__int64 a1, int **a2)
{
  int *v2; // rdi
  int v5; // edx
  int *v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // edi
  unsigned int v12; // eax
  _DWORD *v13; // r14
  int *v14; // r15
  __int64 v15; // rcx
  HANDLE ProcessHeap; // rax
  int v17; // edx
  int v18; // edx
  int v19; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int *v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( v5 )
  {
    if ( v5 == 4 )
    {
      v13 = v2 + 26;
      v14 = (int *)*((_QWORD *)v2 + 12);
      if ( v2 + 26 != v14 )
      {
        if ( v14 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v14);
        }
        *((_QWORD *)v2 + 12) = v13;
        *v13 = 0;
      }
      v15 = *((_QWORD *)v2 + 1);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    else
    {
      v17 = v5 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
          }
        }
      }
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v2 + 1);
    }
  }
  *v2 = 0;
  v6 = *a2;
  *a2 = 0LL;
  v7 = *(_DWORD *)(a1 + 64);
  v21 = v6;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v11 = -2147024362;
    v12 = 183;
    goto LABEL_7;
  }
  if ( v8 <= *(_DWORD *)(a1 + 60) )
  {
    v9 = v7;
    result = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(result + 8 * v9) = v6;
    *(_DWORD *)(a1 + 64) = v8;
    return result;
  }
  result = DynArrayImpl<0>::AddMultipleAndSet(a1 + 40, 8LL, 1LL, &v21);
  v11 = result;
  if ( (int)result < 0 )
  {
    v12 = 194;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v12, 0LL);
    ModuleFailFastForHRESULT(v11, retaddr);
  }
  return result;
}
