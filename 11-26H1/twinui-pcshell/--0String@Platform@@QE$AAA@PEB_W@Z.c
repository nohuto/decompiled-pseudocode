/*
 * XREFs of ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x180209F58
 * Callers:
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18009BEF4 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x180209F00 (-ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x1806B5350 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     WindowsCreateString_0 @ 0x1802CA83E (WindowsCreateString_0.c)
 *     wcslen_0 @ 0x1802D3748 (wcslen_0.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, const wchar_t *a2)
{
  UINT32 v4; // eax
  HRESULT v5; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = a1;
  if ( !a2 )
    return 0LL;
  string = 0LL;
  v4 = wcslen_0(a2);
  v5 = WindowsCreateString_0(a2, v4, &string);
  __abi_ThrowIfFailed(v5);
  return string;
}
