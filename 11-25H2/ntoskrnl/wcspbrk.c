/*
 * XREFs of wcspbrk @ 0x1404FE1A0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1404C0FC4 (RtlpMuiRegLoadLicInformation.c)
 *     IoRegisterDeviceInterface @ 0x14095CE40 (IoRegisterDeviceInterface.c)
 *     PoThermalCounterSetCallback @ 0x1409FB460 (PoThermalCounterSetCallback.c)
 * Callees:
 *     wcschr @ 0x1404FD610 (wcschr.c)
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
