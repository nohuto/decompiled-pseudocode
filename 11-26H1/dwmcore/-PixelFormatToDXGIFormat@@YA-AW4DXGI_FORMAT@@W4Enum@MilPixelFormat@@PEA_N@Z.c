/*
 * XREFs of ?PixelFormatToDXGIFormat@@YA?AW4DXGI_FORMAT@@W4Enum@MilPixelFormat@@PEA_N@Z @ 0x1800E1B20
 * Callers:
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800E1A4C (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PixelFormatToDXGIFormat(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 > 19 )
  {
    if ( a1 > 67 )
    {
      if ( (unsigned int)(a1 - 68) <= 1 )
        return 28LL;
    }
    else
    {
      if ( a1 == 67 )
        return 65LL;
      if ( a1 <= 26 )
      {
        v6 = a1 - 20;
        if ( !v6 )
          return 24LL;
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( !v9 )
              return 11LL;
            if ( v9 == 3 )
              return 2LL;
          }
        }
      }
    }
    return 0LL;
  }
  if ( a1 == 19 )
    return 0LL;
  if ( a1 <= 10 )
  {
    if ( a1 == 8 )
      return 61LL;
    return 0LL;
  }
  v1 = a1 - 11;
  if ( !v1 )
    return 49LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) <= 1 )
      return 87LL;
    return 0LL;
  }
  return 88LL;
}
