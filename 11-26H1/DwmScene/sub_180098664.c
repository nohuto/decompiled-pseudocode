/*
 * XREFs of sub_180098664 @ 0x180098664
 * Callers:
 *     sub_180098778 @ 0x180098778 (sub_180098778.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_18009A280 @ 0x18009A280 (sub_18009A280.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180098664(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-38h] BYREF

  sub_180029674(a1);
  sub_180098A18(a1, v17, a3);
  if ( v17[0] )
  {
    v9 = 2 * (v18 + 4);
    v10 = *(_QWORD *)(a1 + 16 * (v18 + 4));
    v11 = sub_180012C40(&v19, a5);
    v12 = sub_1800181BC(v20, a4);
    v13 = sub_18009A280(v10, v12, v11);
    v14 = *(_QWORD *)(a1 + 8 * v9 + 8);
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v15 = *(_QWORD *)(a1 + 8 * v9 + 8);
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v15 )
    {
      *a2 = v13;
      a2[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
      sub_180010EC8(v15);
    }
    sub_1800297F4(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_1800297F4(a1);
  }
  return a2;
}
