/*
 * XREFs of DlrmCheckAndScheduleScaleDown @ 0x14012CD88
 * Callers:
 *     DlrmProcessReadWriteRequest @ 0x14012D264 (DlrmProcessReadWriteRequest.c)
 * Callees:
 *     DlrmGetScaleThreshold @ 0x14004F21C (DlrmGetScaleThreshold.c)
 *     DlrmFetchOrAllocateWorkItem @ 0x14007DC8C (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x14007DCF0 (DlrmQueueWorkItemAndSignalEvent.c)
 */

char __fastcall DlrmCheckAndScheduleScaleDown(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  unsigned __int64 ScaleThreshold; // r8
  int v6; // r11d
  __int64 WorkItem; // rax

  v3 = 0;
  if ( a1 && a3 - *(_QWORD *)(a1 + 48) >= (unsigned __int64)g_DlrmScaleDownTimeWindow100ns )
  {
    ScaleThreshold = DlrmGetScaleThreshold(a2, *(_WORD *)(a1 + 4), 0);
    if ( v6 <= 1 || *(_QWORD *)(a1 + 32) / 1024LL > ScaleThreshold )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      *(_QWORD *)(a1 + 48) = KeQueryUnbiasedInterruptTime();
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 1u) )
    {
      return 1;
    }
    else
    {
      WorkItem = DlrmFetchOrAllocateWorkItem(a1);
      if ( WorkItem )
      {
        *(_DWORD *)(WorkItem + 16) = 3;
        DlrmQueueWorkItemAndSignalEvent(a1, (struct _LIST_ENTRY *)WorkItem);
        ++*(_DWORD *)(a1 + 228);
        return 1;
      }
    }
  }
  return v3;
}
