/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6DE8
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800E6D84 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 67 )
  {
    if ( a1 == 67 )
      return 1LL;
    v9 = a1 - 2;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 8;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 1LL;
    v12 = v11 - 13;
    if ( !v12 )
      return 1LL;
    v13 = v12 - 4;
    if ( !v13 )
      return 1LL;
    v14 = v13 - 21;
    if ( !v14 )
      return 1LL;
    v15 = v14 - 12;
    if ( !v15 )
      return 1LL;
    return v15 == 4;
  }
  else
  {
    v1 = a1 - 87;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 3;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 12;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 1LL;
    v7 = v5 - 2;
    if ( !v7 )
      return 1LL;
    return v7 == 1;
  }
}
