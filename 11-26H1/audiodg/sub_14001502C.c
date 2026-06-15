/*
 * XREFs of sub_14001502C @ 0x14001502C
 * Callers:
 *     sub_140012FD4 @ 0x140012FD4 (sub_140012FD4.c)
 *     sub_1400135E0 @ 0x1400135E0 (sub_1400135E0.c)
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 *     sub_140047264 @ 0x140047264 (sub_140047264.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001502C(__int64 a1)
{
  __int64 result; // rax

  sub_1400B6010(a1);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
