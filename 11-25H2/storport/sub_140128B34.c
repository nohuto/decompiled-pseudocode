/*
 * XREFs of sub_140128B34 @ 0x140128B34
 * Callers:
 *     sub_140128B00 @ 0x140128B00 (sub_140128B00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140128B34(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 20) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 20);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 12LL) & 1) == 0 )
  {
    if ( *(_DWORD *)(v3 + 68) != 1 || (*(_DWORD *)(v3 + 76) & 4) != 0 )
    {
      *(_DWORD *)(v3 + 76) |= 2u;
      if ( PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             2u,
             (POWER_STATE)1,
             (PREQUEST_POWER_COMPLETE)sub_140127FB0,
             Context,
             0LL) == 259 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) &= ~2u;
      ++*(_DWORD *)(*((_QWORD *)Context + 20) + 240LL);
    }
    else
    {
      ++*(_DWORD *)(v3 + 252);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(*((_QWORD *)Context + 20) + 8LL));
}
