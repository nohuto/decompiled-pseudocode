/*
 * XREFs of ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800873E0
 * Callers:
 *     ?GetStateRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180087298 (-GetStateRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$sha.c)
 *     ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x1800894F4 (-UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrw.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800B8C04 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(__int64 a1)
{
  void (__fastcall ****RootSettingsContainer)(_QWORD, __int64, PVOID, __int64); // rax
  void (__fastcall ***v3)(_QWORD, __int64, PVOID, __int64); // rdi
  void (__fastcall *v4)(_QWORD, __int64, PVOID, __int64); // rbx
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  __int64 v7; // r9
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER v11; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v9 = a1;
  RootSettingsContainer = (void (__fastcall ****)(_QWORD, __int64, PVOID, __int64))CreativeFramework::CommonHelper::MakeRootSettingsContainer(&v9);
  v3 = *RootSettingsContainer;
  v4 = ***RootSettingsContainer;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)&off_1800D5B60, v5);
  LOBYTE(v7) = 1;
  v4(v3, a1, v6[1].Reserved.Reserved1, v7);
  v12 = 0LL;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
