/*
 * XREFs of sub_1800496A0 @ 0x1800496A0
 * Callers:
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800496A0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = a1[10];
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = a1[8];
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = a1[6];
  if ( v5 )
    result = sub_180010EC8(v5);
  v6 = a1[4];
  if ( v6 )
    result = sub_180010EC8(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
