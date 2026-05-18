/*
 * XREFs of sub_1800329A0 @ 0x1800329A0
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18002F2EC @ 0x18002F2EC (sub_18002F2EC.c)
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800329A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  _BYTE v15[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+18h] BYREF

  v18 = a2;
  v17 = 0;
  sub_180029C50(a1 + 8, (__int64)v15);
  v12 = 0LL;
  if ( v17 )
  {
    v3 = sub_18002F2EC((__int64 *)(a1 + 1080), (__int64)v16, &v17);
    v4 = sub_180012C40(&v13, (_QWORD *)(*(_QWORD *)v3 + 40LL));
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)&v12 = v5;
    v6 = v4[1];
    v4[1] = 0LL;
    *((_QWORD *)&v12 + 1) = v6;
    if ( v14 )
      sub_180010EC8(v14);
  }
  v18 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 1096) = v18 + 1;
  sub_180030110(&v13, (__int64)&v18, &v12);
  v7 = *(_QWORD *)sub_18002F2EC((__int64 *)(a1 + 1080), (__int64)v16, &v18);
  v8 = v14;
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  *(_QWORD *)(v7 + 40) = v13;
  v9 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v8;
  if ( v9 )
    sub_180010EC8(v9);
  v10 = v18;
  if ( v8 )
    sub_180010EC8(v8);
  if ( *((_QWORD *)&v12 + 1) )
    sub_180010EC8(*((__int64 *)&v12 + 1));
  sub_180011E54((__int64)v15);
  return v10;
}
