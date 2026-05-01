/*
 * XREFs of ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1806677A0
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA94 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BBE68 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBE68.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x1806676AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1806676AC.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  char *v8; // rax
  _QWORD *v9; // rax
  char *v10; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 32) )
  {
    v6 = std::operator+<unsigned short>(v12, a1, (__int64)L"&");
    std::wstring::operator=((_QWORD *)a1, v6);
    std::wstring::_Tidy_deallocate(v12);
  }
  else
  {
    v7 = std::operator+<unsigned short>(v12, a1, (__int64)L"?");
    std::wstring::operator=((_QWORD *)a1, v7);
    std::wstring::_Tidy_deallocate(v12);
    *(_BYTE *)(a1 + 32) = 1;
  }
  v8 = std::operator+<unsigned short>((char *)v12, (_QWORD *)a1, a2);
  std::wstring::operator=((_QWORD *)a1, v8);
  std::wstring::_Tidy_deallocate(v12);
  v9 = std::operator+<unsigned short>(v12, a1, (__int64)L"=");
  std::wstring::operator=((_QWORD *)a1, v9);
  std::wstring::_Tidy_deallocate(v12);
  v10 = std::operator+<unsigned short>((char *)v12, (_QWORD *)a1, a3);
  std::wstring::operator=((_QWORD *)a1, v10);
  return std::wstring::_Tidy_deallocate(v12);
}
