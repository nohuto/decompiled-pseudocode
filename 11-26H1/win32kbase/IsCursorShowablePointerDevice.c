/*
 * XREFs of IsCursorShowablePointerDevice @ 0x14013EB20
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     IsTouchPointerDevice @ 0x14013EB58 (IsTouchPointerDevice.c)
 */

__int64 __fastcall IsCursorShowablePointerDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx
  int v5; // eax

  v2 = IsTouchPointerDevice(a1, a2, a1);
  v4 = 0;
  if ( v2 )
    return 1;
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 == 6 || ((v5 - 5) & 0xFFFFFFFD) == 0 )
    return 1;
  return v4;
}
