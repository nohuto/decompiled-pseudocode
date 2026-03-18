/*
 * XREFs of UsbhHubIsrWorker @ 0x140001440
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecrementHubIsrWorkerReference @ 0x1400015BC (UsbhDecrementHubIsrWorkerReference.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 */

__int64 __fastcall UsbhHubIsrWorker(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  KIRQL v5; // r10
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx

  FdoExt(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 2001883977;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a1;
        *(_QWORD *)(v7 + 24) = a3;
      }
    }
  }
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v8 = a1->DeviceExtension;
        if ( v8 )
        {
          v9 = *((_QWORD *)v8 + 111)
             + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
          *(_DWORD *)v9 = 1902400329;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = a1;
          *(_QWORD *)(v9 + 24) = a3;
        }
      }
    }
    v10 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v10 + 8) != a3 + 160 || (v11 = *(_QWORD **)(a3 + 168), *v11 != a3 + 160) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v5);
    UsbhHubProcessIsr(a1);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v5);
  }
  return UsbhDecrementHubIsrWorkerReference(a1);
}
