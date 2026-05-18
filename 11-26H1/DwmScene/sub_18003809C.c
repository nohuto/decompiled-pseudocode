/*
 * XREFs of sub_18003809C @ 0x18003809C
 * Callers:
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 * Callees:
 *     sub_18002E3C8 @ 0x18002E3C8 (sub_18002E3C8.c)
 */

__int64 __fastcall sub_18003809C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002E3C8((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
