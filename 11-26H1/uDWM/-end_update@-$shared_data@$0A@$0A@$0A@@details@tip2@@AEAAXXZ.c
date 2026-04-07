/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18008A89C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180041668 (--1-$test_data_control@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tr.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180041DF0 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004207C (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D32F0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Pri.c)
 *     ?log_message@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z @ 0x1800D4CAC (-log_message@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z.c)
 * Callees:
 *     TestUnlockData @ 0x180078A88 (TestUnlockData.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180079984 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::end_update(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h]
  __int128 v7; // [rsp+40h] [rbp-C0h]
  void *v8; // [rsp+50h] [rbp-B0h] BYREF
  char v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+59h] [rbp-A7h] BYREF
  char v11; // [rsp+5Dh] [rbp-A3h]
  char v12; // [rsp+5Eh] [rbp-A2h] BYREF
  char v13; // [rsp+859h] [rbp+759h] BYREF
  int *v14; // [rsp+860h] [rbp+760h]
  char *v15; // [rsp+868h] [rbp+768h]
  char *v16; // [rsp+870h] [rbp+770h]

  v2 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( *(_QWORD *)(a1 + 240) && (v2 & 0x100) == 0 && (*(_DWORD *)(a1 + 20) & 0x8000) == 0 )
  {
    v8 = 0LL;
    v9 = 0;
    v14 = &v10;
    v10 = -2143256512;
    v16 = &v13;
    v11 = 0;
    v15 = &v12;
    v5 = 0LL;
    *(_OWORD *)pv = 0LL;
    v7 = 0LL;
    v3 = tip2::details::shared_data<0,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v8, 1u);
    TestUnlockData(*(_QWORD *)(a1 + 240), v4, v3, &v5);
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8);
    CoTaskMemFree(pv[1]);
  }
  --*(_DWORD *)(a1 + 232);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
