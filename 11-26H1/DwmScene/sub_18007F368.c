/*
 * XREFs of sub_18007F368 @ 0x18007F368
 * Callers:
 *     sub_18007D480 @ 0x18007D480 (sub_18007D480.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800177D0 @ 0x1800177D0 (sub_1800177D0.c)
 *     sub_18001F73C @ 0x18001F73C (sub_18001F73C.c)
 */

__int64 __fastcall sub_18007F368(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = sub_18001F73C(a1, a2);
  v4 = (void *)*a1;
  v5 = v3;
  if ( *a1 )
  {
    sub_18000E26C(v4, (a1[2] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v8 = v5;
  v6 = sub_1800177D0((__int64)v4, &v8);
  *a1 = v6;
  a1[1] = v6;
  result = v6 + 4 * v5;
  a1[2] = result;
  return result;
}
