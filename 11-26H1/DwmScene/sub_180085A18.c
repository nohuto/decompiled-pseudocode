/*
 * XREFs of sub_180085A18 @ 0x180085A18
 * Callers:
 *     sub_180085920 @ 0x180085920 (sub_180085920.c)
 * Callees:
 *     _o_pow @ 0x18000CE7C (_o_pow.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_18007F5A8 @ 0x18007F5A8 (sub_18007F5A8.c)
 *     sub_180085950 @ 0x180085950 (sub_180085950.c)
 *     sub_180085CB0 @ 0x180085CB0 (sub_180085CB0.c)
 *     sub_180085FB0 @ 0x180085FB0 (sub_180085FB0.c)
 *     sub_180085FF8 @ 0x180085FF8 (sub_180085FF8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180085A18(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 *v5; // r15
  unsigned int v6; // edi
  char v7; // bl
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // esi
  unsigned int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  int v16; // r15d
  unsigned int i; // r12d
  __int128 v19; // [rsp+60h] [rbp-79h] BYREF
  __int64 v20; // [rsp+70h] [rbp-69h]
  __int128 v21; // [rsp+78h] [rbp-61h] BYREF
  __int64 v22; // [rsp+88h] [rbp-51h]
  __int128 v23; // [rsp+90h] [rbp-49h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-39h]
  __int128 v25; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-21h]

  v5 = a1;
  o_pow();
  v6 = (int)2.0;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v7 = a5;
  LOBYTE(v8) = a5;
  sub_180085CB0(v10, v9, v8, (int)2.0, (__int64)&v25, (__int64)&v23, (__int64)&v21);
  v12 = (int)2.0 + 1;
  v19 = 0LL;
  v20 = 0LL;
  v13 = 1;
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_22;
    v16 = (int)2.0 + 1;
    do
    {
      if ( v13 > 1 )
      {
        a5 = v16 - v12;
        sub_180085FF8(&v19, &a5);
      }
      for ( i = 0; i <= v6; ++i )
      {
        a5 = i + v16 - v12;
        sub_180085FF8(&v19, &a5);
        a5 = v16 + i;
        sub_180085FF8(&v19, &a5);
      }
      if ( v13 < v6 )
      {
        a5 = v6 + v16;
        sub_180085FF8(&v19, &a5);
      }
      ++v13;
      LOWORD(v16) = v12 + v16;
    }
    while ( v13 <= v6 );
  }
  else
  {
    if ( !v6 )
      goto LABEL_22;
    v14 = (int)2.0 + 1;
    do
    {
      if ( v13 > 1 )
      {
        a5 = v6 + v14 - v12;
        sub_180085FF8(&v19, &a5);
      }
      v15 = (int)2.0 + 1;
      if ( (int)2.0 != -1 )
      {
        do
        {
          a5 = v15 + v14 - v12 - 1;
          sub_180085FF8(&v19, &a5);
          a5 = v14 + v15 - 1;
          sub_180085FF8(&v19, &a5);
          --v15;
        }
        while ( v15 );
      }
      if ( v13 < v6 )
      {
        a5 = v14;
        sub_180085FF8(&v19, &a5);
      }
      ++v13;
      LOWORD(v14) = v12 + v14;
    }
    while ( v13 <= v6 );
  }
  v5 = a1;
LABEL_22:
  sub_180085950(v5, a2, v11, (__int64 *)&v25, &v19, (__int64 *)&v23, (__int64 *)&v21);
  sub_180046FD4(*v5);
  sub_180085FB0(&v19);
  if ( (_QWORD)v21 )
  {
    sub_18000E26C((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFF8uLL);
    v21 = 0LL;
    v22 = 0LL;
  }
  sub_18007F5A8((__int64)&v23);
  sub_18007F5A8((__int64)&v25);
  return v5;
}
