/*
 * XREFs of sub_18006F8B8 @ 0x18006F8B8
 * Callers:
 *     sub_18006F6BC @ 0x18006F6BC (sub_18006F6BC.c)
 *     sub_18006F7C0 @ 0x18006F7C0 (sub_18006F7C0.c)
 *     sub_180099FB0 @ 0x180099FB0 (sub_180099FB0.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18002A8D0 @ 0x18002A8D0 (sub_18002A8D0.c)
 */

__int64 __fastcall sub_18006F8B8(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002A8D0((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
