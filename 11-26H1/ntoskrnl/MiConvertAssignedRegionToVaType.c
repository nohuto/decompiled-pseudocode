/*
 * XREFs of MiConvertAssignedRegionToVaType @ 0x140CFF7D4
 * Callers:
 *     MiSetSystemRegionTypes @ 0x140CFFD84 (MiSetSystemRegionTypes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertAssignedRegionToVaType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return 1LL;
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( !v1 )
        return 20LL;
      v2 = v1 - 1;
      if ( !v2 )
        return 4LL;
      v3 = v2 - 1;
      if ( !v3 )
        return 5LL;
      v4 = v3 - 1;
      if ( !v4 )
        return 7LL;
      v5 = v4 - 1;
      if ( !v5 )
        return 8LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 19LL;
      if ( v6 == 2 )
        return 18LL;
      return 0LL;
    }
    return 3LL;
  }
  v8 = a1 - 10;
  if ( !v8 )
    return 13LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 6LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 16LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 3LL;
  v12 = v11 - 1;
  if ( !v12 )
    return 14LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 15LL;
  v14 = v13 - 1;
  if ( !v14 )
    return 17LL;
  if ( v14 != 1 )
    return 0LL;
  return 11LL;
}
