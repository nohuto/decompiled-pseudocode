/*
 * XREFs of PopFxIdleComponent @ 0x140396DA0
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x140395980 (PopFxResidentTimeoutRoutine.c)
 *     PoFxIdleComponent @ 0x140396D60 (PoFxIdleComponent.c)
 *     PopFxDeactivateComponentDependencies @ 0x140397B9C (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 *     PopFxComponentRelationsCleanup @ 0x14046A5D4 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14046A7E4 (PopFxDeviceRelationsCleanup.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x14046A938 (PopFxNotifyPostDIrpCompletion.c)
 *     PoFxAddComponentRelation @ 0x140606A90 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140607110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140607360 (PoFxRemoveDeviceRelation.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x14021B998 (PopFxArmResidentTimer.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PopFxQueueWorkOrder @ 0x1403965EC (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorker @ 0x140397080 (PopFxIdleWorker.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  LARGE_INTEGER v5; // r8
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v5.QuadPart = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v7 = *(_QWORD *)(v6 + 144);
    v5 = InterruptTimePrecise;
    if ( v7 < InterruptTimePrecise.QuadPart )
    {
      do
      {
        v11 = v7;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5.QuadPart, v7);
        v7 = v12;
        if ( v11 == v12 )
          break;
        _mm_pause();
      }
      while ( v12 < v5.QuadPart );
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
    if ( !v5.QuadPart )
      v5 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v6 + 92) & 2) == 0 && !byte_140E676E4 && v5.QuadPart - v7 < (unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 96)) == 1 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)&PopFxBlockingDeviceListLock.StackBase) == 1 )
          PopFxArmResidentTimer(0);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
    {
      v8 = *(_QWORD *)(v6 + 144);
      while ( v8 < v5.QuadPart )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v5.QuadPart, v8);
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
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, v5.LowPart);
      PopFxIdleWorker(BugCheckParameter2);
      if ( KeGetCurrentIrql() < 2u )
      {
        v14 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v14);
      }
    }
  }
}
