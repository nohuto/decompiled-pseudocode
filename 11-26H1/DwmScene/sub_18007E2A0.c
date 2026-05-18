/*
 * XREFs of sub_18007E2A0 @ 0x18007E2A0
 * Callers:
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162FC @ 0x1800162FC (sub_1800162FC.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 */

_QWORD *__fastcall sub_18007E2A0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = *(_DWORD *)(*a2 + 88LL);
  sub_180051E20((__int64 *)(a1 + 112), (__int64)&v13, &v14);
  v4 = sub_180012C40(&v11, a2);
  v6 = *v4;
  *v4 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v6;
  v7 = v4[1];
  v4[1] = *(_QWORD *)(v5 + 48);
  v8 = v12;
  *(_QWORD *)(v5 + 48) = v7;
  if ( v8 )
    sub_180010EC8(v8);
  v9 = (__int64 *)sub_180012BF8(a1 + 96, &v11);
  result = sub_1800162FC((_QWORD *)(*a2 + 104LL), v9);
  if ( v12 )
    return (_QWORD *)sub_180010EC8(v12);
  return result;
}
