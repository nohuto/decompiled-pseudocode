/*
 * XREFs of ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18062FC2C
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802846D8 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A9928 (--$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802AB5FC (--$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802ABB04 (--$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC8AC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802C4E50 (--$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA.c)
 *     ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802C4F48 (--$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManagerFactory::CreateInstance(
        _QWORD *a1,
        int a2)
{
  std::_Ref_count_base **v3; // rax
  std::_Ref_count_base **v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base **v6; // rax
  std::_Ref_count_base **v7; // rax
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v10[2]; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v11[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v13; // [rsp+68h] [rbp-8h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v14; // [rsp+80h] [rbp+10h]

  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)v9 = 0LL;
  if ( a2 == 1 )
  {
    v3 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootProviderActivator,>(&v12);
    v11[0] = *v3;
    v11[1] = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    *(_OWORD *)v10 = *(_OWORD *)v11;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v4 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler,>(&v12);
    v11[0] = *v4;
    v11[1] = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    *(_OWORD *)v9 = *(_OWORD *)v11;
    v5 = v13;
  }
  else
  {
    std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection,>(v11);
    v6 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                    &v12,
                                    (__int64)v11);
    v10[0] = *v6;
    v10[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v7 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                    &v12,
                                    (__int64)v11);
    v9[0] = *v7;
    v9[1] = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v5 = v11[1];
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v14 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)operator new(0x130uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager(v14, v10, v9);
  *(_QWORD *)v14 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::`vftable';
  *a1 = (char *)v14 + 16;
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  return a1;
}
