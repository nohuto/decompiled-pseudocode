/*
 * XREFs of ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18027C0A4 (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800E2AD4 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180295CF4 (--1-$test_watcher@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180295D1C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@detai.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x180338B74 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806447B8 (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644B14 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 *     ??$construct@URemoteSystem@RemoteSystemData@@AEAU12@@?$_Default_allocator_traits@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@SAXAEAV?$allocator@URemoteSystem@RemoteSystemData@@@1@QEAURemoteSystem@RemoteSystemData@@AEAU34@@Z @ 0x180645D4C (--$construct@URemoteSystem@RemoteSystemData@@AEAU12@@-$_Default_allocator_traits@V-$allocator@UR.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180649568 (--0-$test_data_control@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F98 (--1-$test_data_control@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2.c)
 *     _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x18064A684 (_lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator().c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x18064C728 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x1806524C8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     ?_Xrange@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@CAXXZ @ 0x1806531D0 (-_Xrange@-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindowId@UI@Windows@winrt@@@std@@@st.c)
 *     ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180663184 (-DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x180666758 (-TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        struct winrt::hstring *a2,
        __int64 *a3)
{
  char v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  void (__fastcall ****ProviderServicesForAppWindow)(_QWORD, __int64 *, __int64 *); // rax
  bool v13; // di
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 *i; // rbx
  __int64 *v18; // rdi
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdi
  char **j; // rbx
  char **v23; // rsi
  __int128 v24; // [rsp+20h] [rbp-89h] BYREF
  __int64 v25; // [rsp+30h] [rbp-79h]
  __int128 v26; // [rsp+38h] [rbp-71h] BYREF
  __int64 v27; // [rsp+48h] [rbp-61h]
  void *Src[4]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v29[48]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v31[11]; // [rsp+A8h] [rbp-1h] BYREF
  char *v32; // [rsp+120h] [rbp+77h] BYREF
  void (__fastcall ***v33)(_QWORD, __int64 *, __int64 *); // [rsp+128h] [rbp+7Fh] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>>((struct wil::details::IFailureCallback *)v29);
  v6 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v7 = 0;
  v8 = a3[1];
  v9 = *a3;
  if ( (v8 - *a3) >> 3 )
  {
    v10 = 0LL;
    do
    {
      if ( (v8 - v9) >> 3 <= v10 )
      {
        std::vector<winrt::Windows::UI::WindowId>::_Xrange();
        JUMPOUT(0x180650A46LL);
      }
      v11 = *(volatile signed __int32 **)(v9 + 8 * v10);
      v32 = (char *)v11;
      v33 = 0LL;
      ProviderServicesForAppWindow = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetProviderServicesForAppWindow(
                                                                                             Src,
                                                                                             &v32);
      v13 = winrt::Windows::Foundation::operator!=(ProviderServicesForAppWindow, &v33);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)Src);
      if ( v13 )
      {
        v6 = 1;
        if ( *((_QWORD *)&v24 + 1) == v25 )
        {
          std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
            (__int64 *)&v24,
            *((__int64 *)&v24 + 1),
            (__int64 *)&v32);
        }
        else
        {
          **((_QWORD **)&v24 + 1) = v11;
          *((_QWORD *)&v24 + 1) += 8LL;
        }
      }
      else
      {
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteWindow(
          *((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4),
          (const struct winrt::Windows::UI::WindowId *)&v32,
          a2);
      }
      ++v7;
      v8 = a3[1];
      v9 = *a3;
      v10 = v7;
    }
    while ( v7 < (unsigned __int64)((v8 - *a3) >> 3) );
  }
  if ( tip2::details::shared_data<1,0,0>::is_running(v30 + 8) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(
      (__int64 *)&v32,
      &v30);
    winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)a2, Src);
    std::wstring::assign(v32 + 272, Src[0], (unsigned __int64)Src[1]);
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>((volatile signed __int32 **)&v32);
    v15 = (__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3;
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(
      (__int64 *)&v32,
      &v30);
    *((_QWORD *)v32 + 42) = v15;
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>((volatile signed __int32 **)&v32);
  }
  if ( v6 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v18 = (__int64 *)*((_QWORD *)&v24 + 1);
    for ( i = (__int64 *)v24; i != v18; ++i )
    {
      v32 = (char *)*i;
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings(
        (__int64)this,
        (__int64)Src,
        (__int64 *)&v32);
      winrt::hstring::operator=((struct winrt::impl::hstring_header **)Src, (__int64 *)a2, v19);
      if ( *((_QWORD *)&v26 + 1) == v27 )
      {
        std::vector<RemoteSystemData::RemoteSystem>::_Emplace_reallocate<RemoteSystemData::RemoteSystem &>(
          &v26,
          *((__int64 *)&v26 + 1),
          (__int64)Src);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<RemoteSystemData::RemoteSystem>>::construct<RemoteSystemData::RemoteSystem,RemoteSystemData::RemoteSystem &>(
          v20,
          *((__int64 *)&v26 + 1),
          (__int64)Src);
        *((_QWORD *)&v26 + 1) += 32LL;
      }
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v33, (RTL_SRWLOCK *)this + 16);
      v31[0] = *(_QWORD *)a2;
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
        (__int64 **)this + 19,
        i,
        v31);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v33);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)Src);
    }
    lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()(v14, (__int64)Src, (unsigned __int64 *)&v26);
    v21 = 0LL;
    v23 = (char **)*((_QWORD *)&v24 + 1);
    for ( j = (char **)v24; j != v23; ++j )
    {
      v32 = *j;
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify(
        this,
        (const struct winrt::Windows::UI::WindowId *)&v32,
        (const struct RemoteSystemData::RemoteSystem *)Src,
        1);
      ++v21;
    }
    if ( tip2::details::shared_data<1,0,0>::is_running(v30 + 8) )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(
        (__int64 *)&v32,
        &v30);
      *((_QWORD *)v32 + 43) = v21;
      tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>((volatile signed __int32 **)&v32);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)Src);
    if ( (_QWORD)v26 )
    {
      std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(
        (volatile signed __int32 **)v26,
        *((volatile signed __int32 ***)&v26 + 1));
      std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFE0uLL));
      v26 = 0LL;
      v27 = 0LL;
    }
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64 *)&v24);
    tip2::test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>((__int64)v29);
    return v6;
  }
  else
  {
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64 *)&v24);
    tip2::test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>((__int64)v29);
    return 0;
  }
}
