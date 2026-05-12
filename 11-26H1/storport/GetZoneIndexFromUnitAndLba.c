/*
 * XREFs of GetZoneIndexFromUnitAndLba @ 0x140073F50
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneCountFromUnit @ 0x140073E8C (GetZoneCountFromUnit.c)
 *     McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x140074244 (McTemplateK0sssxiqxqq_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall GetZoneIndexFromUnitAndLba(__int64 a1, ULONG_PTR a2)
{
  char ZoneCountFromUnit; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3464) )
  {
    ZoneCountFromUnit = GetZoneCountFromUnit(a1);
    ++*(_DWORD *)(a1 + 3476);
    v6 = ZoneCountFromUnit - 1;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140173444 & 2) != 0 )
        McTemplateK0sssxiqxqq_EtwWriteTransfer(
          a1 + 242,
          a1 + 177,
          v5,
          a1 + 168,
          a1 + 177,
          a1 + 242,
          a2,
          *(_QWORD *)(a1 + 3464),
          *(_DWORD *)(a1 + 932),
          *(_QWORD *)(a1 + 3416),
          *(_DWORD *)(a1 + 3472),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x16A2uLL, a2, *(_QWORD *)(a1 + 3464), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 932) / *(_QWORD *)(a1 + 3416);
}
