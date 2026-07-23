/*
 * XREFs of KiWakeAddressAll @ 0x140305268
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140268B10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1402F9DF0 (IoReleaseCancelSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402F9EB0 (IopVerifyDeviceObjectOnStack.c)
 *     ?KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x140305080 (-KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KeQueryValuesThread @ 0x140305730 (KeQueryValuesThread.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 * Callees:
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 KiWakeAddressAll()
{
  unsigned __int64 v0; // r8
  bool v1; // di
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v8; // rdx
  int v9; // ett
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-128h] BYREF
  _QWORD v15[33]; // [rsp+28h] [rbp-120h] BYREF

  v1 = KeDisableInterrupts();
  v2 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v0 >> 5) & 0x7F], 0LL);
  result = (__int64)memset_0(v15, 0, 0x100uLL);
  v5 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    v14 = 2097153LL;
    memset_0(v15, 0, 0x100uLL);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      v11 = *(_QWORD *)(v5 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v5 + 24), 1) )
      {
        v12 = *(_QWORD *)(v10 + 200);
        v13 = *(unsigned __int8 *)(v10 + 208);
        if ( (unsigned __int16)v14 > (unsigned __int16)v13 )
          goto LABEL_17;
        if ( WORD1(v14) > (unsigned __int16)v13 )
          break;
      }
LABEL_18:
      v5 = v11;
      if ( !v11 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          result = HvlWakeVirtualProcessors((__int64)&v14);
        else
          result = HalRequestIpi(0, (__int64)&v14);
        goto LABEL_2;
      }
    }
    LOWORD(v14) = v13 + 1;
LABEL_17:
    v15[v13] |= v12;
    goto LABEL_18;
  }
LABEL_2:
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v8 = (unsigned int)result;
        LODWORD(v8) = result & 0xFFDFFFFF;
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, SchedulerAssist, v4);
    }
    _enable();
  }
  return result;
}
