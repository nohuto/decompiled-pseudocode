/*
 * XREFs of sub_140088700 @ 0x140088700
 * Callers:
 *     sub_140121B14 @ 0x140121B14 (sub_140121B14.c)
 * Callees:
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_140124930 @ 0x140124930 (sub_140124930.c)
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 */

__int64 __fastcall sub_140088700(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  *a3 = 1;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v4 = *(void **)(v3 + 16);
  }
  else
  {
    if ( *(_DWORD *)v3 != 1314275652 )
      return 3221225485LL;
    v4 = *(void **)(v3 + 1136);
    if ( !v4 )
      return 3221225485LL;
  }
  result = sub_140088878(a2, 0LL, &v7, &v6);
  if ( (int)result < 0 )
    return result;
  switch ( *(_DWORD *)(v7 + 4) )
  {
    case 1:
      return sub_140124E74(v4);
    case 2:
      return sub_1401251CC(v4);
    case 3:
      return sub_140124930(v4);
    case 4:
      return sub_1401251CC(v4);
    case 5:
      return sub_140124930(v4);
  }
  return 3221225485LL;
}
