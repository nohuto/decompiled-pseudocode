/*
 * XREFs of KeDeregisterBoundCallback @ 0x1405E4820
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x140959620 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140B5EF7C (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1, signed __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  char v7; // si

  CurrentThread = KeGetCurrentThread();
  v4 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v5 = ExReferenceCallBackBlock(&KiBoundsCallback, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    if ( v5[1].Count == a1 )
      v7 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v5);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v6);
    if ( v7 )
    {
      ExWaitForCallBacks(v6);
      PspUserApcKernelRoutine(v6);
      v4 = 0;
    }
  }
  KeLeaveCriticalRegion();
  return v4;
}
