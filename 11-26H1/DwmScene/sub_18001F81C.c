/*
 * XREFs of sub_18001F81C @ 0x18001F81C
 * Callers:
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     sub_1800D4010 @ 0x1800D4010 (sub_1800D4010.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 */

__int64 __fastcall sub_18001F81C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18001EB54((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
