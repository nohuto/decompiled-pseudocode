/*
 * XREFs of sub_180035694 @ 0x180035694
 * Callers:
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18002D960 @ 0x18002D960 (sub_18002D960.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180035694(__int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *v2; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-10h]

  v1 = (__int64 *)(a1 + 288);
  sub_180029C50(a1 + 312, (__int64)v11);
  v12 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v3 = (_QWORD *)v1[1];
  v4 = (_QWORD *)*v1;
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v6 = v4[1];
    if ( v6 && *(_DWORD *)(v6 + 8) )
    {
      if ( v5 == v2 )
      {
        sub_18002E04C((__int64 *)&v12, (__int64)v5, v4);
        v5 = (_QWORD *)*((_QWORD *)&v12 + 1);
      }
      else
      {
        sub_18002D960(v5, v4);
        v5 = (_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
        *((_QWORD *)&v12 + 1) += 16LL;
      }
      v2 = v13;
    }
    v4 += 2;
  }
  if ( v1 == (__int64 *)&v12 )
  {
    v7 = v12;
  }
  else
  {
    v7 = *v1;
    *v1 = v12;
    *(_QWORD *)&v12 = v7;
    v8 = (_QWORD *)v1[1];
    v1[1] = (__int64)v5;
    v5 = v8;
    *((_QWORD *)&v12 + 1) = v8;
    v9 = v1[2];
    v1[2] = (__int64)v2;
    v13 = (_QWORD *)v9;
  }
  if ( v7 )
  {
    sub_180011964(v7, (__int64)v5);
    sub_18000E26C((void *)v12, ((unsigned __int64)v13 - v12) & 0xFFFFFFFFFFFFFFF0uLL);
    v12 = 0LL;
    v13 = 0LL;
  }
  return sub_180011E54((__int64)v11);
}
