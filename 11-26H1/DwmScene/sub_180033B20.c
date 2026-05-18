/*
 * XREFs of sub_180033B20 @ 0x180033B20
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180061970 @ 0x180061970 (sub_180061970.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_180065DC4 @ 0x180065DC4 (sub_180065DC4.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_180067318 @ 0x180067318 (sub_180067318.c)
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180033D9C @ 0x180033D9C (sub_180033D9C.c)
 *     sub_1800381FC @ 0x1800381FC (sub_1800381FC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180033B20(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _QWORD *v3; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD *);
  v3 = v12;
  if ( !*v12 )
  {
    v6 = (__int64 *)sub_180033D9C(a1, &v10);
    sub_180011F5C(v3, v6);
    if ( v11 )
      sub_180010EC8((__int64)v11);
  }
  sub_1800162D0(&v10, v3);
  sub_1800381FC(a1 + 728, (_QWORD **)va, &v10);
  if ( v11 )
    sub_180010F00(v11);
  if ( v12 == *(_QWORD **)(a1 + 728) || (v7 = (_QWORD *)v12[6], !((__int64)(v12[7] - (_QWORD)v7) >> 4)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, v7);
  }
  v8 = v3[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
