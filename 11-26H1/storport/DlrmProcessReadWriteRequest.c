/*
 * XREFs of DlrmProcessReadWriteRequest @ 0x14012D264
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     DlrmFetchOrAllocateWorkItem @ 0x14007DC8C (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x14007DCF0 (DlrmQueueWorkItemAndSignalEvent.c)
 *     DlrmCheckAndScheduleScaleDown @ 0x14012CD88 (DlrmCheckAndScheduleScaleDown.c)
 *     DlrmCheckAndScheduleScaleUp @ 0x14012CE6C (DlrmCheckAndScheduleScaleUp.c)
 */

void __fastcall DlrmProcessReadWriteRequest(__int64 a1, unsigned int a2)
{
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v5; // r14d
  int v6; // edi
  __int64 WorkItem; // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 3) == 1 )
    {
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      v5 = *(_DWORD *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 60);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 24), a2);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 32), a2);
      if ( !DlrmCheckAndScheduleScaleUp(a1, v5, v6)
        && !DlrmCheckAndScheduleScaleDown(a1, v5, UnbiasedInterruptTime)
        && UnbiasedInterruptTime - *(_QWORD *)(a1 + 168) >= 0x165A0BC00LL )
      {
        WorkItem = DlrmFetchOrAllocateWorkItem(a1);
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = 7;
          DlrmQueueWorkItemAndSignalEvent(a1, (struct _LIST_ENTRY *)WorkItem);
        }
      }
    }
  }
}
