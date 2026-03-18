/*
 * XREFs of UsbhRefPdoDeviceHandle @ 0x140017B50
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140002A30 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoSetDeviceData @ 0x140017554 (UsbhPdoSetDeviceData.c)
 *     UsbhPdoRemoveCleanup @ 0x1400177EC (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x140017908 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x140017984 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x140017A4C (UsbhClearPdoIdleReady.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x14001F69C (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B9B4 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004085C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhGetHubNodeInfo @ 0x140054FF4 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x140055270 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  int v19; // r9d
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // r8
  __int64 v25; // rcx

  v4 = a4;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a2 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v10 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v11 = *(int *)(v10 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 824923716;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
  }
  v14 = *(int *)(v10 + 1152);
  if ( (_DWORD)v14 == 2 )
  {
    v15 = *(_QWORD *)(v10 + 1160);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 724260420;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v4;
          *(_QWORD *)(v17 + 24) = v15;
        }
      }
    }
    v18 = FdoExt(a1);
    if ( *((_QWORD *)v18 + 558) )
    {
      v19 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))v18 + 558))(
              *((_QWORD *)v18 + 529),
              v15,
              a3,
              (unsigned int)v4);
      if ( v19 >= 0 )
      {
        v20 = *(_QWORD *)(v10 + 1160);
LABEL_16:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v21 = *(_QWORD *)(a1 + 64);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
              *(_DWORD *)v22 = 841700932;
              *(_QWORD *)(v22 + 16) = v19;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 24) = v20;
            }
          }
        }
        goto LABEL_20;
      }
    }
    else
    {
      v19 = -1073741822;
    }
    v20 = 0LL;
    goto LABEL_16;
  }
  if ( (unsigned int)v14 < 2 && (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 556488260;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = a2;
        *(_QWORD *)(v25 + 24) = v14;
      }
    }
  }
  v20 = 0LL;
LABEL_20:
  KeReleaseSpinLock(v8, v9);
  return v20;
}
