/*
 * XREFs of sub_1400D12D0 @ 0x1400D12D0
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D12D0(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x8000) != 0 )
    return 1LL;
  else
    return ((*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x2000) == 0) | 2u;
}
