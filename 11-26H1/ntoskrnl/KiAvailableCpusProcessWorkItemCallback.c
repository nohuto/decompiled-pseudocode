/*
 * XREFs of KiAvailableCpusProcessWorkItemCallback @ 0x140B05090
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 */

void __fastcall KiAvailableCpusProcessWorkItemCallback(
        _QWORD *Object,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  __int64 **v10; // r14
  __int64 **i; // rsi
  NTSTATUS v12; // eax
  HANDLE v13; // rbx
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v4 = Object[56];
  CurrentThread = KeGetCurrentThread();
  Handle = 0LL;
  v7 = (signed __int64 *)(v4 + 32);
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(v4 + 32, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 32), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v4 + 32), 0, v9, (struct _KTHREAD *)(v4 + 32));
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (__int64 **)(v4 + 40);
  for ( i = (__int64 **)*v10; i != v10; i = (__int64 **)*i )
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(i + 2));
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((unsigned __int64)v7);
  KeLeaveCriticalRegion();
  if ( (*((_DWORD *)Object + 125) & 0x40000008) == 0
    && (*((_DWORD *)Object + 383) & 0x1000) == 0
    && (*((_DWORD *)Object + 383) & 1) == 0
    && ObReferenceObjectSafeWithTag((__int64)Object, 0x7641694Bu) )
  {
    v12 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v13 = Handle;
    if ( v12 >= 0 )
      ZwUpdateWnfStateData((__int64)&WNF_PS_PROCESS_AVAILABLE_CPUS_CHANGE, 0LL);
    if ( v13 )
      ZwClose(v13);
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x7641694Bu);
  }
}
