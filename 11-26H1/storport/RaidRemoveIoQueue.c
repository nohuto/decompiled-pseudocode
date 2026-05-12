/*
 * XREFs of RaidRemoveIoQueue @ 0x140057CBC
 * Callers:
 *     RaUnitFlushQueueSrb @ 0x14009B4F0 (RaUnitFlushQueueSrb.c)
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidRemovePendingDeviceQueue @ 0x140057CFC (RaidRemovePendingDeviceQueue.c)
 */

__int64 __fastcall RaidRemoveIoQueue(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = RaidRemovePendingDeviceQueue(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 120;
    v3 = *(_QWORD *)(*(_QWORD *)(v1 - 120 + 184) + 8LL);
    if ( *(_BYTE *)(v3 + 2) != 40 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(v3 + 40);
  }
  return v2;
}
