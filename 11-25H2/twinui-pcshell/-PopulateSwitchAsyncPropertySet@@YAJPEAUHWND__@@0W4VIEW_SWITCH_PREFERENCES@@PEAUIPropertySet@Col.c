/*
 * XREFs of ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802F7FF8
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FAB20 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18010CDFC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D70D0 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PopulateSwitchAsyncPropertySet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v16; // [rsp+40h] [rbp-10h]

  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
    a4);
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
         v16,
         v7,
         1u);
  v9 = v8;
  if ( a1 && v8 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           v16,
           v10,
           a1);
  }
  if ( a2 )
  {
    if ( v9 < 0 )
      goto LABEL_9;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           v16,
           v11,
           a2);
  }
  if ( v9 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_vsp", 0x10u, 0xFu);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           v16,
           v12,
           a3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return (unsigned int)v9;
}
