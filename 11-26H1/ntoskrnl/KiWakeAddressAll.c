/*
 * XREFs of KiWakeAddressAll @ 0x1402BA5A8
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ?KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x1402BA3C0 (-KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     KiReleaseThreadStateLock @ 0x1402BA4C0 (KiReleaseThreadStateLock.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     KiHaltOnAddress @ 0x1403E57E8 (KiHaltOnAddress.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1403EB1E0 (IoReleaseCancelSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
          result = HvlWakeVirtualProcessors(&v14);
        else
          result = HalRequestIpi(0LL, &v14);
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
