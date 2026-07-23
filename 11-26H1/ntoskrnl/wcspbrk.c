/*
 * XREFs of wcspbrk @ 0x14053AFB4
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140724830 (RtlpMuiRegLoadLicInformation.c)
 *     IoRegisterDeviceInterface @ 0x1409AB500 (IoRegisterDeviceInterface.c)
 *     PoThermalCounterSetCallback @ 0x140A761B0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
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
