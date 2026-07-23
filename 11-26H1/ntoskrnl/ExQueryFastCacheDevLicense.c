/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x140AF6380
 * Callers:
 *     SepIsLockedDown @ 0x140815978 (SepIsLockedDown.c)
 * Callees:
 *     KIsDeveloperModeEnabled @ 0x140AF63B4 (KIsDeveloperModeEnabled.c)
 */

bool ExQueryFastCacheDevLicense()
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)KIsDeveloperModeEnabled(&v2) >= 0 )
    return v2 != 0;
  return v0;
}
