/*
 * XREFs of sub_180041700 @ 0x180041700
 * Callers:
 *     sub_180041700 @ 0x180041700 (sub_180041700.c)
 *     sub_1800417BC @ 0x1800417BC (sub_1800417BC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_180041700 @ 0x180041700 (sub_180041700.c)
 *     sub_180048D48 @ 0x180048D48 (sub_180048D48.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180041700(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v6 = *a1;
  if ( v6 )
  {
    sub_180014E04(v6, &v12);
    if ( v12 )
      sub_180048D48(v12, a2, a3);
    v7 = *a1;
    sub_18003D718(v7);
    v8 = *(_QWORD **)(v7 + 32);
    v9 = *(_QWORD **)(v7 + 40);
    while ( v8 != v9 )
    {
      sub_180012C40(&v10, v8);
      sub_180041700(&v10, a2, a3);
      if ( v11 )
        sub_180010EC8(v11);
      v8 += 2;
    }
    if ( v13 )
      sub_180010EC8(v13);
  }
}
