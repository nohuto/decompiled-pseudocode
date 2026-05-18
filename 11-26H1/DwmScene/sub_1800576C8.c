/*
 * XREFs of sub_1800576C8 @ 0x1800576C8
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_18008F764 @ 0x18008F764 (sub_18008F764.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800560F4 @ 0x1800560F4 (sub_1800560F4.c)
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_18005AA68 @ 0x18005AA68 (sub_18005AA68.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800576C8(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  float v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+24h] [rbp-5Ch]
  int v13; // [rsp+2Ch] [rbp-54h]
  _QWORD v14[4]; // [rsp+30h] [rbp-50h] BYREF
  char v15[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF

  v19 = 0LL;
  v15[0] = 1;
  v16 = a2;
  v17 = a3;
  v18 = a5;
  sub_180013540((__int64 *)&v19, a4);
  if ( a1[14] == a1[15] )
  {
    sub_180056274(a1 + 13, a1[14], (__int64)v15);
  }
  else
  {
    sub_1800560F4();
    a1[14] += 48LL;
  }
  v7 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v8 = sub_1800181BC(v14, (__int64)&unk_1801CC338);
  v11 = (float)(int)v7;
  v12 = 0LL;
  v13 = 0;
  ((void (__fastcall *)(__int64 *, _QWORD *, float *, _QWORD))sub_18005AA68)(a1, v8, &v11, v7);
  if ( *((_QWORD *)&v19 + 1) )
    sub_180010EC8(*((__int64 *)&v19 + 1));
  v9 = a4[1];
  if ( v9 )
    sub_180010EC8(v9);
  return v7;
}
