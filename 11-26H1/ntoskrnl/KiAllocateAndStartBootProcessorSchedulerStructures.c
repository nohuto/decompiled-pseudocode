/*
 * XREFs of KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405EC424
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405ED1CC (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAllocateDpcDelegateThread @ 0x1405EC528 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateIdleSearchStructures @ 0x1405EC5B4 (KiAllocateIdleSearchStructures.c)
 *     KiStartPrcbThread @ 0x1405EEF90 (KiStartPrcbThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405F8EE4 (KiAllocateSmtIsolationThread.c)
 *     KiAllocateForceParkingData @ 0x1405FB2A0 (KiAllocateForceParkingData.c)
 */

__int64 __fastcall KiAllocateAndStartBootProcessorSchedulerStructures(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int IdleSearchStructures; // edi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1[24];
  v9 = 0LL;
  v10 = 0LL;
  v3 = *(unsigned __int16 *)(v1 + 138);
  IdleSearchStructures = KiAllocateDpcDelegateThread(&v9, *(unsigned __int16 *)(v1 + 138));
  if ( IdleSearchStructures >= 0 )
  {
    IdleSearchStructures = KiAllocateSmtIsolationThread(&v10, v3);
    if ( IdleSearchStructures >= 0 )
    {
      IdleSearchStructures = KiAllocateIdleSearchStructures(a1);
      if ( IdleSearchStructures >= 0 )
      {
        IdleSearchStructures = KiAllocateForceParkingData(a1);
        if ( IdleSearchStructures >= 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
          v6 = v9;
          KiStartPrcbThread(v9, a1);
          a1[1799] = v6;
          v7 = v10;
          if ( v10 )
          {
            KiStartPrcbThread(v10, a1);
            a1[4568] = v7;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return (unsigned int)IdleSearchStructures;
}
