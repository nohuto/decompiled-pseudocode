/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180699604
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180699660 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180699660.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180699670 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180699670.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1801D15B8 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AA.c)
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__VirtualDesktopSwitcherController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 224));
  *a2 = 0LL;
  *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  return 0LL;
}
