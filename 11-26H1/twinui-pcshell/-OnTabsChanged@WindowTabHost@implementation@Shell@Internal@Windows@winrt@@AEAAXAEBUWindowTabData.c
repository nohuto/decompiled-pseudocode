/*
 * XREFs of ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800A2940
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180029B3C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18002C2AC (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs *a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  _QWORD *Ptr; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  RTL_SRWLOCK *v12; // rcx
  RTL_SRWLOCK *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  RTL_SRWLOCK *v23; // [rsp+80h] [rbp+30h] BYREF
  char v24; // [rsp+98h] [rbp+48h] BYREF

  v5 = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)a2);
  v23 = (RTL_SRWLOCK *)v5;
  AcquireSRWLockShared(this + 77);
  if ( *(PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                   &this[78],
                   &v24,
                   &v23) != this[79].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    v6 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()((unsigned __int8 *)&v23);
    v7 = v6;
    Ptr = this[81].Ptr;
    v9 = (_QWORD *)Ptr[2 * ((__int64)this[84].Ptr & v6) + 1];
    if ( v9 == this[79].Ptr )
      goto LABEL_25;
    v10 = (_QWORD *)Ptr[2 * ((__int64)this[84].Ptr & v6)];
    while ( v5 == v9[2] )
    {
      if ( !v9 )
        goto LABEL_25;
      v3 = v9[26];
      v21 = 0LL;
      v22 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      AcquireSRWLockShared(this + 77);
      v23 = this + 77;
      v11 = this[81].Ptr;
      v12 = (RTL_SRWLOCK *)v11[2 * (v7 & (__int64)this[84].Ptr) + 1];
      if ( v12 != this[79].Ptr )
      {
        v13 = (RTL_SRWLOCK *)v11[2 * (v7 & (__int64)this[84].Ptr)];
        goto LABEL_10;
      }
LABEL_27:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
LABEL_28:
      v9 = (_QWORD *)v9[1];
    }
    if ( v9 != v10 )
      goto LABEL_28;
LABEL_25:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    do
    {
      if ( v12 == v13 )
        goto LABEL_27;
      v12 = (RTL_SRWLOCK *)v12[1].Ptr;
LABEL_10:
      ;
    }
    while ( (PVOID)v5 != v12[2].Ptr );
    if ( v12 )
    {
      winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(
        v12 + 3,
        (__int64)&v21,
        (__int64)&v19);
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockShared(this + 77);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        this,
        v5,
        (__int64 *)&v21,
        &v19);
      v14 = *((_QWORD *)&v21 + 1);
      v15 = v21;
      v16 = *((_QWORD *)&v19 + 1);
      v17 = v19;
      if ( (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 4 >= (unsigned __int64)(v3
                                                                           + ((__int64)(*((_QWORD *)&v21 + 1) - v21) >> 4)) )
      {
        wil::AcquireSRWLockExclusive(&v23, this + 77);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
          v5);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
        v14 = *((_QWORD *)&v21 + 1);
        v15 = v21;
        v16 = *((_QWORD *)&v19 + 1);
        v17 = v19;
      }
      if ( ((v14 - v15) >> 4) + ((v16 - v17) >> 4) )
      {
        AcquireSRWLockShared(this + 77);
        v23 = this + 77;
        LOBYTE(v18) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
          v18);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
        if ( this != (RTL_SRWLOCK *)-616LL )
          ReleaseSRWLockShared(this + 77);
        v17 = v19;
        v15 = v21;
      }
      if ( v17 )
      {
        std::_Deallocate<16>(v17, (v20 - v17) & 0xFFFFFFFFFFFFFFF0uLL);
        v19 = 0LL;
        v20 = 0LL;
        v15 = v21;
      }
      if ( v15 )
        std::_Deallocate<16>(v15, (v22 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
      return;
    }
    goto LABEL_27;
  }
  if ( this != (RTL_SRWLOCK *)-616LL )
    ReleaseSRWLockShared(this + 77);
}
