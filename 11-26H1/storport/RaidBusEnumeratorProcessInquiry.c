/*
 * XREFs of RaidBusEnumeratorProcessInquiry @ 0x140070140
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessInquiry(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  _BYTE *v5; // rax

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v5 = *(_BYTE **)(a1 + 40);
  if ( *v5 >= 0x20u )
    return 3221225473LL;
  *(_QWORD *)(a3 + 32) = v5;
  result = 0LL;
  *(_BYTE *)(a3 + 93) = 1;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
