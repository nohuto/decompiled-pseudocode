/*
 * XREFs of IsTouchPointerDevice @ 0x14013EB58
 * Callers:
 *     IsCursorShowablePointerDevice @ 0x14013EB20 (IsCursorShowablePointerDevice.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1401610E8 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTouchPointerDevice(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 1;
  if ( v1 != 1 )
    return (unsigned int)(v1 - 2) <= 2;
  return v2;
}
