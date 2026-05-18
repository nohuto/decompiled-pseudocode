/*
 * XREFs of sub_18004F130 @ 0x18004F130
 * Callers:
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 * Callees:
 *     sub_18004C1F8 @ 0x18004C1F8 (sub_18004C1F8.c)
 */

__int64 __fastcall sub_18004F130(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18004C1F8((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
