/*
 * XREFs of sub_180059180 @ 0x180059180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 */

__int64 __fastcall sub_180059180(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_18005A8BC(a1, &v7);
    v7 = 0LL;
    sub_18005A750(a1, &v7);
  }
  v8 = *(_DWORD *)(*a2 + 244LL);
  sub_180052864((__int64 *)(a1 + 448), &v8);
  result = (__int64)sub_180012C40(&v7, a2);
  v5 = *(_QWORD *)(result + 8);
  if ( v5 )
    result = sub_180010EC8(v5);
  v6 = a2[1];
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
