/*
 * XREFs of KeAllocateKernelHiberSwapShadowStacks @ 0x1405F061C
 * Callers:
 *     VslAllocateSecureHibernateResources @ 0x140791F40 (VslAllocateSecureHibernateResources.c)
 *     VslFreeSecureHibernateResources @ 0x1407922C8 (VslFreeSecureHibernateResources.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405F0718 (KiAllocateProcessorHiberSwapShadowStacks.c)
 */

__int64 __fastcall KeAllocateKernelHiberSwapShadowStacks(unsigned int a1)
{
  int ProcessorHiberSwapShadowStacks; // ebx
  __int64 Prcb; // rax
  __int64 v5; // rax
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h]
  __int16 v8; // [rsp+30h] [rbp-10h]
  int v9; // [rsp+32h] [rbp-Eh]
  __int16 v10; // [rsp+36h] [rbp-Ah]
  unsigned int v11; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !(_BYTE)KiKernelCetEnabled )
    return 0LL;
  ProcessorHiberSwapShadowStacks = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
  if ( a1 )
  {
    if ( !KiHiberSwapStacksAllocated )
    {
      v7 = *(__int64 *)((char *)&stru_140FC01F0.116 + 4);
      v8 = 0;
      p_WaitRegister = &stru_140FC01F0.WaitRegister;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, (unsigned __int16 **)&p_WaitRegister) )
      {
        Prcb = KeGetPrcb(v11);
        ProcessorHiberSwapShadowStacks = KiAllocateProcessorHiberSwapShadowStacks(Prcb, a1);
        if ( ProcessorHiberSwapShadowStacks < 0 )
        {
          a1 = 0;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
LABEL_9:
    v7 = *(__int64 *)((char *)&stru_140FC01F0.116 + 4);
    v8 = 0;
    p_WaitRegister = &stru_140FC01F0.WaitRegister;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(&v11, (unsigned __int16 **)&p_WaitRegister) )
        break;
      v5 = KeGetPrcb(v11);
      ProcessorHiberSwapShadowStacks = KiAllocateProcessorHiberSwapShadowStacks(v5, a1);
    }
    while ( ProcessorHiberSwapShadowStacks >= 0 );
  }
  KiHiberSwapStacksAllocated = a1;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
  return (unsigned int)ProcessorHiberSwapShadowStacks;
}
