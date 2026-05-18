/*
 * XREFs of sub_18006C0C0 @ 0x18006C0C0
 * Callers:
 *     sub_18006BE80 @ 0x18006BE80 (sub_18006BE80.c)
 * Callees:
 *     sub_18002E4EC @ 0x18002E4EC (sub_18002E4EC.c)
 */

__int64 __fastcall sub_18006C0C0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002E4EC((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
