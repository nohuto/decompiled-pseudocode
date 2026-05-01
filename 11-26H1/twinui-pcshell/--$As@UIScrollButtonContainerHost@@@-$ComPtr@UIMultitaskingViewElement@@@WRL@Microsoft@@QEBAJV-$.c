/*
 * XREFs of ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D83A8
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1804D9470 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D95A4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_f85ba9ec_771f_4806_ba39_f860056371e5, a2);
}
