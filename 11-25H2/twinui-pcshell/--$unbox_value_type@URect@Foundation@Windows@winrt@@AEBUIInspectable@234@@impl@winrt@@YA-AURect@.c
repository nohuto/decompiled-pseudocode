/*
 * XREFs of ??$unbox_value_type@URect@Foundation@Windows@winrt@@AEBUIInspectable@234@@impl@winrt@@YA?AURect@Foundation@Windows@1@AEBUIInspectable@341@@Z @ 0x180443814
 * Callers:
 *     ?SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x180443E00 (-SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180443934 (--0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall winrt::impl::unbox_value_type<winrt::Windows::Foundation::Rect,winrt::Windows::Foundation::IInspectable const &>(
        _OWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  const struct winrt::impl::slim_source_location *v6; // rax
  int pExceptionObject; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+28h] [rbp-28h]
  _BYTE v9[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)&pExceptionObject, v6);
    throw (winrt::hresult_no_interface *)&pExceptionObject;
  }
  v11 = 0LL;
  pExceptionObject = 0;
  v8 = 0LL;
  v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>>, &v11);
  winrt::check_hresult((int *)&v10, v4, (__int64)&pExceptionObject);
  v10 = v11;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
    &v10,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a1;
}
