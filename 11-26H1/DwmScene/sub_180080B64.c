/*
 * XREFs of sub_180080B64 @ 0x180080B64
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 *     sub_180080C94 @ 0x180080C94 (sub_180080C94.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180080B64(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  _QWORD v18[5]; // [rsp+48h] [rbp-40h] BYREF

  v6 = (__int64 *)(a1 + 16 * ((int)a3 + 24LL));
  if ( *v6 )
  {
    sub_180012C40(a2, (_QWORD *)(a1 + 16 * ((int)a3 + 24LL)));
  }
  else if ( *(_QWORD *)(a1 + 32 * ((int)a3 + 6LL) + 16) )
  {
    v7 = *(_QWORD *)sub_18005DD64(*(_QWORD *)(a1 + 16), &v16);
    v9 = sub_1800181BC(v18, v8);
    sub_18004E514(v7, &v14, (__int64)v9);
    if ( v17 )
      sub_180010EC8(v17);
    v10 = v14;
    if ( v14 )
    {
      v11 = sub_180012C40(&v16, &v14);
      sub_180080C94(a1, a3);
      sub_180013540(v6, v11);
      v12 = v11[1];
      if ( v12 )
        sub_180010EC8(v12);
      *a2 = v10;
      a2[1] = v15;
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( v15 )
        sub_180010EC8(v15);
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
