/*
 * XREFs of sub_1800414D4 @ 0x1800414D4
 * Callers:
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 *     sub_180040B30 @ 0x180040B30 (sub_180040B30.c)
 *     sub_180041420 @ 0x180041420 (sub_180041420.c)
 *     sub_1800417BC @ 0x1800417BC (sub_1800417BC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800414D4(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 **v5; // rsi
  __int64 v6; // rcx
  volatile __int32 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  volatile __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  volatile __int32 *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rdx
  volatile __int32 *v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  __int64 v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+38h] [rbp-8h]
  __int64 v32; // [rsp+60h] [rbp+20h] BYREF
  volatile __int32 *v33; // [rsp+70h] [rbp+30h]

  sub_180029EF8(a1 + 16, a2);
  v5 = (__int64 **)(a1 + 88);
  v6 = **(_QWORD **)(a1 + 88);
  v32 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (volatile __int32 *)(*(_QWORD *)(v6 + 64) + 76LL);
    v33 = v7;
    while ( _InterlockedExchange(v7, 1) )
      ;
    v8 = (__int64 *)sub_18004068C(*(_QWORD *)(v6 + 64), &v28);
    sub_180041420(a1, a2, v8);
    if ( v29 )
      sub_180010EC8(v29);
    sub_180038908(v7, v9, 3);
    sub_18001D6F4(&v32, v10);
    v6 = v32;
  }
  v11 = **v5;
  v32 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = (volatile __int32 *)(*(_QWORD *)(v11 + 64) + 76LL);
    v33 = v12;
    while ( _InterlockedExchange(v12, 1) )
      ;
    sub_1800417BC(a1);
    sub_180038908(v12, v13, 3);
    sub_18001D6F4(&v32, v14);
    v11 = v32;
  }
  v15 = sub_18003EA84((__int64 *)(a1 + 88), (__int64)&v30, v4);
  sub_180012C40(&v28, (_QWORD *)(*(_QWORD *)v15 + 64LL));
  v16 = v28;
  v17 = (volatile __int32 *)(v28 + 76);
  v32 = v28 + 76;
  while ( _InterlockedExchange(v17, 1) )
    ;
  v18 = (__int64 *)sub_18004068C(v16, &v30);
  sub_180040B30(a1, a2, v18);
  if ( v31 )
    sub_180010EC8(v31);
  sub_180038908(v17, v19, 3);
  result = **v5;
  v32 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v21 = result + 32;
    sub_1800141BC(result + 32);
    v22 = sub_1800141BC((__int64)&unk_1801C90B8);
    if ( !sub_18001F05C(v23, *(_QWORD *)(v21 + 16), v22, qword_1801C90C8) )
    {
      v25 = (volatile __int32 *)(*(_QWORD *)(v21 + 32) + 76LL);
      v33 = v25;
      while ( _InterlockedExchange(v25, 1) )
        ;
      v26 = (__int64 *)sub_18004068C(*(_QWORD *)(v21 + 32), &v30);
      sub_180040B30(a1, a2, v26);
      if ( v31 )
        sub_180010EC8(v31);
      sub_180038908(v25, v27, 3);
    }
    sub_18001D6F4(&v32, v24);
    result = v32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
  if ( v29 )
    return sub_180010EC8(v29);
  return result;
}
