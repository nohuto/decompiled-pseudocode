/*
 * XREFs of sub_180085F44 @ 0x180085F44
 * Callers:
 *     sub_180085530 @ 0x180085530 (sub_180085530.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180085F44(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_18000E26C(v6, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 1));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 2 * a3;
  result = a2 + 2 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
