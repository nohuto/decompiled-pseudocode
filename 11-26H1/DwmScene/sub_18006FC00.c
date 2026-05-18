/*
 * XREFs of sub_18006FC00 @ 0x18006FC00
 * Callers:
 *     sub_18006FB90 @ 0x18006FB90 (sub_18006FB90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006FC00(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx

  if ( a1 <= 0x74 )
  {
    if ( a1 == 116 )
      return 5LL;
    v1 = a1 - 96;
    if ( !v1 )
      return 13LL;
    v2 = v1 - 11;
    if ( !v2 )
      return 14LL;
    result = 2LL;
    v4 = v2 - 2;
    if ( !v4 )
      return 15LL;
    v5 = v4 - 3;
    if ( !v5 )
      return 1LL;
    v6 = v5 - 1;
    if ( !v6 )
      return result;
    v7 = v6 - 1;
    if ( !v7 )
      return 3LL;
    if ( v7 == 1 )
      return 4LL;
    return 0LL;
  }
  v8 = a1 - 117;
  if ( !v8 )
    return 6LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 7LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 8LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 9LL;
  v12 = v11 - 1;
  if ( !v12 )
    return 10LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 11LL;
  if ( v13 != 1 )
    return 0LL;
  return 12LL;
}
