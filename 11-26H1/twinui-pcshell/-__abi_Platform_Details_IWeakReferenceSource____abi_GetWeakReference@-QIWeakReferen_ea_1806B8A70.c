/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B8A70
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WCI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B8AC0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1806B8AC0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WKA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B8AD0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1806B8AD0.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B5880 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAPE$AAU.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAllUpViewController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 225));
  *a2 = 0LL;
  *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAllUpViewController__UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  return 0LL;
}
