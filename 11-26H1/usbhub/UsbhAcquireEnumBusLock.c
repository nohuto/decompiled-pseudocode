/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x14000A5D8
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x140057E20 (UsbhDriverResetPort.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhAcquireEnumBusLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  signed __int32 v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // rcx
  signed __int32 v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  KIRQL v27; // r10

  v4 = (unsigned __int16)a3;
  v7 = FdoExt(a1, a2, a3, a4);
  v8 = *(unsigned int *)(v7 + 3072);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1398096481;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = v8;
        *(_QWORD *)(v13 + v12 + 24) = v4;
      }
    }
  }
  v14 = *(unsigned int *)(v7 + 3072);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 880), 0xFFFFFFFF);
        v17 = *(_DWORD *)(v15 + 884);
        v18 = *(_QWORD *)(v15 + 888);
        v19 = 32LL * ((v16 - 1) & v17);
        *(_DWORD *)(v19 + v18) = 1129071201;
        *(_QWORD *)(v19 + v18 + 8) = 0LL;
        *(_QWORD *)(v19 + v18 + 16) = v14;
        *(_QWORD *)(v19 + v18 + 24) = a2;
      }
    }
  }
  if ( *(_QWORD *)(v7 + 4392) )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 3064));
    if ( *(_DWORD *)(v7 + 3072) == (_DWORD)v4 || *(_QWORD *)(v7 + 3080) == a2 )
    {
      Log(a1, 4, 2017613139, *(unsigned int *)(v7 + 3072), v4);
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 3064), v27);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 3064), v20);
      Usbh_SSH_Event(a1, 6LL, a2);
      (*(void (__fastcall **)(_QWORD))(v7 + 4392))(*(_QWORD *)(v7 + 4232));
      v21 = *(unsigned int *)(v7 + 3072);
      if ( (UsbhLogMask & 4) != 0 && a1 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 880), 0xFFFFFFFF);
          v24 = *(_DWORD *)(v22 + 884);
          v25 = *(_QWORD *)(v22 + 888);
          v26 = 32LL * ((v23 - 1) & v24);
          *(_DWORD *)(v26 + v25) = 1398096492;
          *(_QWORD *)(v26 + v25 + 8) = 0LL;
          *(_QWORD *)(v26 + v25 + 16) = v21;
          *(_QWORD *)(v26 + v25 + 24) = v4;
        }
      }
      *(_DWORD *)(v7 + 3072) = v4;
      *(_QWORD *)(v7 + 3080) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 3096));
      *(_QWORD *)(v7 + 3088) = UsbhIncHubBusy(a1, a2, a1, 1430416236, 1);
    }
  }
}
