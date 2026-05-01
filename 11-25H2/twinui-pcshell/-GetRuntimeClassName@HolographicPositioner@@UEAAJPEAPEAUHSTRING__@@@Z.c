/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803F9330
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803F9360 (-GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WLI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803F9380 (-GetRuntimeClassName@HolographicPositioner@@WLI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WMA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803F93A0 (-GetRuntimeClassName@HolographicPositioner@@WMA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}
