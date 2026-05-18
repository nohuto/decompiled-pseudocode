/*
 * XREFs of sub_18004609C @ 0x18004609C
 * Callers:
 *     sub_1800474DC @ 0x1800474DC (sub_1800474DC.c)
 *     sub_180047514 @ 0x180047514 (sub_180047514.c)
 *     sub_18004754C @ 0x18004754C (sub_18004754C.c)
 *     sub_180047584 @ 0x180047584 (sub_180047584.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800821A0 @ 0x1800821A0 (sub_1800821A0.c)
 */

_QWORD *__fastcall sub_18004609C(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _BYTE v12[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = (_QWORD *)(a1 + 136);
  if ( !a3 || *v4 )
  {
    v5 = sub_180012C40(&v10, v4);
    v6 = 6;
  }
  else
  {
    v5 = (__int64 *)sub_1800821A0(a1, v12);
    v6 = 5;
  }
  v7 = *v5;
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v5[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = v7;
  a2[1] = v5[1];
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v11 )
      sub_180010EC8(v11);
  }
  if ( (v6 & 1) != 0 && v13 )
    sub_180010EC8(v13);
  return a2;
}
