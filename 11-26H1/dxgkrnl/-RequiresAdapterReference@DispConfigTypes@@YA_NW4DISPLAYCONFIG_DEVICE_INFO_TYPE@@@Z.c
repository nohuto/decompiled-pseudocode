/*
 * XREFs of ?RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14003E074
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1402C9210 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispConfigTypes::RequiresAdapterReference(int a1)
{
  if ( a1 <= -20 )
    return a1 != -20 && a1 != -22 && a1 != -39 && a1 != -36 && a1 != -35 && a1 != -34 && a1 != -24;
  if ( a1 == -19 || a1 == -14 || a1 == -13 || a1 == -6 || a1 == -5 )
    return 0;
  return a1 != 3;
}
