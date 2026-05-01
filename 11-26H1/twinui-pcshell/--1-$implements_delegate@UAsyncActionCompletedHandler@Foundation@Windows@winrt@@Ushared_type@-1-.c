/*
 * XREFs of ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@QEAA@XZ @ 0x1800E65EC
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x1800E65A0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@S.c)
 *     ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x180351FF0 (-Release@-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_ty.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall __1__implements_delegate_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__4_YA_AUIAsyncAction_234_AEBU6234_00_Z__impl_winrt__QEAA_XZ(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>(a1 + 40);
  `winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>'::`2'::shared_type::~shared_type((HANDLE *)(a1 + 16));
}
