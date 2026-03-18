/*
 * XREFs of ?NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ @ 0x180181740
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::NotifyInteractionTrackerExpressionProcessingComplete(CExpressionManager *this)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 82) )
  {
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 296LL))(v4);
      v5 = *((_DWORD *)this + 82);
      ++v3;
    }
    while ( v3 < v5 );
    if ( v5 )
    {
      do
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 304LL))(v6);
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *((_DWORD *)this + 82) );
    }
  }
}
