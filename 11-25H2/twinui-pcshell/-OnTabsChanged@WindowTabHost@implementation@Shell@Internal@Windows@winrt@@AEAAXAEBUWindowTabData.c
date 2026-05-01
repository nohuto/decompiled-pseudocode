/*
 * XREFs of ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180060F60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800611C4 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x180061210 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180061490 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180061EFC (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18012787C (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18018CC58 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs *a3)
{
  unsigned __int64 v4; // r12
  _QWORD *v5; // r9
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rdx
  _QWORD *Ptr; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  RTL_SRWLOCK *v14; // rax
  unsigned __int64 v15; // r14
  void *v16; // rdi
  __int64 v17; // r15
  char v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  RTL_SRWLOCK *v24; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h]

  v4 = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason(a2);
  v24 = (RTL_SRWLOCK *)v4;
  AcquireSRWLockShared(this + 77);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v24 + i) ^ (unsigned __int64)v6);
  v8 = 2 * (v6 & (__int64)this[84].Ptr);
  Ptr = this[81].Ptr;
  v10 = (_QWORD *)Ptr[2 * (v6 & (__int64)this[84].Ptr) + 1];
  v11 = this[79].Ptr;
  if ( v10 == v11 )
  {
LABEL_8:
    v10 = 0LL;
  }
  else
  {
    v5 = (_QWORD *)Ptr[v8];
    while ( v4 != v10[2] )
    {
      if ( v10 == v5 )
        goto LABEL_8;
      v10 = (_QWORD *)v10[1];
    }
  }
  if ( !v10 )
    v10 = this[79].Ptr;
  if ( v10 == v11 )
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    v25 = *(_QWORD *)(std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                        &this[78],
                        &v24,
                        Ptr,
                        v5)
                    + 184);
    v22 = 0LL;
    v23 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    AcquireSRWLockShared(this + 77);
    v14 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                           &this[78],
                           &v24,
                           v12,
                           v13);
    winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(v14);
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(this, v4, &v22, &v20);
    v15 = (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4;
    v16 = (void *)v22;
    v17 = (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 4;
    if ( v15 >= v17 + v25 )
    {
      wil::AcquireSRWLockExclusive(&v24, &this[77]);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        v4);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v24);
    }
    if ( v17 + v15 )
    {
      AcquireSRWLockShared(this + 77);
      v24 = this + 77;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v18,
        v19);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockShared(this + 77);
    }
    if ( (_QWORD)v20 )
      std::_Deallocate<16,0>((void *)v20, (const struct std::nothrow_t *)((v21 - v20) & 0xFFFFFFFFFFFFFFF0uLL));
    if ( v16 )
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v23 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
