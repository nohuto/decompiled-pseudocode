/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1405CDDA0
 * Callers:
 *     IopDeleteDriver @ 0x140AC9150 (IopDeleteDriver.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140B620FC (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1, signed __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 i; // rsi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 *v7; // rcx
  __int64 v8; // rdx

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v5 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i], a2);
      v6 = v5;
      if ( v5 )
      {
        v7 = &IopUpdatePriorityCallbackRoutine[i];
        if ( v5[4].Count == a1 )
        {
          if ( ExCompareExchangeCallBack(v7, 0LL, (__int64)v5) )
          {
            _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
            ExDereferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i], v6);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8);
            ExWaitForCallBacks(v6);
            PspUserApcKernelRoutine(v6);
            *(_DWORD *)(a1 + 16) &= ~0x200u;
            return;
          }
        }
        else
        {
          ExDereferenceCallBackBlock(v7, v5);
        }
      }
    }
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2);
  }
}
