/*
 * XREFs of ?FindHotpatchImageIfExists@@YAJKKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1401C880C
 * Callers:
 *     ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C86CC (-AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14006A82C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     UserGetLoadedImageInformation @ 0x1401B6DF0 (UserGetLoadedImageInformation.c)
 *     ?PlatformReadRegistryString@NSInstrumentation@@YAJKPEBG0GPEAG@Z @ 0x1401D4440 (-PlatformReadRegistryString@NSInstrumentation@@YAJKPEBG0GPEAG@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall FindHotpatchImageIfExists(unsigned int a1, int a2, struct _SYSTEM_GDI_DRIVER_INFORMATION *a3)
{
  NSInstrumentation *v4; // rcx
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // r9
  int result; // eax
  int v8; // ebx
  unsigned __int16 *v10; // [rsp+28h] [rbp-270h]
  unsigned __int16 v11[32]; // [rsp+30h] [rbp-268h] BYREF
  wchar_t Str[264]; // [rsp+70h] [rbp-228h] BYREF

  if ( (int)StringCchPrintfW(v11, 26LL, L"Hotpatch\\%08X%08X", a1, a2) < 0 )
    return -1073741823;
  result = NSInstrumentation::PlatformReadRegistryString(v4, (unsigned int)v11, v5, v6, (unsigned __int16)Str, v10);
  v8 = result;
  if ( result >= 0 )
  {
    if ( !(unsigned int)UserGetLoadedImageInformation(Str, a3) )
      return -1073741823;
    return v8;
  }
  return result;
}
