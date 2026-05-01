/*
 * XREFs of ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801F3574
 * Callers:
 *     ?UpdateEngagementFlags@CWinRTApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x1801F3490 (-UpdateEngagementFlags@CWinRTApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z.c)
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802E54FC (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802E5840 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x180310860 (-GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z.c)
 *     ?IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z @ 0x180310BA0 (-IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z.c)
 *     ?SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z @ 0x180310EB0 (-SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, a2);
}
