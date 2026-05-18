/*
 * XREFs of sub_180083C10 @ 0x180083C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

char __fastcall sub_180083C10(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  sub_180011F5C(a1 + 12, a2);
  sub_180011F5C(a1 + 14, a3);
  sub_180011F5C(a1 + 16, a4);
  sub_180011F5C(a1 + 18, a5);
  sub_180011F5C(a1 + 20, a6);
  v10 = a2[1];
  if ( v10 )
    sub_180010EC8(v10);
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010EC8(v12);
  v13 = a5[1];
  if ( v13 )
    sub_180010EC8(v13);
  v14 = a6[1];
  if ( v14 )
    sub_180010EC8(v14);
  return 1;
}
