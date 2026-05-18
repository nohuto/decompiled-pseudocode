/*
 * XREFs of sub_18007DC74 @ 0x18007DC74
 * Callers:
 *     sub_18007D524 @ 0x18007D524 (sub_18007D524.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 __fastcall sub_18007DC74(__int64 a1, __int64 a2)
{
  sub_180013540((__int64 *)a1, (_QWORD *)a2);
  sub_180013540((__int64 *)(a1 + 16), (_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  return a1;
}
