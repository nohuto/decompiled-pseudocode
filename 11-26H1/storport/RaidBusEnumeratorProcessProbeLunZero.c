/*
 * XREFs of RaidBusEnumeratorProcessProbeLunZero @ 0x140070190
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessProbeLunZero(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 40);
  result = 0LL;
  *(_BYTE *)(a3 + 93) = 1;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
