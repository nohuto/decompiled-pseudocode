/*
 * XREFs of ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1801B8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsRTL(SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  return (unsigned int)Mirror_IsThreadRTL() != 0;
}
