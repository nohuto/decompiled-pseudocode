/*
 * XREFs of ?get_KeepAspectRatio@UwpWindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x180415890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowingEnvironmentSettings::get_KeepAspectRatio(
        UwpWindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 94) )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 120);
  return 0LL;
}
