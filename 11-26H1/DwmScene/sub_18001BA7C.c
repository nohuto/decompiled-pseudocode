/*
 * XREFs of sub_18001BA7C @ 0x18001BA7C
 * Callers:
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001BA7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_18000E26C(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
