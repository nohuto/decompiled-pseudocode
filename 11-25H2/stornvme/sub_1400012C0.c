/*
 * XREFs of sub_1400012C0 @ 0x1400012C0
 * Callers:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_14002166C @ 0x14002166C (sub_14002166C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400012C0(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 1) == 0
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 4) != 0 || *(_BYTE *)(a1 + 4067));
}
