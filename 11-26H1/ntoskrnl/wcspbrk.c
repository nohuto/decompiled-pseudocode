/*
 * XREFs of wcspbrk @ 0x140538B34
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14071FC10 (RtlpMuiRegLoadLicInformation.c)
 *     PoThermalCounterSetCallback @ 0x140A691E0 (PoThermalCounterSetCallback.c)
 *     IoRegisterDeviceInterface @ 0x140AFA280 (IoRegisterDeviceInterface.c)
 * Callees:
 *     wcschr @ 0x140537F60 (wcschr.c)
 */

wchar_t *__cdecl wcspbrk(const wchar_t *Str, const wchar_t *Control)
{
  wchar_t v2; // ax
  const wchar_t *i; // rbx

  v2 = *Str;
  for ( i = Str; ; v2 = *i )
  {
    if ( !v2 )
      return 0LL;
    if ( wcschr(Control, v2) )
      break;
    ++i;
  }
  return (wchar_t *)i;
}
