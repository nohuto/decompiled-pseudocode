/*
 * XREFs of PoHandleIrp @ 0x1404804CC
 * Callers:
 *     IopPoHandleIrp @ 0x140480478 (IopPoHandleIrp.c)
 * Callees:
 *     PoDeviceReleaseIrp @ 0x140212D70 (PoDeviceReleaseIrp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopEnableIrpWatchdog @ 0x1403B49DC (PopEnableIrpWatchdog.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     PoDeviceAcquireIrp @ 0x1404806EC (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x14048089C (PopDispatchQuerySetIrp.c)
 *     PopDiagTraceDIrpAfterSx @ 0x14048093C (PopDiagTraceDIrpAfterSx.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _DWORD *v3; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  char v9; // bp
  PDEVICE_OBJECT DeviceObject; // r14
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 40);
  v9 = 1;
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( !v8 )
  {
    if ( *(_BYTE *)(v5 + 184) == 2 && !*(_DWORD *)(v5 + 188) && *(_DWORD *)(v5 + 192) == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      _InterlockedAnd((volatile signed __int32 *)(v7 + 296), 0xFFFF7FFF);
      v16 = *(_QWORD *)(v7 + 264);
      if ( v16 )
        PopEnableIrpWatchdog(v16);
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( *(_BYTE *)(v5 + 184) == 2 && *(_DWORD *)(v5 + 188) == 1 )
    {
      _m_prefetchw((const void *)(v7 + 296));
      v11 = *(_DWORD *)(v7 + 296);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 296), v11, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x8000) != 0 )
        PopDiagTraceDIrpAfterSx(Irp);
    }
LABEL_12:
    p_Flags = &DeviceObject->Flags;
    if ( (DeviceObject->Flags & 0x8000) == 0 )
      goto LABEL_13;
    goto LABEL_17;
  }
  PoDeviceReleaseIrp((__int64)Irp, *(_BYTE *)(v5 + 184), v8);
  p_Flags = &DeviceObject->Flags;
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x8000) != 0 || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
    goto LABEL_12;
  v9 = 0;
LABEL_17:
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(Irp, a2, DeviceObject);
  if ( !v9 )
    return v9;
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
    return v9;
  }
LABEL_13:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopDispatchQuerySetIrp(Irp);
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v3 = 259;
  return v9;
}
