/*
 * XREFs of ?__abi_GetIids@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180697D24
 * Callers:
 *     ?__abi_GetIids@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180697D90 (-__abi_GetIids@-$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionVie_ea_180697D90.c)
 *     ?__abi_GetIids@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180697DA0 (-__abi_GetIids@-$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionVie_ea_180697DA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1802DB9A0 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -1457987196;
  v6 = 1069923333;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x11E06AE19DE1C534LL);
}
