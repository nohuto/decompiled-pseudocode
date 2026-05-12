/*
 * XREFs of sub_140126C00 @ 0x140126C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140121120 @ 0x140121120 (sub_140121120.c)
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 *     sub_14012B468 @ 0x14012B468 (sub_14012B468.c)
 */

__int64 __fastcall sub_140126C00(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  result = sub_140126F38();
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1[20] + 8LL);
    *(_BYTE *)(v3 + 64) = 1;
    if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
    {
      LOBYTE(v3) = 1;
      sub_14012B468(a1[142], v3);
      v4 = a1[142];
      if ( !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 192LL),
              1,
              0) )
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 128LL),
          (LARGE_INTEGER)-50000000LL,
          0x7D0u,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 64LL));
      sub_140121120(*(_QWORD *)(a1[142] + 1024LL));
    }
    return sub_14012A294(a1);
  }
  return result;
}
