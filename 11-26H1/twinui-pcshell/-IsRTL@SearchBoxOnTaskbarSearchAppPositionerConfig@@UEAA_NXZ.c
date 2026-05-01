/*
 * XREFs of ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x18022F660
 * Callers:
 *     <none>
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsRTL(SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  return (unsigned int)Mirror_IsThreadRTL() != 0;
}
