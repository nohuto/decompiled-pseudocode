/*
 * XREFs of ?FromWinLogon@ImmersiveShellComponentsConfiguration@@SA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@winrt@@XZ @ 0x18020B920
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180241100 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18020BA00 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803D9364 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ImmersiveShellComponentsConfiguration::FromWinLogon(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-38h] BYREF
  _QWORD pvData[4]; // [rsp+40h] [rbp-30h] BYREF

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
  if ( pvData[3] > 7uLL )
    v2 = (_QWORD *)pvData[0];
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
