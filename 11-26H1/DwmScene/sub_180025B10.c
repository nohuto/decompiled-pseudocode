/*
 * XREFs of sub_180025B10 @ 0x180025B10
 * Callers:
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_1800D9107 @ 0x1800D9107 (sub_1800D9107.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180025B10(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a1[12];
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = a1[10];
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = a1[8];
  if ( v5 )
    result = sub_180010EC8(v5);
  v6 = a1[5];
  if ( v6 )
    result = sub_180010EC8(v6);
  v7 = a1[3];
  if ( v7 )
    result = sub_180010EC8(v7);
  v8 = a1[1];
  if ( v8 )
    return sub_180010EC8(v8);
  return result;
}
