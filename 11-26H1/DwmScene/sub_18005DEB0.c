/*
 * XREFs of sub_18005DEB0 @ 0x18005DEB0
 * Callers:
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_18003E7EC @ 0x18003E7EC (sub_18003E7EC.c)
 *     sub_1800433C4 @ 0x1800433C4 (sub_1800433C4.c)
 *     sub_18005BCA4 @ 0x18005BCA4 (sub_18005BCA4.c)
 *     sub_18005C374 @ 0x18005C374 (sub_18005C374.c)
 *     sub_18005C470 @ 0x18005C470 (sub_18005C470.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005DEB0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 **v8; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  void *v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+10h] BYREF

  v2 = a1 + 32;
  v3 = a1 + 52;
  while ( v2 != v3 )
  {
    v15 = 0LL;
    sub_180011F5C(v2, (__int64 *)&v15);
    if ( *((_QWORD *)&v15 + 1) )
      sub_180010EC8(*((__int64 *)&v15 + 1));
    v2 += 2;
  }
  for ( i = a1 + 12; i != a1 + 32; i += 2 )
  {
    v15 = 0LL;
    sub_180011F5C(i, (__int64 *)&v15);
    if ( *((_QWORD *)&v15 + 1) )
      sub_180010EC8(*((__int64 *)&v15 + 1));
  }
  v5 = *(__int64 **)a1[52];
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = (_QWORD *)v5[7];
    sub_18003E7EC((__int64)(v5 + 7), (__int64)(v5 + 7), v6[1]);
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    v5[8] = 0LL;
    sub_18005C470(v7, v5[5]);
    *(_QWORD *)v5[5] = v5[5];
    *(_QWORD *)(v5[5] + 8) = v5[5];
    v5[6] = 0LL;
    v8 = (__int64 **)v5[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25) && v5 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v5 = j;
      v5 = j;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( k = *v8; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v5 = k;
    }
  }
  *(_QWORD *)&v15 = a1 + 59;
  BYTE8(v15) = 1;
  sub_180029734((__int64)(a1 + 59));
  sub_18005BCA4((__int64 *)v14, a1 + 60);
  sub_180029B0C((__int64)&v15);
  v11 = *(_QWORD *)v14[0];
  v16 = *(_QWORD *)v14[0];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    sub_180012A94(v11 + 32, &v15);
    if ( (_QWORD)v15 )
      sub_1800433C4((_QWORD *)v15);
    if ( *((_QWORD *)&v15 + 1) )
      sub_180010EC8(*((__int64 *)&v15 + 1));
    sub_18001D6F4(&v16, v12);
    v11 = v16;
  }
  v15 = 0LL;
  sub_180011F5C(a1 + 55, (__int64 *)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010EC8(*((__int64 *)&v15 + 1));
  return sub_18005C374(v14, (__int64)v14);
}
