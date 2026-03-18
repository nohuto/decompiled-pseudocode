/*
 * XREFs of UsbhHubQueueProcessChangeWorker @ 0x1400045E8
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140002018 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x140022A00 (Usbh_PCE_wDone_Action.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhHubQueueProcessChangeWorker(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  __int64 v5; // rdx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r9

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
          v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
          v8 = *(_DWORD *)(v6 + 884);
          v9 = *(_QWORD *)(v6 + 888);
          v10 = 32LL * ((v7 - 1) & v8);
          *(_DWORD *)(v10 + v9) = 1464029265;
          *(_QWORD *)(v10 + v9 + 8) = 0LL;
          *(_QWORD *)(v10 + v9 + 16) = a2;
          *(_QWORD *)(v10 + v9 + 24) = 0LL;
        }
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(a2 + 2440), 1u);
    IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
  }
  KeReleaseSpinLock(v2, v4);
}
