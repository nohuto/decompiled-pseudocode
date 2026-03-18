/*
 * XREFs of ?D3dPixelFormatToDisplayConfigPixelFormat@@YA?AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z @ 0x1403D41F8
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D3dPixelFormatToDisplayConfigPixelFormat(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx

  v1 = a1 - 20;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 4LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 2LL;
  if ( v5 == 18 )
    return 1LL;
  return 5LL;
}
