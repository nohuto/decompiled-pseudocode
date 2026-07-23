/*
 * XREFs of KeDeregisterBoundCallback @ 0x1405E7190
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140B620FC (ExWaitForCallBacks.c)
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
