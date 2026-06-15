/*
 * XREFs of sub_14000E664 @ 0x14000E664
 * Callers:
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000E664(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v2 = a1[35];
  if ( v2 )
    result = _o_free(v2);
  v4 = a1[31];
  if ( v4 )
    result = _o_free(v4);
  v5 = a1[27];
  if ( v5 )
    result = _o_free(v5);
  v6 = a1[23];
  if ( v6 )
    result = _o_free(v6);
  v7 = a1[19];
  if ( v7 )
    result = _o_free(v7);
  v8 = a1[15];
  if ( v8 )
    result = _o_free(v8);
  v9 = a1[11];
  if ( v9 )
    result = _o_free(v9);
  v10 = a1[7];
  if ( v10 )
    result = _o_free(v10);
  v11 = a1[5];
  if ( v11 )
    result = sub_1400B6010(v11);
  v12 = a1[4];
  if ( v12 )
    result = sub_1400B6010(v12);
  v13 = a1[3];
  if ( v13 )
    result = sub_1400B6010(v13);
  v14 = a1[2];
  if ( v14 )
    result = sub_1400B6010(v14);
  v15 = a1[1];
  if ( v15 )
    result = sub_1400B6010(v15);
  if ( *a1 )
    return sub_1400B6010(*a1);
  return result;
}
