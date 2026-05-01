/*
 * XREFs of ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18065578C
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027BC38 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A1CA8 (--$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802A3BE4 (--$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A412C (--$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802BBCC0 (--$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA.c)
 *     ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802BBDC0 (--$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManagerFactory::CreateInstance(
        _QWORD *a1,
        int a2)
{
  std::_Ref_count_base **v3; // rax
  std::_Ref_count_base *v4; // rdx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base **v6; // rax
  std::_Ref_count_base *v7; // rdx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base **v9; // rax
  std::_Ref_count_base *v10; // rdx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base **v12; // rax
  std::_Ref_count_base *v13; // rdx
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  std::_Ref_count_base *v21; // [rsp+60h] [rbp-10h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v22; // [rsp+80h] [rbp+10h]

  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)v16 = 0LL;
  if ( a2 == 1 )
  {
    v3 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootProviderActivator,>(&v18);
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    v17[0] = v4;
    v17[1] = v5;
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    v6 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler,>(&v18);
    v7 = *v6;
    v8 = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v16[0] = v7;
    v16[1] = v8;
  }
  else
  {
    std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection,>(&v18);
    v9 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                    &v20,
                                    (__int64)&v18);
    v10 = *v9;
    v11 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v17[0] = v10;
    v17[1] = v11;
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    v12 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                     &v20,
                                     (__int64)&v18);
    v13 = *v12;
    v14 = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    v16[0] = v13;
    v16[1] = v14;
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
  }
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v22 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)operator new(0x130uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager(v22, v17, v16);
  *(_QWORD *)v22 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::`vftable';
  *a1 = (char *)v22 + 16;
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  return a1;
}
