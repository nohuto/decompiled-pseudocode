/*
 * XREFs of sub_18006F320 @ 0x18006F320
 * Callers:
 *     sub_18009820C @ 0x18009820C (sub_18009820C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18006F35C @ 0x18006F35C (sub_18006F35C.c)
 */

__int64 __fastcall sub_18006F320(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = sub_180011790(0x10uLL);
  v6 = a1;
  result = sub_18006F35C(v3, &v6);
  *a1 = v5;
  *v5 = a1;
  return result;
}
