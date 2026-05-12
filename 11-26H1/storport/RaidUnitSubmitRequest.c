/*
 * XREFs of RaidUnitSubmitRequest @ 0x140004BD0
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     StorUnitStartBypassIo @ 0x1400AB260 (StorUnitStartBypassIo.c)
 * Callees:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r8

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( (qword_140172448 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
      0LL,
      0LL,
      0LL);
  RaidStartIoPacket(a1, a2);
  return 259LL;
}
