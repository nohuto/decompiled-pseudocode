/*
 * XREFs of UsbhHubIsrWorker @ 0x140030360
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x1400304E4 (UsbhDecrementHubIsrWorkerReference.c)
 */

__int64 __fastcall UsbhHubIsrWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  KIRQL v6; // r10
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rdx

  FdoExt((__int64)DeviceObject);
  v6 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v9 = *((_DWORD *)DeviceExtension + 221);
        v10 = *((_QWORD *)DeviceExtension + 111);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 2001883977;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = DeviceObject;
        *(_QWORD *)(v11 + v10 + 24) = a3;
      }
    }
  }
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v12 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v12 )
        {
          v13 = _InterlockedExchangeAdd(v12 + 220, 0xFFFFFFFF);
          v14 = *((_DWORD *)v12 + 221);
          v15 = *((_QWORD *)v12 + 111);
          v16 = 32LL * ((v13 - 1) & v14);
          *(_DWORD *)(v16 + v15) = 1902400329;
          *(_QWORD *)(v16 + v15 + 8) = 0LL;
          *(_QWORD *)(v16 + v15 + 16) = DeviceObject;
          *(_QWORD *)(v16 + v15 + 24) = a3;
        }
      }
    }
    v17 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v17 + 8) != a3 + 160 || (v18 = *(_QWORD **)(a3 + 168), *v18 != a3 + 160) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v6);
    UsbhHubProcessIsr(DeviceObject, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v6);
  }
  return UsbhDecrementHubIsrWorkerReference(DeviceObject);
}
