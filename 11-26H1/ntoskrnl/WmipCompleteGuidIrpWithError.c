/*
 * XREFs of WmipCompleteGuidIrpWithError @ 0x1404C964C
 * Callers:
 *     WmipReceiveNotifications @ 0x1403DB2FC (WmipReceiveNotifications.c)
 *     WmipDeleteMethod @ 0x140A0D4B0 (WmipDeleteMethod.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x1403FEABC (WmipClearIrpObjectList.c)
 */

void __fastcall WmipCompleteGuidIrpWithError(__int64 a1)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    WmipClearIrpObjectList(v2);
    v2 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 48) = -1073741816;
    IofCompleteRequest((PIRP)v2, 0);
  }
}
