/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x1405C7E30
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    qword_140E65F48 = a1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64)BgkpResetDisplay);
  if ( LODWORD(stru_140E3EAA8.WriteTransferCount) != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
