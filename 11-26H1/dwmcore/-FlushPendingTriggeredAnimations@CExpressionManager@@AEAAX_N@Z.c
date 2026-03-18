/*
 * XREFs of ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x18018BA14
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 */

void __fastcall CExpressionManager::FlushPendingTriggeredAnimations(CExpressionManager *this, char a2)
{
  __int64 v2; // rdi
  char *i; // rbx
  void *v6; // rdi
  HANDLE ProcessHeap; // rax
  CBaseExpression *v8; // rcx

  v2 = 0LL;
  for ( i = (char *)this + 384; (unsigned int)v2 < *((_DWORD *)this + 102); v2 = (unsigned int)(v2 + 1) )
  {
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*(_QWORD *)i + 8 * v2));
    if ( a2 )
    {
      v8 = *(CBaseExpression **)(*(_QWORD *)i + 8 * v2);
      *((_QWORD *)v8 + 21) = 1LL;
      CBaseExpression::ForceDependentAnimationsDirtiedRecursive(v8);
    }
  }
  v6 = *(void **)i;
  *((_DWORD *)i + 6) = 0;
  if ( v6 != *((void **)i + 1) )
  {
    if ( v6 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    *(_QWORD *)i = *((_QWORD *)i + 1);
    *((_DWORD *)i + 5) = *((_DWORD *)i + 4);
  }
}
