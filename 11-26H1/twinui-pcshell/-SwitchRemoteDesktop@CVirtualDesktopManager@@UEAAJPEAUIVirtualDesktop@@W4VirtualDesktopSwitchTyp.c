/*
 * XREFs of ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557DC0
 * Callers:
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180558020 (-SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180550644 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180551030 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551A84 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551ABC (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180556D04 (-SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA-AUIAsyncAction@Foundation@Windows@winr.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557284 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchRemoteDesktop(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v8; // eax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v17; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v18[48]; // [rsp+28h] [rbp-31h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-1h]
  _BYTE v20[48]; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v21; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  volatile signed __int32 *v23; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+7Fh] BYREF

  v6 = a1 - 8;
  if ( *(_QWORD *)(a1 - 8 + 232) )
  {
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v18);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v19 + 2)) )
    {
      v9 = v19;
      v23 = v19;
      if ( v19 )
        _InterlockedIncrement(v19 + 88);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
      *((_DWORD *)v9 + 80) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v23);
      v10 = v19;
      v23 = v19;
      if ( v19 )
        _InterlockedIncrement(v19 + 88);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v10 + 2));
      *((_BYTE *)v10 + 279) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v23);
LABEL_25:
      CVirtualDesktopManager::SwitchContextForVDAnimation(v6, (__int64 *)&v17, (__int64)a2, a3);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      v7 = 0;
      goto LABEL_26;
    }
    lpVtbl = a2->lpVtbl;
    v24 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
            a2,
            &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
            &v24);
    v7 = v12;
    if ( v12 >= 0 )
    {
      LODWORD(v23) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v24 + 64LL))(v24, &v23);
      v7 = v12;
      if ( v12 >= 0 )
      {
        if ( (_DWORD)v23 )
        {
          tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v20);
          v14 = v21;
          v17 = v21;
          if ( v21 )
            _InterlockedIncrement(v21 + 88);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
          *((_DWORD *)v14 + 80) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v17);
          v15 = v21;
          v17 = v21;
          if ( v21 )
            _InterlockedIncrement(v21 + 88);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v15 + 2));
          *((_BYTE *)v15 + 279) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v17);
          tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v20);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
        goto LABEL_25;
      }
      v13 = 319LL;
    }
    else
    {
      v13 = 317LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
LABEL_26:
    tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v18);
    return v7;
  }
  (*(void (__fastcall **)(_QWORD, volatile signed __int32 **))(**(_QWORD **)(a1 + 152) + 32LL))(
    *(_QWORD *)(a1 + 152),
    &v23);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 96) + 32LL))(
         *(_QWORD *)(a1 + 96),
         a2) )
  {
    v8 = CVirtualDesktopManager::SwitchDesktopInternalPrivate(v6, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x150,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v7 = -2147024809;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v23);
  return v7;
}
