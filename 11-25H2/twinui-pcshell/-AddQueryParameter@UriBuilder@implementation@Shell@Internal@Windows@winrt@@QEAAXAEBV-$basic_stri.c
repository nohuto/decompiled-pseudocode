/*
 * XREFs of ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180641CD8
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BF430 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF430.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x180641BD8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180641BD8.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v7; // rax
  char *v8; // rax
  void *v9; // rax
  char *v10; // rax
  void *v11[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 32) )
  {
    v6 = std::operator+<unsigned short>(v11, a1, L"&");
    std::wstring::operator=(a1, (__int64)v6);
    std::wstring::_Tidy_deallocate(v11);
  }
  else
  {
    v7 = std::operator+<unsigned short>(v11, a1, L"?");
    std::wstring::operator=(a1, (__int64)v7);
    std::wstring::_Tidy_deallocate(v11);
    *(_BYTE *)(a1 + 32) = 1;
  }
  v8 = std::operator+<unsigned short>((char *)v11, (_QWORD *)a1, a2);
  std::wstring::operator=(a1, (__int64)v8);
  std::wstring::_Tidy_deallocate(v11);
  v9 = std::operator+<unsigned short>(v11, a1, L"=");
  std::wstring::operator=(a1, (__int64)v9);
  std::wstring::_Tidy_deallocate(v11);
  v10 = std::operator+<unsigned short>((char *)v11, (_QWORD *)a1, a3);
  std::wstring::operator=(a1, (__int64)v10);
  std::wstring::_Tidy_deallocate(v11);
}
