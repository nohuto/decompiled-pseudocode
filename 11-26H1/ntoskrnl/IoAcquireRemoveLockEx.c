/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1404578E0
 * Callers:
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404FA998 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxAcpiForwardNotification @ 0x140612104 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiUnregisterDevice @ 0x14061241C (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x140658C00 (DifIoAcquireRemoveLockExWrapper.c)
 *     ViFilterDispatchGeneric @ 0x140C3BFD0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140C3C260 (ViFilterDispatchPower.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v11; // r14
  KIRQL v12; // al

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else
  {
    if ( RemlockSize == 120 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v11 = (struct _LIST_ENTRY *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Tag;
        *(_QWORD *)(Pool2 + 24) = File;
        *(_DWORD *)(Pool2 + 32) = Line;
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
        v11->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
        RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v11;
        KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v12);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
      }
    }
    return 0;
  }
}
