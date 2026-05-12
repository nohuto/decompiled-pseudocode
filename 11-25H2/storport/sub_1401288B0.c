/*
 * XREFs of sub_1401288B0 @ 0x1401288B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401288E4 @ 0x1401288E4 (sub_1401288E4.c)
 */

__int64 __fastcall sub_1401288B0(_QWORD *a1)
{
  ++*(_QWORD *)(*(_QWORD *)(a1[20] + 24LL) + 32LL);
  *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 20LL) &= ~1u;
  return sub_1401288E4(a1);
}
