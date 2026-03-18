/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x1404A61E0
 * Callers:
 *     PoRegisterSystemState @ 0x140436880 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

void __fastcall PopApplyLegacyPowerRequestFlags(PVOID Object, char a2, char a3)
{
  int v3; // ebx
  int v7; // esi
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = 2;
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 |= 1u;
  }
  v7 = a2 & 0x40;
  if ( (a3 & 0x40) != 0 )
  {
    if ( v7 )
      PopPowerRequestReferenceAcquire(Object);
    else
      PopPowerRequestReferenceRelease(Object);
  }
  else if ( v7 )
  {
    v3 |= 4u;
  }
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12D20.Header.WaitListHead.Blink, &LockHandle);
    v8 = *((_DWORD *)Object + 7);
    if ( (v8 & v3) != 0 )
    {
      *((_DWORD *)Object + 7) = v8 & ~v3;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopQueueWorkItem(&stru_140F12D20.SystemCallNumber, 0LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
