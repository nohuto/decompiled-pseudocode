/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@QEAA@XZ @ 0x1801091F4
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1801089AC (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 *     ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x1801DFA20 (-Release@-$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x18029351C (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHS.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1802935D0 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 *     ??1_lambda_2e2fc3472f23404d9698fd55902d938b_@@QEAA@XZ @ 0x18054CB40 (--1_lambda_2e2fc3472f23404d9698fd55902d938b_@@QEAA@XZ.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___HSTRING_____Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::Wrappers::HString__::_1_::dtor$0 @ 0x1806D46B8 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_1806D46B8.c)
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IVirtualDesktop___HSTRING______::_1_::dtor$0 @ 0x1806DE1DA (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_1806DE1DA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

HRESULT __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>(
        __int64 a1)
{
  HRESULT result; // eax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
  result = WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  return result;
}
