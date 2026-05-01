/*
 * XREFs of _xblib::singleton_with_factory_NexusPolicyManager_xblib::singleton_initialize_factory_NexusPolicyManager___::Instance_::_1_::dtor$4 @ 0x1806E44ED
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall xblib::singleton_with_factory_NexusPolicyManager_xblib::singleton_initialize_factory_NexusPolicyManager___::Instance_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a2 + 48);
  }
}
