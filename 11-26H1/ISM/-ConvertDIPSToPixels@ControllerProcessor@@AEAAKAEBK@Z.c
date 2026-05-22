/*
 * XREFs of ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180095410
 * Callers:
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x1800771FC (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

int __fastcall ControllerProcessor::ConvertDIPSToPixels(ControllerProcessor *this, const unsigned int *a2)
{
  int v3; // eax
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int nDenominator[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  *(_OWORD *)nDenominator = 0LL;
  GetPointerDeviceRects(-1LL, nDenominator, &v5);
  v3 = MulDiv(DWORD2(v5) - v5, 2540, nDenominator[2]);
  return MulDiv(*a2, v3, 96);
}
