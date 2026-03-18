/*
 * XREFs of GetDpiDepSysMetCacheMetricSlot @ 0x140049B18
 * Callers:
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiDepSysMetCacheMetricSlot(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx

  if ( a1 > 32 )
  {
    if ( a1 > 51 )
    {
      v1 = a1 - 52;
      if ( !v1 )
        return 23LL;
      v2 = v1 - 1;
      if ( !v2 )
        return 24LL;
      v3 = v2 - 1;
      if ( !v3 )
        return 25LL;
      v4 = v3 - 1;
      if ( !v4 )
        return 26LL;
      v5 = v4 - 16;
      if ( !v5 )
        return 27LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 28LL;
      if ( v6 == 20 )
        return 29LL;
      return 0xFFFFFFFFLL;
    }
    if ( a1 == 51 )
      return 22LL;
    v21 = a1 - 33;
    if ( !v21 )
      return 15LL;
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 3;
        if ( !v24 )
          return 18LL;
        v25 = v24 - 1;
        if ( !v25 )
          return 19LL;
        v26 = v25 - 10;
        if ( !v26 )
          return 20LL;
        if ( v26 == 1 )
          return 21LL;
        return 0xFFFFFFFFLL;
      }
      return 17LL;
    }
    return 16LL;
  }
  if ( a1 == 32 )
    return 14LL;
  if ( a1 > 14 )
  {
    v15 = a1 - 15;
    if ( !v15 )
      return 9LL;
    v16 = v15 - 5;
    if ( !v16 )
      return 10LL;
    v17 = v16 - 1;
    if ( !v17 )
      return 11LL;
    v18 = v17 - 7;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
          return 12LL;
        if ( v20 == 1 )
          return 13LL;
        return 0xFFFFFFFFLL;
      }
      return 17LL;
    }
    return 16LL;
  }
  if ( a1 == 14 )
    return 8LL;
  result = 2LL;
  v8 = a1 - 2;
  if ( !v8 )
    return 0LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 1LL;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 5;
    if ( !v11 )
      return 3LL;
    v12 = v11 - 1;
    if ( !v12 )
      return 4LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 5LL;
    v14 = v13 - 1;
    if ( !v14 )
      return 6LL;
    if ( v14 == 1 )
      return 7LL;
    return 0xFFFFFFFFLL;
  }
  return result;
}
