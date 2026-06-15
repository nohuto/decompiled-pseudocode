/*
 * XREFs of sub_14005DB34 @ 0x14005DB34
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_1400544D4 @ 0x1400544D4 (sub_1400544D4.c)
 *     sub_14005D9BC @ 0x14005D9BC (sub_14005D9BC.c)
 *     sub_14005DA3C @ 0x14005DA3C (sub_14005DA3C.c)
 *     sub_14005DEF4 @ 0x14005DEF4 (sub_14005DEF4.c)
 *     sub_14005EDE0 @ 0x14005EDE0 (sub_14005EDE0.c)
 *     sub_14005EE14 @ 0x14005EE14 (sub_14005EE14.c)
 *     sub_14005F054 @ 0x14005F054 (sub_14005F054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005DB34(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r8
  _QWORD *v10; // r9
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-18h]
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+20h] BYREF

  v6 = a3[2];
  v7 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 7 )
    v7 = *a3;
  v8 = sub_140026BBC((__int64)a1, v7, 2 * v6);
  sub_14005DA3C(a1, &v14, a3, v8);
  if ( *((_QWORD *)&v14 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v14 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_14005EDE0(a1);
    v15 = a3;
    sub_14005D9BC(&v12, (__int64)(a1 + 1), v9, (__int64 *)&v15);
    if ( (unsigned __int8)sub_14005EE14(a1) )
    {
      sub_14005F054(a1);
      v14 = *(_OWORD *)sub_14005DA3C(a1, &v14, v13 + 2, v8);
    }
    v10 = v13;
    v13 = 0LL;
    *(_QWORD *)a2 = sub_1400544D4(a1, v8, v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
    sub_14005DEF4(&v12);
  }
  return a2;
}
