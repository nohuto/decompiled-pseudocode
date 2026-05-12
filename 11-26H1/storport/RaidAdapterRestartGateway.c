/*
 * XREFs of RaidAdapterRestartGateway @ 0x14002F760
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     StorNextIoGatewayItem @ 0x14002F7C8 (StorNextIoGatewayItem.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRestartGateway(PKSPIN_LOCK SpinLock)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    result = StorNextIoGatewayItem(SpinLock);
    if ( !result )
      break;
    v3 = *(_QWORD *)(*(_QWORD *)(result - 120 + 184) + 32LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v3 + 712))(
      *(_QWORD *)(v3 + 704),
      result - 120,
      &v4,
      0LL);
  }
  return result;
}
