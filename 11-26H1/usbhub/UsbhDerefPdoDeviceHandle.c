/*
 * XREFs of UsbhDerefPdoDeviceHandle @ 0x140011B50
 * Callers:
 *     UsbhPdoSetDeviceData @ 0x1400105DC (UsbhPdoSetDeviceData.c)
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x140011644 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1400163A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004035C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhGetHubNodeInfo @ 0x140055574 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1400557E0 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhDerefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  KSPIN_LOCK *v8; // rsi
  __int64 v9; // rdx
  KIRQL v10; // bp
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax

  v4 = (unsigned int)a4;
  v8 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc(v8);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v12 = 825054788;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = a3;
      }
    }
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v9 = *(_QWORD *)(a1 + 64);
        if ( v9 )
        {
          v9 = 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884))
             + *(_QWORD *)(v9 + 888);
          *(_DWORD *)v9 = 841832004;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = a2;
          *(_QWORD *)(v9 + 24) = v4;
        }
      }
    }
  }
  v13 = FdoExt(a1, v9, 0LL, v11);
  if ( *(_QWORD *)(v13 + 4472) )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v13 + 4472))(
      *(_QWORD *)(v13 + 4232),
      a2,
      a3,
      (unsigned int)v4);
  KeReleaseSpinLock(v8, v10);
}
