/*
 * XREFs of sub_180014E04 @ 0x180014E04
 * Callers:
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_18001552C @ 0x18001552C (sub_18001552C.c)
 *     sub_180015650 @ 0x180015650 (sub_180015650.c)
 *     sub_180041700 @ 0x180041700 (sub_180041700.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_180067B18 @ 0x180067B18 (sub_180067B18.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001501C @ 0x18001501C (sub_18001501C.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_QWORD *__fastcall sub_180014E04(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003D718();
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = sub_180012C40(v12, v4);
    sub_18001501C(&v10, v6);
    v7 = v10 != 0;
    if ( v11 )
      sub_180010EC8(v11);
    v8 = v6[1];
    if ( v8 )
      sub_180010EC8(v8);
    if ( v7 )
      break;
    v4 += 2;
  }
  if ( v4 == *(_QWORD **)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001501C(a2, v4);
  }
  return a2;
}
