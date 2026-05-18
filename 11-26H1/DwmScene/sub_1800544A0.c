/*
 * XREFs of sub_1800544A0 @ 0x1800544A0
 * Callers:
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 *     sub_1800C9218 @ 0x1800C9218 (sub_1800C9218.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800544A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    result = sub_18000E26C(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
