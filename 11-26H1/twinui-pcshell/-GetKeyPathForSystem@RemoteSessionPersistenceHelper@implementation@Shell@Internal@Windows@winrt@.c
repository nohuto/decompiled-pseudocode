/*
 * XREFs of ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801F2FE0
 * Callers:
 *     ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x18027C47C (-TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x180663D74 (-SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18066414C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801F31AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801F31AC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
        __int64 a1,
        __int64 a2,
        winrt::hstring *a3,
        _BYTE *a4)
{
  __int64 **v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  void **v12; // r13
  __int64 v13; // r12
  __int128 *v14; // r15
  __int64 size_of; // rax
  const unsigned __int16 *v17; // [rsp+20h] [rbp-49h]
  void *Src[2]; // [rsp+28h] [rbp-41h] BYREF
  __int128 v19; // [rsp+38h] [rbp-31h]
  __int128 v20; // [rsp+48h] [rbp-21h] BYREF
  __int128 v21; // [rsp+58h] [rbp-11h]
  _QWORD v22[4]; // [rsp+68h] [rbp-1h] BYREF

  v6 = (__int64 **)(a1 + (*a4 != 0 ? 232LL : 200LL));
  *(_OWORD *)Src = 0LL;
  v19 = 0LL;
  v7 = (unsigned __int64)v6[2];
  v8 = 7LL;
  if ( (unsigned __int64)v6[3] > 7 )
    v6 = (__int64 **)*v6;
  std::wstring::_Construct<2,unsigned short const *>(Src, v6, v7);
  if ( *(_QWORD *)a3 )
  {
    v17 = winrt::hstring::c_str(a3);
    v9 = std::_WChar_traits<wchar_t>::length((__int64)L"\\");
    v10 = v9;
    v11 = v19;
    if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v19 < v9 )
      std::_Xlen_string();
    v12 = Src;
    if ( *((_QWORD *)&v19 + 1) > 7uLL )
      v12 = (void **)Src[0];
    v20 = 0LL;
    v21 = 0LL;
    v13 = v19 + v9;
    v14 = &v20;
    if ( (unsigned __int64)v19 + v9 > 7 )
    {
      v8 = std::wstring::_Calculate_growth(v19 + v9, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
      size_of = std::_Get_size_of_n<2>(v8 + 1);
      v14 = (__int128 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      *(_QWORD *)&v20 = v14;
    }
    *(_QWORD *)&v21 = v13;
    *((_QWORD *)&v21 + 1) = v8;
    memcpy_0(v14, v12, 2 * v11);
    memcpy_0((char *)v14 + 2 * v11, L"\\", 2 * v10);
    *((_WORD *)v14 + v13) = 0;
    std::operator+<unsigned short>(v22, &v20, v17);
    std::wstring::_Tidy_deallocate(&v20);
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    std::wstring::_Take_contents((_OWORD *)a2, (__int64)v22);
    std::wstring::_Tidy_deallocate(v22);
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    std::wstring::_Take_contents((_OWORD *)a2, (__int64)Src);
  }
  std::wstring::_Tidy_deallocate(Src);
  return a2;
}
