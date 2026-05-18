/*
 * XREFs of sub_18002DABC @ 0x18002DABC
 * Callers:
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800D27E0 @ 0x1800D27E0 (sub_1800D27E0.c)
 */

__int64 __fastcall sub_18002DABC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned int *v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v7, a3);
  return sub_1800D27E0(v5, *v4, v3);
}
