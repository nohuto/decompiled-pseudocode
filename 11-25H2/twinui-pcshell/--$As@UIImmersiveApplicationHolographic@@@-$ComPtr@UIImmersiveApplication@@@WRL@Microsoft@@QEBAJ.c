/*
 * XREFs of ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C4900
 * Callers:
 *     ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801C4830 (-GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803FC03C (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e, a2);
}
