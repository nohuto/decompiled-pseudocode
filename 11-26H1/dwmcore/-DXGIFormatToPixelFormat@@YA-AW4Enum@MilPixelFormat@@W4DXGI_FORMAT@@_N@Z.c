/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1801C7D5C
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1801C7D30 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1802251B0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 <= 49 )
  {
    if ( a1 == 49 )
      return 11LL;
    v7 = a1 - 2;
    if ( !v7 )
      return (unsigned int)a2 + 25;
    v8 = v7 - 8;
    if ( !v8 )
      return (unsigned int)a2 + 22;
    v9 = v8 - 1;
    if ( !v9 )
      return (unsigned int)a2 + 22;
    v10 = v9 - 13;
    if ( !v10 )
      return 20LL;
    if ( (unsigned int)(v10 - 4) < 2 )
      return (unsigned int)a2 + 68;
  }
  else
  {
    v2 = a1 - 61;
    if ( !v2 )
      return 8LL;
    v3 = v2 - 4;
    if ( !v3 )
      return 67LL;
    v4 = v3 - 22;
    if ( !v4 )
      return (unsigned int)a2 + 15;
    v6 = v4 - 1;
    if ( !v6 )
      return 14LL;
    if ( v6 == 3 )
      return (unsigned int)a2 + 15;
  }
  return 0LL;
}
