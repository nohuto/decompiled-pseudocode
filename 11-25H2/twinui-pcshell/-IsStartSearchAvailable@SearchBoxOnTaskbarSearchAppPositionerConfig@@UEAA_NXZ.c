/*
 * XREFs of ?IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1802D0A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsStartSearchAvailable(StartSearchSharedUtils *this)
{
  return StartSearchSharedUtils::IsSearchBoxExtensionAvailable(this);
}
