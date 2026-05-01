/*
 * XREFs of ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803DF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x1802A563C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPE.c)
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803DE340 (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803E29A0 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180653C0C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
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
  unsigned int v9; // edi
  int v10; // eax
  void *v11; // rdi
  PenWorkspace::Discover::ObjectArray *v12; // rax
  void *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PenWorkspace::Discover::ObjectArray *v17; // [rsp+70h] [rbp+30h] BYREF

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
  v14 = 0LL;
  v15 = 0LL;
  MRUApps = PenWorkspace::Discover::RecentAppsCache::GetMRUApps(this[5]);
  v9 = MRUApps;
  if ( MRUApps >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::ObjectArray,PenWorkspace::Discover::ObjectArray,std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>> &>(
            &v17,
            (struct IUnknown ***)&v14);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
      v11 = (void *)v14;
      if ( (_QWORD)v14 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
          (__int64 *)v14,
          *((__int64 **)&v14 + 1));
        std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)((v15 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      return v6;
    }
    v12 = v17;
    v17 = 0LL;
    *a3 = (struct IObjectArray *)(((unsigned __int64)v12 + 32) & -(__int64)(v12 != 0LL));
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
    v13 = (void *)v14;
    if ( (_QWORD)v14 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        (__int64 *)v14,
        *((__int64 **)&v14 + 1));
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)((v15 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)MRUApps);
    if ( (_QWORD)v14 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        (__int64 *)v14,
        *((__int64 **)&v14 + 1));
      std::_Deallocate<16,0>((void *)v14, (const struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v9;
  }
}
