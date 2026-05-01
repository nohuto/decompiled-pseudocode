/*
 * XREFs of ??1_lambda_2e2fc3472f23404d9698fd55902d938b_@@QEAA@XZ @ 0x18054CB40
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1801089AC (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 *     ??1?$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x18054CBB8 (--1-$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@QEAA@XZ @ 0x1801091F4 (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@QEAA@XZ.c)
 */

void __fastcall _lambda_2e2fc3472f23404d9698fd55902d938b_::~_lambda_2e2fc3472f23404d9698fd55902d938b_(
        _lambda_2e2fc3472f23404d9698fd55902d938b_ *this)
{
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>((__int64)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
