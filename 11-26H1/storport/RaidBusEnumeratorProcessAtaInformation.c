/*
 * XREFs of RaidBusEnumeratorProcessAtaInformation @ 0x14006FF60
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAtaIdFormatString @ 0x14003FAFC (RaidAtaIdFormatString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessAtaInformation(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  __int64 v8; // rax
  _BYTE *Pool; // rax
  __int64 v10; // rdi

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v8 = 60LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v8 = 16LL;
  if ( *(_DWORD *)(v8 + a2) >= 0x23Cu )
  {
    Pool = (_BYTE *)RaidAllocatePool(64LL, 50LL, 842096978LL, *(_QWORD *)(*a1 + 8LL));
    *(_QWORD *)(a3 + 72) = Pool;
    if ( Pool )
    {
      v10 = a1[5];
      RaidAtaIdFormatString(Pool, v10 + 114, 0x28u);
      RaidAtaIdFormatString((_BYTE *)(*(_QWORD *)(a3 + 72) + 41LL), v10 + 106, 8u);
      if ( !DisableIEEE1667 && *(char *)(v10 + 198) < 0 )
        *(_WORD *)(a3 + 56) |= 1u;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    *a4 = 1;
    *a5 = 572;
    return 3221225507LL;
  }
}
