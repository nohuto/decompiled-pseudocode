/*
 * XREFs of ValidatePtiMouse @ 0x14011F4D0
 * Callers:
 *     DestroyThreadHidObjects @ 0x14011C130 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E5B0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 */

__int64 __fastcall ValidatePtiMouse(__int64 a1)
{
  if ( a1 )
    return PtiMouseFromQ(a1);
  else
    return 0LL;
}
