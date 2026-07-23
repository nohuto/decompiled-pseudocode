/*
 * XREFs of KiEpfInitialize @ 0x140CD1B44
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405BC0A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KiEpfDrainCompletionQueue @ 0x1405F986C (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void KiEpfInitialize()
{
  ULONG_PTR Pool2; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  if ( (HvlpFlags & 0x100000) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 0x4A0uLL, 0x4850654Bu);
    KiEpfHashTable = Pool2;
    if ( Pool2 )
    {
      v3 = 37LL;
      do
      {
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_QWORD *)(Pool2 + 16) = 0LL;
        *(_DWORD *)(Pool2 + 24) = 0;
        Pool2 += 32LL;
        --v3;
      }
      while ( v3 );
      LODWORD(KiEpfCompletionDpc) = 275;
      qword_140F14EF8 = (__int64)KiEpfCompletionDpcRoutine;
      qword_140F14F00 = 0LL;
      qword_140F14F18 = 0LL;
      qword_140F14EF0 = 0LL;
      if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v6, &v5, v1, v2) >= 0 )
      {
        KiEpfCompletionQueueSize = (unsigned int)(v5 - 16) >> 3;
        KiEpfCompletionQueue = v6;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
        KiEpfDrainCompletionQueue();
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
}
