/*
 * XREFs of KiCompleteBootProcessorContextInitialization @ 0x1405EA85C
 * Callers:
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405E9AB4 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiResetBootProcessorApicMask @ 0x1407B98C8 (KiResetBootProcessorApicMask.c)
 *     MmAllocateIsrStack @ 0x140875DEC (MmAllocateIsrStack.c)
 *     KiInitializePrcbContext @ 0x140BF430C (KiInitializePrcbContext.c)
 */

__int64 KiCompleteBootProcessorContextInitialization()
{
  KPCR *Pcr; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  unsigned int i; // ebx
  char *v4; // rax
  char *v5; // [rsp+30h] [rbp+8h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  result = KiInitializePrcbContext(CurrentPrcb, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0LL)
      && (v5 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80, (unsigned __int8)MmAllocateIsrStack(&v5, 0LL)) )
    {
      for ( i = 1; i <= 4; ++i )
      {
        v4 = *(char **)((char *)Pcr->NtTib.StackBase + 8 * i + 28);
        v5 = v4;
        if ( KiKvaShadow )
          v5 = (char *)(*((_QWORD *)v4 + 1) + 32LL);
        if ( !(unsigned __int8)MmAllocateIsrStack(&v5, 0LL) )
          return 3221225495LL;
      }
      result = KiAllocateAndStartBootProcessorSchedulerStructures(CurrentPrcb);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
