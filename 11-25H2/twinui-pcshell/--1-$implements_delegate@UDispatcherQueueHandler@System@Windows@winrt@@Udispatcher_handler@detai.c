/*
 * XREFs of ??1?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18058E46C
 * Callers:
 *     ?Release@?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@UEAAIXZ @ 0x18020FE10 (-Release@-$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>::~implements_delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  wil::details::dispatcher_handler::~dispatcher_handler((wil::details::dispatcher_handler *)(a1 + 16));
}
