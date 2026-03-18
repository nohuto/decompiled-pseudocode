/*
 * XREFs of PopFxIdleComponent @ 0x140395020
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x140393C00 (PopFxResidentTimeoutRoutine.c)
 *     PoFxIdleComponent @ 0x140394FE0 (PoFxIdleComponent.c)
 *     PopFxDeactivateComponentDependencies @ 0x140395E1C (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
 *     PopFxComponentRelationsCleanup @ 0x140470E54 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140471064 (PopFxDeviceRelationsCleanup.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1404711B8 (PopFxNotifyPostDIrpCompletion.c)
 *     PoFxAddComponentRelation @ 0x140603F90 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140604610 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140604860 (PoFxRemoveDeviceRelation.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x14021A008 (PopFxArmResidentTimer.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PopFxQueueWorkOrder @ 0x14039486C (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
    v7 = *(_QWORD *)(v6 + 144);
    v5 = InterruptTimePrecise;
    if ( v7 < InterruptTimePrecise )
    {
      do
      {
        v11 = v7;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5, v7);
        v7 = v12;
        if ( v11 == v12 )
          break;
        _mm_pause();
      }
      while ( v12 < v5 );
    }
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 144);
  }
  if ( (*(_DWORD *)(v6 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v6, *(int *)(v6 + 88), 0LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v6 + 88)) == 0x80000000 )
  {
    if ( !v5 )
      v5 = RtlGetInterruptTimePrecise(&v13);
    if ( (*(_DWORD *)(v6 + 92) & 2) == 0
      && !BYTE1(stru_140E66FF0.Padding[1])
      && v5 - v7 < (unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 96)) == 1 )
      {
        if ( _InterlockedIncrement((_DWORD *)&stru_140F12420.SwapListEntry + 2) == 1 )
          PopFxArmResidentTimer(0);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
    {
      v8 = *(_QWORD *)(v6 + 144);
      while ( v8 < v5 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5, v8);
        if ( v9 == v8 )
          break;
        _mm_pause();
      }
    }
    if ( (a3 & 2) != 0 )
    {
      PopFxQueueWorkOrder(v6 + 24, BugCheckParameter2);
    }
    else
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, v5);
      PopFxIdleWorker(BugCheckParameter2);
      if ( KeGetCurrentIrql() < 2u )
      {
        v14 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v14);
      }
    }
  }
}
