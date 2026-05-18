/*
 * XREFs of sub_180055E5C @ 0x180055E5C
 * Callers:
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180055D40 @ 0x180055D40 (sub_180055D40.c)
 */

char __fastcall sub_180055E5C(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 1;
  v2 = *(__int64 **)a1;
  v3 = 0;
  v4 = **(_QWORD **)a1;
  v5 = **(_QWORD **)a2;
  v9 = v4;
  v10 = v5;
  while ( (__int64 *)v4 != v2 )
  {
    if ( !sub_180055D40(v4 + 32, v5 + 32) )
      return 1;
    sub_18001D6F4(&v9, v6);
    sub_18001D6F4(&v10, v7);
    v4 = v9;
    v5 = v10;
  }
  return v3;
}
