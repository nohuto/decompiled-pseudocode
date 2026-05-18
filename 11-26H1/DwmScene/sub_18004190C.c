/*
 * XREFs of sub_18004190C @ 0x18004190C
 * Callers:
 *     sub_180041C2C @ 0x180041C2C (sub_180041C2C.c)
 * Callees:
 *     sub_18003E9DC @ 0x18003E9DC (sub_18003E9DC.c)
 */

__int64 __fastcall sub_18004190C(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18003E9DC((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
