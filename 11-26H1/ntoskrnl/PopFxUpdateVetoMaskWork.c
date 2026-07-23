/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140B420B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1404CEAE4 (PoFxActivateDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404DB8B8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxUpdateVetoMaskWork(PVOID P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rdi
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi

  v4 = *((_QWORD *)P + 2);
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry,
      v6,
      (__int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( LOBYTE(PopFxBlockingDeviceListLock.MutantListHead.Blink) )
  {
    Flink = PopFxBlockingDeviceListLock.MutantListHead.Flink;
    if ( PopFxBlockingDeviceListLock.MutantListHead.Flink->Flink != (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ThreadListEntry.Blink )
      __fastfail(3u);
    *(_QWORD *)P = &PopFxBlockingDeviceListLock.ThreadListEntry.Blink;
    *((_QWORD *)P + 1) = Flink;
    Flink->Flink = (struct _LIST_ENTRY *)P;
    PopFxBlockingDeviceListLock.MutantListHead.Flink = (struct _LIST_ENTRY *)P;
  }
  else
  {
    ++HIDWORD(PopFxBlockingDeviceListLock.MutantListHead.Blink);
    KeResetEvent((PRKEVENT)&PopFxBlockingDeviceListLock.792);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
    v11 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
    PoFxActivateDevice(v11);
    PopPepUpdateDripsDeviceVetoMask(v4, *((_DWORD *)P + 6));
    PoFxIdleDevice(v11);
    PopFxDereferenceDevice(v4, 2);
    ExFreePoolWithTag(P, 0x4D584650u);
    ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL, 0LL, v12);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL);
    v15 = v13;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry,
        v13,
        (__int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( !--HIDWORD(PopFxBlockingDeviceListLock.MutantListHead.Blink) )
      KeSetEvent((PRKEVENT)&PopFxBlockingDeviceListLock.792, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
}
