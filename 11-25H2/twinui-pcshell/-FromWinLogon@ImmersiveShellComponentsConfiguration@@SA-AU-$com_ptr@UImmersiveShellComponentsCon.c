/*
 * XREFs of ?FromWinLogon@ImmersiveShellComponentsConfiguration@@SA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@winrt@@XZ @ 0x1802196E8
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x18024D150 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1802197C4 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803CF6E8 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ImmersiveShellComponentsConfiguration::FromWinLogon(_QWORD *a1)
{
  void **v2; // rax
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h] BYREF
  void **v6; // [rsp+38h] [rbp-38h] BYREF
  void *pvData[4]; // [rsp+40h] [rbp-30h] BYREF

  v5 = (__int64)a1;
  TryGetString(
    pvData,
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
    L"ImmersiveShellConfiguration");
  if ( !pvData[2] )
  {
LABEL_8:
    *a1 = 0LL;
    goto LABEL_9;
  }
  v2 = pvData;
  if ( pvData[3] > (void *)7 )
    v2 = (void **)pvData[0];
  v6 = v2;
  v5 = -2147483646LL;
  winrt::make_self<ImmersiveShellComponentsConfiguration,HKEY__ *,unsigned short const *>(&v4, &v5, &v6);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 24)) >> 3)) )
  {
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    goto LABEL_8;
  }
  *a1 = v4;
LABEL_9:
  std::wstring::_Tidy_deallocate(pvData);
  return a1;
}
