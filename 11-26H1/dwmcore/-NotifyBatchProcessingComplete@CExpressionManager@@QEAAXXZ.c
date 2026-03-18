/*
 * XREFs of ?NotifyBatchProcessingComplete@CExpressionManager@@QEAAXXZ @ 0x18018B900
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::NotifyBatchProcessingComplete(CExpressionManager *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 82); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
  }
}
