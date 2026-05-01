/*
 * XREFs of ?deserialize@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806BAF30
 * Callers:
 *     <none>
 * Callees:
 *     ??$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1806B23A0 (--$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@.c)
 */

void __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>::deserialize(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v2; // [rsp+20h] [rbp-28h] BYREF
  char v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 4;
  v2 = "test";
  v4 = (a1 + 256) & -(__int64)(a1 != 0);
  tson::load_nothrow<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest &>(
    a2,
    (__int64)&v2);
}
