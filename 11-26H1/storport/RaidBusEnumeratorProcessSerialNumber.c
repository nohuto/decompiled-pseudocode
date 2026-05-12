/*
 * XREFs of RaidBusEnumeratorProcessSerialNumber @ 0x1400701E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     StorCreateAnsiString @ 0x140096C1C (StorCreateAnsiString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessSerialNumber(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rdx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v6 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v6 = 24LL;
  return StorCreateAnsiString(a3 + 40, *(_QWORD *)(v6 + a2) + 4LL, *(unsigned __int8 *)(*(_QWORD *)(v6 + a2) + 3LL));
}
