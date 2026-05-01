/*
 * XREFs of ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803E8910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x18028520C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPE.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803E7434 (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EC028 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679928 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspaceDiscoverBroker::GetRecentItems(
        PenWorkspace::Discover::RecentAppsCache **this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int IsShellExperience; // eax
  unsigned int v6; // ebx
  int MRUApps; // eax
  int v9; // eax
  PenWorkspace::Discover::ObjectArray *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PenWorkspace::Discover::ObjectArray *v14; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience((CallerIdentity *)this);
  v6 = IsShellExperience;
  if ( IsShellExperience < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v6;
  }
  v11 = 0LL;
  v12 = 0LL;
  MRUApps = PenWorkspace::Discover::RecentAppsCache::GetMRUApps(this[5]);
  v6 = MRUApps;
  if ( MRUApps < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)MRUApps);
    goto LABEL_6;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v14);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::ObjectArray,PenWorkspace::Discover::ObjectArray,std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>> &>(
         &v14,
         (struct IUnknown ***)&v11);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v14);
LABEL_6:
    if ( (_QWORD)v11 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        (__int64 *)v11,
        *((__int64 **)&v11 + 1));
      std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v6;
  }
  v10 = v14;
  v14 = 0LL;
  *a3 = (struct IObjectArray *)(((unsigned __int64)v10 + 32) & -(__int64)(v10 != 0LL));
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v14);
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
      (__int64 *)v11,
      *((__int64 **)&v11 + 1));
    std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
