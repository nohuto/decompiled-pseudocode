/*
 * XREFs of UsbhHubQueueProcessChangeWorker @ 0x1400274B4
 * Callers:
 *     Usbh_PCE_wDone_Action @ 0x14001DD70 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140024E40 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhHubQueueProcessChangeWorker(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx

  v2 = (KSPIN_LOCK *)(a2 + 2448);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
  if ( *(_DWORD *)(a2 + 2412) != 1 )
  {
    *(_DWORD *)(a2 + 2412) = 1;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v5 = *(_QWORD *)(a2 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 64);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_QWORD *)(v7 + 24) = 0LL;
          *(_DWORD *)v7 = 1464029265;
          *(_QWORD *)(v7 + 16) = a2;
        }
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(a2 + 2440), 1u);
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a2 + 2456),
      (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
      DelayedWorkQueue,
      (PVOID)a2);
  }
  KeReleaseSpinLock(v2, v4);
}
