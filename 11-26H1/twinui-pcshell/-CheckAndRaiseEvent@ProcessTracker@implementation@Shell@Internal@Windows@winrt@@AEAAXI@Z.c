/*
 * XREFs of ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18066041C
 * Callers:
 *     ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x180660670 (-ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??R?$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802A28B0 (--R-$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellV.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1805A4C1C (-find@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@In.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18065F7BC (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 *     ??$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z @ 0x18065F910 (--$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065F9F4 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@UProcessInfo@ProcessTracker@i.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::CheckAndRaiseEvent(
        RTL_SRWLOCK *this,
        int a2)
{
  char v3; // si
  unsigned __int8 *Ptr; // rdi
  __int64 v5; // rax
  __int64 *v6; // r11
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  winrt::hstring *CorrelationId; // rax
  RTL_SRWLOCK *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 *v12; // [rsp+60h] [rbp+28h] BYREF
  int v13; // [rsp+68h] [rbp+30h] BYREF
  const unsigned __int16 *v14; // [rsp+70h] [rbp+38h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp+40h] BYREF

  v13 = a2;
  v3 = 0;
  wil::AcquireSRWLockExclusive(v11, this + 3);
  std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find(
    &this[4].Ptr,
    &v12,
    (const unsigned __int8 *)&v13);
  Ptr = (unsigned __int8 *)this[5].Ptr;
  if ( v12 != Ptr )
  {
    v5 = std::_Conditionally_enabled_hash<enum winrt::WindowsUdk::UI::Shell::ShellView,1>::operator()(v12 + 16);
    v7 = this[7].Ptr;
    v8 = 2 * ((__int64)this[10].Ptr & v5);
    if ( (__int64 *)v7[2 * ((__int64)this[10].Ptr & v5) + 1] == v6 )
    {
      if ( (__int64 *)v7[2 * ((__int64)this[10].Ptr & v5)] == v6 )
        v7[2 * ((__int64)this[10].Ptr & v5)] = Ptr;
      else
        Ptr = (unsigned __int8 *)v6[1];
      v7[v8 + 1] = Ptr;
    }
    else if ( (__int64 *)v7[2 * ((__int64)this[10].Ptr & v5)] == v6 )
    {
      v7[2 * ((__int64)this[10].Ptr & v5)] = *v6;
    }
    v9 = *v6;
    --this[6].Ptr;
    *(_QWORD *)v6[1] = v9;
    *(_QWORD *)(v9 + 8) = v6[1];
    std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>>>(
      v9,
      (char *)v6);
    CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                      (winrt::hstring *)&v15,
                      &c_bootSystemId);
    v14 = winrt::hstring::c_str(CorrelationId);
    LODWORD(v12) = this[6].Ptr;
    CloudPCTelemetry::ProviderProcessTrackingStopped<unsigned int &,unsigned int,unsigned short const *>(
      &v13,
      (int *)&v12,
      (__int64 *)&v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    v3 = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v11);
  if ( v3 )
    winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::operator()<winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
      this + 12,
      (__int64)this,
      (__int64)&v13);
}
