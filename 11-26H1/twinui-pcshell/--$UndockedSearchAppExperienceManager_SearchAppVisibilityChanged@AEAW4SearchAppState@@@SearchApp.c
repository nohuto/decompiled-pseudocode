/*
 * XREFs of ??$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1800B670C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___::Invoke @ 0x1800B6620 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BD228 (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 */

__int64 __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppVisibilityChanged<enum SearchAppState &>(
        int *a1)
{
  __int64 result; // rax
  int v3; // r9d
  _DWORD *v4; // rcx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  result = wil::details::static_lazy<SearchAppLauncherLogging>::get(
             a1,
             _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v4 = *(_DWORD **)(result + 8);
  if ( *v4 > 5u )
  {
    v5 = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
             (_DWORD)v4,
             (unsigned int)&unk_1807FA629,
             0,
             v3,
             (__int64)&v5);
  }
  return result;
}
