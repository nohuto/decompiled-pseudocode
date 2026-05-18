/*
 * XREFs of sub_1800875B0 @ 0x1800875B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_1800875B0(_QWORD *a1)
{
  __int128 v3; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  sub_180011F5C(a1 + 225, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011F5C(a1 + 227, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011F5C(a1 + 229, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011F5C(a1 + 235, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011F5C(a1 + 237, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011F5C(a1 + 239, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_180010EC8(*((__int64 *)&v3 + 1));
  return sub_18005ABB0((__int64)a1);
}
