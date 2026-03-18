/*
 * XREFs of ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x18004AFC8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::FlushQueuedStateChanges(CExpressionManager *this)
{
  unsigned int v1; // r14d
  char *i; // rsi
  void *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax

  v1 = 0;
  for ( i = (char *)this + 272; v1 < *((_DWORD *)this + 74); ++v1 )
  {
    v5 = *(_QWORD *)i;
    CBaseExpression::NotifyAnimationStateChanged(
      *(_QWORD *)(*(_QWORD *)i + 16LL * v1 + 8),
      *(unsigned int *)(*(_QWORD *)i + 16LL * v1));
    v6 = *(_QWORD *)(v5 + 16LL * v1 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v4 = *(void **)i;
  *((_DWORD *)i + 6) = 0;
  if ( v4 != *((void **)i + 1) )
  {
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *(_QWORD *)i = *((_QWORD *)i + 1);
    *((_DWORD *)i + 5) = *((_DWORD *)i + 4);
  }
}
