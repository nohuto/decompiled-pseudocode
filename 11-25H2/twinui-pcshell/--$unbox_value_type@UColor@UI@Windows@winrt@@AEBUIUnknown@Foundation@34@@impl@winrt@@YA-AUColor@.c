/*
 * XREFs of ??$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA?AUColor@UI@Windows@1@AEBUIUnknown@Foundation@41@@Z @ 0x180574AB8
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180443934 (--0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@UColor@UI@Windows@winrt@@@Foundation@Windows@winrt@@UColor@UI@34@@impl@winrt@@QEBA@XZ @ 0x18057796C (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@UColor@UI@Windows@winrt@@@Foundatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::unbox_value_type<winrt::Windows::UI::Color,winrt::Windows::Foundation::IUnknown const &>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  unsigned int v3; // ebx
  const struct winrt::impl::slim_source_location *v5; // rax
  int pExceptionObject; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h]
  _BYTE v8[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  char v10; // [rsp+68h] [rbp+18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF

  v1 = *a1;
  if ( !v1 )
  {
    v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v8);
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)&pExceptionObject, v5);
    throw (winrt::hresult_no_interface *)&pExceptionObject;
  }
  v11 = 0LL;
  pExceptionObject = 0;
  v7 = 0LL;
  v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>>, &v11);
  winrt::check_hresult((int *)&v9, v2, (__int64)&pExceptionObject);
  v9 = v11;
  v3 = *(_DWORD *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>,winrt::Windows::UI::Color>::Value(
                    &v9,
                    &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return v3;
}
