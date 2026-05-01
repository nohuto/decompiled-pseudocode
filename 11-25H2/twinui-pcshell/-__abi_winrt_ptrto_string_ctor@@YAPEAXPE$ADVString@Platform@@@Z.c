/*
 * XREFs of ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1801D3898
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1801D3674 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1801D37BC (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x180678718 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ.c)
 *     ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x18067DCAC (-to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x18068DEF0 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 *     ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x180694000 (-get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Plat.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     WindowsDuplicateString_0 @ 0x1802D3C53 (WindowsDuplicateString_0.c)
 */

HSTRING __fastcall __abi_winrt_ptrto_string_ctor(HSTRING a1)
{
  HRESULT v1; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  newString = 0LL;
  v1 = WindowsDuplicateString_0(a1, &newString);
  __abi_ThrowIfFailed(v1);
  return newString;
}
