/*
 * XREFs of _CmIsLocalMachineContainer @ 0x14095CD8C
 * Callers:
 *     _CmGetDeviceContainerMappedProperty @ 0x14095C458 (_CmGetDeviceContainerMappedProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 */

bool __fastcall CmIsLocalMachineContainer(__int64 a1, const wchar_t *a2)
{
  char v2; // bl
  int v5; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v6[3]; // [rsp+44h] [rbp-74h] BYREF
  wchar_t Str1[40]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 0;
  v5 = 78;
  v6[0] = 0;
  if ( (int)CmGetDeviceRegProp(a1, L"HTREE\\ROOT\\0", 0LL, 0x25u, (__int64)v6, (__int64)Str1, (__int64)&v5, 0) >= 0 )
  {
    Str1[38] = 0;
    return wcsicmp(Str1, a2) == 0;
  }
  return v2;
}
