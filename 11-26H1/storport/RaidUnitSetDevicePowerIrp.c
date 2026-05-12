/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x14003D4FC
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x14003CC5C (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(__int64 Context, PIRP Irp)
{
  __int64 v2; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(Context + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 51LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, Context, Irp);
  }
  if ( *(_DWORD *)(Context + 548) != 4
    || Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
  {
    return RaidUnitProcessSetDevicePowerIrp((char *)Context, Irp);
  }
  if ( (*(_BYTE *)(v2 + 108) & 8) == 0
    && *(_QWORD *)(v2 + 5024)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3616), 1, 0) )
  {
    RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
  if ( *(int *)(v2 + 348) <= 1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return RaidUnitProcessSetDevicePowerIrp((char *)Context, Irp);
  }
  *(_BYTE *)(Context + 2041) = 1;
  *(_QWORD *)(Context + 2048) = Irp;
  RaUnitAcquireRemoveLock(Context, (__int64)Irp, 1);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5008), (PSLIST_ENTRY)(Context + 2064));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 259LL;
}
