/*
 * XREFs of sub_1400BCA54 @ 0x1400BCA54
 * Callers:
 *     sub_1400BDE7C @ 0x1400BDE7C (sub_1400BDE7C.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400BCA54(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x40000000) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 920) + 40LL) == -1LL;
}
