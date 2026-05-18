/*
 * XREFs of sub_180049048 @ 0x180049048
 * Callers:
 *     sub_180049D60 @ 0x180049D60 (sub_180049D60.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 */

__int64 __fastcall sub_180049048(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_1800494AC(v3, v2);
}
