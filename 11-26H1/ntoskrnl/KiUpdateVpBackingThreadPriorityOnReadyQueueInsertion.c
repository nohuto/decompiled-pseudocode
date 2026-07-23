/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402261D0
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1)
{
  bool v2; // di
  _KERNEL_SHADOW_STACK_LIMIT **v3; // rbx
  _KERNEL_SHADOW_STACK_LIMIT *ExtendedFeatureDisableMask; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback);
      v3 = (_KERNEL_SHADOW_STACK_LIMIT **)(a1 + 1008);
      if ( *v3 == (_KERNEL_SHADOW_STACK_LIMIT *)1 )
      {
        ExtendedFeatureDisableMask = (_KERNEL_SHADOW_STACK_LIMIT *)KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask;
        v2 = KiSupervisorXStateFeaturesLock.KernelShadowStackLimit.AllFields == (_QWORD)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
        if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit )
          __fastfail(3u);
        *v3 = &KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
        v3[1] = ExtendedFeatureDisableMask;
        ExtendedFeatureDisableMask->AllFields = (unsigned __int64)v3;
        KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask = (unsigned __int64)v3;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback);
      if ( v2 )
        KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.Spare35[1], 0);
    }
  }
}
