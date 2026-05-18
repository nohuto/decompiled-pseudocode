/*
 * XREFs of sub_1800C9978 @ 0x1800C9978
 * Callers:
 *     sub_1800C9B50 @ 0x1800C9B50 (sub_1800C9B50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_1800C90B8 @ 0x1800C90B8 (sub_1800C90B8.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 *     sub_1800C9218 @ 0x1800C9218 (sub_1800C9218.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800C9978(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 v13; // [rsp+30h] [rbp-29h]
  unsigned __int64 v14[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v15; // [rsp+50h] [rbp-9h] BYREF
  int v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+64h] [rbp+Bh]
  int v18; // [rsp+6Ch] [rbp+13h]
  _BYTE v19[32]; // [rsp+70h] [rbp+17h] BYREF

  v14[1] = (unsigned __int64)a1;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 4);
  v14[0] = v4;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_1800C9218((void **)&v12, v14);
  }
  sub_1800143C0((__int64)v19);
  v5 = *a2;
  v6 = a2[1];
  while ( v5 != v6 )
  {
    *(_QWORD *)&v15 = sub_1800148EC(v5);
    DWORD2(v15) = *(_DWORD *)(v5 + 32);
    HIDWORD(v15) = *(_DWORD *)&asc_1801902A0[24 * *(unsigned __int8 *)(v5 + 40) - 24 + 4 * *(int *)(v5 + 36)];
    v16 = *(_DWORD *)(v5 + 44);
    v17 = 0LL;
    v18 = 0;
    if ( *((_QWORD *)&v12 + 1) == v13 )
      sub_1800C90E0((void **)&v12, *((__int64 *)&v12 + 1), &v15);
    else
      sub_1800C90B8((__int64)&v12, &v15);
    v7 = sub_18001C8C0((__int64 *)&v15, v5, (__int64)&unk_180109138);
    sub_18001DF88((__int64)v19, (__int64)v7);
    sub_1800129D0((__int64)&v15);
    v5 += 48LL;
  }
  v8 = v13;
  v13 = 0LL;
  v9 = *((_QWORD *)&v12 + 1);
  v10 = v12;
  v12 = 0uLL;
  *a1 = v10;
  a1[1] = v9;
  a1[2] = v8;
  sub_1800181BC(a1 + 3, (__int64)v19);
  sub_1800129D0((__int64)v19);
  if ( (_QWORD)v12 )
    sub_18000E26C((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFE0uLL);
  return a1;
}
