/*
 * XREFs of sub_140127890 @ 0x140127890
 * Callers:
 *     <none>
 * Callees:
 *     sub_14012B4E0 @ 0x14012B4E0 (sub_14012B4E0.c)
 */

__int64 __fastcall sub_140127890(__int64 a1, unsigned int a2, int a3)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 68LL) = a3;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    sub_14012B4E0(*(PVOID *)(a1 + 1136));
  return PoFxCompleteIdleState(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL), a2);
}
