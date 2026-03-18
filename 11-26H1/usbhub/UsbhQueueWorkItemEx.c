/*
 * XREFs of UsbhQueueWorkItemEx @ 0x14002C4D0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140029C80 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002B710 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhHubSSH_Timer @ 0x14002C400 (UsbhHubSSH_Timer.c)
 *     UsbhPindicatorTimer @ 0x14003F170 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003FCE0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003FE60 (UsbhQueueOvercurrentReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x14004FFA0 (UsbhDriverNotFoundTimer.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v8; // r15d
  unsigned __int8 v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 Pool2; // rbx
  _DWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, _QWORD); // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rsi
  void (__fastcall *v25)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v27; // [rsp+28h] [rbp-50h]

  v8 = a2;
  v10 = *((_BYTE *)FdoExt(a1) + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  v11 = 0;
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884))
            + *(_QWORD *)(v12 + 888);
        *(_DWORD *)v13 = 1297568097;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a6;
        *(_QWORD *)(v13 + 24) = a4;
      }
    }
  }
  Pool2 = a7;
  if ( a7 )
    goto LABEL_28;
  v15 = FdoExt(a1);
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884))
            + *(_QWORD *)(v16 + 888);
        *(_DWORD *)v17 = 1296783201;
        *(_QWORD *)(v17 + 16) = a5;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 24) = a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  Pool2 = ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( Pool2 )
  {
    v18 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)FdoExt(a1) + 596);
    if ( v18 )
    {
      v19 = v18(a1, v10);
      if ( v19 )
      {
        *(_QWORD *)(Pool2 + 40) = v19;
        *(_DWORD *)(Pool2 + 12) = a5;
        *(_QWORD *)(Pool2 + 24) = a3;
        *(_DWORD *)Pool2 = 1230463592;
        *(_DWORD *)(Pool2 + 4) = a6;
        *(_QWORD *)(Pool2 + 32) = a4;
        *(_QWORD *)(Pool2 + 16) = a1;
        ExInterlockedInsertTailList((PLIST_ENTRY)v15 + 174, (PLIST_ENTRY)(Pool2 + 48), (PKSPIN_LOCK)v15 + 350);
        if ( *(_DWORD *)(Pool2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v20 = *(_QWORD *)(a1 + 64);
            if ( v20 )
            {
              v21 = *(_QWORD *)(v20 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
              *(_DWORD *)v21 = 726485847;
              *(_QWORD *)(v21 + 8) = 0LL;
              *(_QWORD *)(v21 + 16) = 0LL;
              *(_QWORD *)(v21 + 24) = Pool2;
            }
          }
        }
        goto LABEL_26;
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  Pool2 = 0LL;
LABEL_26:
  if ( !Pool2 )
    return 3221225626LL;
  v8 = a2;
LABEL_28:
  _InterlockedIncrement((volatile signed __int32 *)(Pool2 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884))
            + *(_QWORD *)(v22 + 888);
        *(_DWORD *)v23 = 726488145;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = a6;
        *(_QWORD *)(v23 + 24) = Pool2;
      }
    }
  }
  v24 = *(_QWORD *)(Pool2 + 40);
  v25 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v25 )
  {
    LOBYTE(v27) = v10;
    v25(a1, v24, &UsbhHubWorker, v8, Pool2, v27);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
