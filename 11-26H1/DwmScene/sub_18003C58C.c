/*
 * XREFs of sub_18003C58C @ 0x18003C58C
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18003B63C @ 0x18003B63C (sub_18003B63C.c)
 *     sub_18003C930 @ 0x18003C930 (sub_18003C930.c)
 *     sub_18003CCD0 @ 0x18003CCD0 (sub_18003CCD0.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003C58C(__int64 a1, __int64 *a2)
{
  __int64 *v4; // r14
  __int64 *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  sub_18003D758();
  v4 = *(__int64 **)(a1 + 40);
  for ( i = *(__int64 **)(a1 + 32); i != v4; i += 2 )
  {
    if ( *i == *a2 )
      break;
  }
  while ( 1 )
  {
    i += 2;
    if ( i == v4 )
      break;
    sub_180011F5C(i - 2, i);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) - 8LL);
  if ( v6 )
    sub_180010EC8(v6);
  *(_QWORD *)(a1 + 40) -= 16LL;
  v7 = *a2;
  sub_18003D718(*a2);
  sub_180012A94(v7 + 112, &v11);
  result = (__int64)sub_18003B63C(*a2, &v9);
  if ( v11 )
  {
    sub_18003C930(v11, &v9);
    v13 = 0LL;
    result = sub_18003CCD0(*a2, &v13);
  }
  if ( v9 )
  {
    sub_18003CCD0(v9, &v11);
    v13 = 0LL;
    result = sub_18003C930(*a2, &v13);
  }
  if ( v10 )
    result = sub_180010EC8(v10);
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
