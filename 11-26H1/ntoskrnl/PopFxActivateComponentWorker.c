/*
 * XREFs of PopFxActivateComponentWorker @ 0x14037AE70
 * Callers:
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1403955A8 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1403955D8 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopFxActivateComponentDependencies @ 0x140469FA0 (PopFxActivateComponentDependencies.c)
 *     PopPluginNotifyActive @ 0x140481B4C (PopPluginNotifyActive.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r8
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rsi
  char v15; // al

  PopFxDeviceCriticalRegionEnter();
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 244));
  if ( *(_BYTE *)(v9 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v9 + 248), 0, 0);
    PopFxBugCheck(0x607uLL, BugCheckParameter2, 0xFFFFFFFFC0000056uLL, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 304));
  LOBYTE(v8) = v10;
  v11 = PopFxActivateComponentDependencies(a2, v8);
  if ( a3 )
  {
    PopFxCompleteComponentActivation(BugCheckParameter2);
  }
  else if ( v11 )
  {
    v13 = *(unsigned int *)(a2 + 16);
    if ( a4 )
      memset_0(a4, 0, 0x40uLL);
    v14 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_BYTE *)(v14 + 124) )
    {
      LOBYTE(v12) = 1;
      PopPluginNotifyActive(*(_QWORD *)(v14 + 32), (unsigned int)v13, v12);
    }
    v15 = PopPepProcessEvent(v14, v14 + 208 * v13 + 192, 6LL);
    if ( v15 )
    {
      if ( !a4 )
        PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
      if ( v15 == 1 )
        PopFxProcessWork(0LL, a4);
    }
  }
  return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
