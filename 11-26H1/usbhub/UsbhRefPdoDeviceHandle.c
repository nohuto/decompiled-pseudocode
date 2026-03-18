/*
 * XREFs of UsbhRefPdoDeviceHandle @ 0x1400118A0
 * Callers:
 *     UsbhPdoSetDeviceData @ 0x1400105DC (UsbhPdoSetDeviceData.c)
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x140011644 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1400163A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B41C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004035C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhGetHubNodeInfo @ 0x140055574 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1400557E0 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // rdx
  KIRQL v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx

  v4 = (unsigned int)a4;
  v8 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc(v8);
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = *(int *)(v11 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v13 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v13 = 824923716;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v12;
      }
    }
  }
  v14 = *(int *)(v11 + 1152);
  if ( (_DWORD)v14 == 2 )
  {
    v15 = *(_QWORD *)(v11 + 1160);
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
          *(_DWORD *)v9 = 724260420;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = v4;
          *(_QWORD *)(v9 + 24) = v15;
        }
      }
    }
    v16 = FdoExt(a1, v9, v14, 0LL);
    if ( *(_QWORD *)(v16 + 4464) )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v16 + 4464))(
              *(_QWORD *)(v16 + 4232),
              v15,
              a3,
              (unsigned int)v4);
      if ( v17 >= 0 )
      {
        v18 = *(_QWORD *)(v11 + 1160);
LABEL_16:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v19 = *(_QWORD *)(a1 + 64);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
              *(_DWORD *)v20 = 841700932;
              *(_QWORD *)(v20 + 16) = v17;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 24) = v18;
            }
          }
        }
        goto LABEL_20;
      }
    }
    else
    {
      v17 = -1073741822;
    }
    v18 = 0LL;
    goto LABEL_16;
  }
  if ( (unsigned int)v14 < 2 && (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884))
            + *(_QWORD *)(v22 + 888);
        *(_DWORD *)v23 = 556488260;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = a2;
        *(_QWORD *)(v23 + 24) = v14;
      }
    }
  }
  v18 = 0LL;
LABEL_20:
  KeReleaseSpinLock(v8, v10);
  return v18;
}
