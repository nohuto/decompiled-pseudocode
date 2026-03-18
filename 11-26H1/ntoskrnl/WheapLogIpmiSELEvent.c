/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1406D7320
 * Callers:
 *     WheaSelLogErrorPkt @ 0x1406D4428 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x1406D4514 (WheaSelLogEvent.c)
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406D72F8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // r9d

  v4 = Size;
  if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
  {
    memset_0((void *)&CmpCallbackListLock.AbCompletedIoBoostCount, 0, 0xFECuLL);
    *(_DWORD *)&CmpCallbackListLock.PriorityFloorCounts[16] = 1381192527;
    *(_DWORD *)&CmpCallbackListLock.PriorityFloorCounts[20] = 1;
    v6 = 4075;
    *(_DWORD *)&CmpCallbackListLock.PriorityFloorCounts[28] = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    CmpCallbackListLock.PriorityFloorSummary = v6;
    *(_DWORD *)&CmpCallbackListLock.PriorityFloorCounts[24] = v6 + 20;
    memmove((void *)&CmpCallbackListLock.AbCompletedIoBoostCount, Src, v6);
    if ( WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
    {
      if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
        guard_dispatch_icall_no_overrides(
          *(_QWORD *)CmpCallbackListLock.PriorityFloorCounts,
          &CmpCallbackListLock.PriorityFloorCounts[16]);
      _InterlockedExchange((_DWORD *)&CmpCallbackListLock.PropagateBoostsEntry.Next + 1, 0);
    }
  }
}
