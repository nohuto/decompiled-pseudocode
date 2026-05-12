/*
 * XREFs of RaUnitResetBusSrb @ 0x14009F0B0
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_140173444 & 1) != 0 )
    McTemplateK0zqjujssstq_EtwWriteTransfer(
      a1,
      *(_QWORD *)(a1 + 24) + 5128LL,
      a1 + 177,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5128LL,
      *(_BYTE *)(a1 + 104),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      *(_BYTE *)(a1 + 506) & 1,
      1);
  return RaidUnitSubmitResetRequest(a1, a2);
}
