/*
 * XREFs of sub_1800497DC @ 0x1800497DC
 * Callers:
 *     sub_180048F34 @ 0x180048F34 (sub_180048F34.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 __fastcall sub_1800497DC(__int64 a1, __int64 a2)
{
  sub_180013540((__int64 *)a1, (_QWORD *)a2);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  sub_180013540((__int64 *)(a1 + 24), (_QWORD *)(a2 + 24));
  sub_180013540((__int64 *)(a1 + 40), (_QWORD *)(a2 + 40));
  sub_180013540((__int64 *)(a1 + 56), (_QWORD *)(a2 + 56));
  sub_180013540((__int64 *)(a1 + 72), (_QWORD *)(a2 + 72));
  return a1;
}
