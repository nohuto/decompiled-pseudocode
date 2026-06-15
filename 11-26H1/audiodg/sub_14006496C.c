/*
 * XREFs of sub_14006496C @ 0x14006496C
 * Callers:
 *     sub_140065FB4 @ 0x140065FB4 (sub_140065FB4.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_1400544D4 @ 0x1400544D4 (sub_1400544D4.c)
 *     sub_14005DA3C @ 0x14005DA3C (sub_14005DA3C.c)
 *     sub_14005DEF4 @ 0x14005DEF4 (sub_14005DEF4.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_14005EDE0 @ 0x14005EDE0 (sub_14005EDE0.c)
 *     sub_14005EE14 @ 0x14005EE14 (sub_14005EE14.c)
 *     sub_14005F054 @ 0x14005F054 (sub_14005F054.c)
 *     sub_1400646D0 @ 0x1400646D0 (sub_1400646D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006496C(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbp
  _QWORD *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a3[2];
  v9 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 7 )
    v9 = *a3;
  v10 = sub_140026BBC((__int64)a1, v9, 2 * v8);
  sub_14005DA3C(a1, v16, a3, v10);
  v11 = v16[1];
  if ( v16[1] )
  {
    sub_14005DFF0((__int64 *)(v16[1] + 48), *a4);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_14005EDE0((__int64)a1);
    sub_1400646D0(&v14, (__int64)(a1 + 1), (__int64)a3, (__int64)a4);
    if ( sub_14005EE14((__int64)a1) )
    {
      sub_14005F054(a1);
      *(_OWORD *)v16 = *(_OWORD *)sub_14005DA3C(a1, v16, v15 + 2, v10);
    }
    v12 = v15;
    v15 = 0LL;
    *(_QWORD *)a2 = sub_1400544D4(a1, v10, v16[0], v12);
    *(_BYTE *)(a2 + 8) = 1;
    sub_14005DEF4((__int64)&v14);
  }
  return a2;
}
