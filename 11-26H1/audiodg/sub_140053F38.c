/*
 * XREFs of sub_140053F38 @ 0x140053F38
 * Callers:
 *     sub_14005452C @ 0x14005452C (sub_14005452C.c)
 * Callees:
 *     sub_14005214C @ 0x14005214C (sub_14005214C.c)
 */

__int64 __fastcall sub_140053F38(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_14005214C((__int64)a1, (__int64)v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
