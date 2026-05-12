/*
 * XREFs of GatewayRegisterForEmptyNotification @ 0x14002ECBC
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x14002EBC0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 * Callees:
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall GatewayRegisterForEmptyNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64, __int64))
{
  __int64 v9; // rcx
  _QWORD **v10; // rax
  _QWORD *v11; // rdi
  PIO_WORKITEM WorkItem; // rax
  unsigned int v13; // esi
  __int64 v14; // rdi
  _DWORD *v15; // r9
  struct _IO_WORKITEM *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  memset(&v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_BYTE *)(a1 + 209) = 0;
  v9 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(v9 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 136), &LockHandle);
    v10 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 144LL);
    v11 = *v10;
    while ( v11 != v10 )
    {
      if ( (unsigned __int8)RaUnitCheckForwardIoOutstanding(v11 - 8) )
      {
        if ( *(_QWORD *)(a1 + 312)
          || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 48) + 8LL)),
              (*(_QWORD *)(a1 + 312) = WorkItem) != 0LL) )
        {
          *(_BYTE *)(a1 + 209) = 1;
          break;
        }
      }
      v11 = (_QWORD *)*v11;
      v10 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 144LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v13 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1032LL) )
  {
    while ( 1 )
    {
      v14 = a1 + 320LL * v13;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14, &v18);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&v18);
      if ( ++v13 >= *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1032LL) )
        goto LABEL_16;
    }
    *(_BYTE *)(v14 + 208) = 1;
    *(_QWORD *)(v14 + 224) = a4;
    *(_QWORD *)(v14 + 216) = a3;
    *(_QWORD *)(v14 + 232) = a2;
    *(_QWORD *)(v14 + 240) = a5;
    KeReleaseInStackQueuedSpinLock(&v18);
  }
LABEL_16:
  v15 = *(_DWORD **)(a1 + 48);
  if ( v13 < v15[258] )
    return 0;
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( *(_BYTE *)(a1 + 209) )
    {
      v15 = *(_DWORD **)(a1 + 48);
LABEL_21:
      v16 = *(struct _IO_WORKITEM **)(a1 + 312);
      *(_QWORD *)(a1 + 240) = a5;
      *(_QWORD *)(a1 + 232) = a2;
      *(_QWORD *)(a1 + 216) = a3;
      *(_QWORD *)(a1 + 224) = a4;
      IoQueueWorkItem(v16, GatewayWaitForForwardIo, DelayedWorkQueue, v15);
      return 0;
    }
  }
  else if ( *(_BYTE *)(a1 + 209) )
  {
    goto LABEL_21;
  }
  a5(a2, a3, a4);
  return 1;
}
