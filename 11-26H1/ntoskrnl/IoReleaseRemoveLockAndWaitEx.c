/*
 * XREFs of IoReleaseRemoveLockAndWaitEx @ 0x1404E7BC0
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14061241C (PopFxAcpiUnregisterDevice.c)
 *     DifIoReleaseRemoveLockAndWaitExWrapper @ 0x14065E090 (DifIoReleaseRemoveLockAndWaitExWrapper.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140C30D1C (VfRemLockReportBadReleaseAndWaitTag.c)
 */

void __stdcall IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  struct _LIST_ENTRY *Blink; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  RemoveLock->Common.Removed = 1;
  _InterlockedDecrement(&RemoveLock->Common.IoCount);
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) > 1 )
    KeWaitForSingleObject(&RemoveLock->Common.RemoveEvent, Executive, 0, 0, 0LL);
  if ( RemlockSize == 120
    && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0 )
  {
    Blink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink->Blink;
    if ( Tag != Blink
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseAndWaitTag(
                           (ULONG_PTR)RemoveLock,
                           (ULONG_PTR)Tag,
                           (ULONG_PTR)Blink,
                           retaddr)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
    ExFreePoolWithTag(RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink, 0);
    RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MmBadPointer;
  }
}
