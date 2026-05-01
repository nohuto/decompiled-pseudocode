/*
 * XREFs of ?__abi_GetIids@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1806A38C0
 * Callers:
 *     ?__abi_GetIids@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1806A3920 (-__abi_GetIids@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experience_ea_1806A3920.c)
 *     ?__abi_GetIids@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1806A3930 (-__abi_GetIids@GamingNexusChordAccessibilityPressedEventHandler@Switcher@Experience_ea_1806A3930.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1802D40A0 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::GamingNexusChordAccessibilityPressedEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -1832370041;
  v6 = -2109854890;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x363E44522C95D007LL);
}
