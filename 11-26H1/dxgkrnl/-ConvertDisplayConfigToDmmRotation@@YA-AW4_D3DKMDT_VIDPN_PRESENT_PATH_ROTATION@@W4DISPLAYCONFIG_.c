/*
 * XREFs of ?ConvertDisplayConfigToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_ROTATION@@W41@@Z @ 0x140062170
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1402D6D90 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigToDmmRotation(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 )
      return 2LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 3LL;
    if ( v3 == 1 )
      return 4LL;
  }
  return 1LL;
}
