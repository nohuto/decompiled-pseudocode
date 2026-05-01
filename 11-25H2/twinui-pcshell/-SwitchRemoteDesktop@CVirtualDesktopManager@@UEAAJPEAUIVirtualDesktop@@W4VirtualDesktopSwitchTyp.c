/*
 * XREFs of ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805343A0
 * Callers:
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180534600 (-SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18052D478 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18052DE9C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E6F4 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E72C (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533370 (-SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA-AUIAsyncAction@Foundation@Windows@winr.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchRemoteDesktop(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  int v11; // eax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-59h] BYREF
  volatile signed __int32 *v17; // [rsp+28h] [rbp-51h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-49h] BYREF
  volatile signed __int32 *v19; // [rsp+38h] [rbp-41h] BYREF
  volatile signed __int32 *v20; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v21[48]; // [rsp+48h] [rbp-31h] BYREF
  volatile signed __int32 *v22; // [rsp+78h] [rbp-1h]
  _BYTE v23[48]; // [rsp+80h] [rbp+7h] BYREF
  volatile signed __int32 *v24; // [rsp+B0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v26; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 224) )
  {
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v21);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v22 + 2)) )
    {
      v8 = v22;
      v17 = v22;
      if ( v22 )
        _InterlockedIncrement(v22 + 86);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
      *((_DWORD *)v8 + 78) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v17);
      v9 = v22;
      v18 = v22;
      if ( v22 )
        _InterlockedIncrement(v22 + 86);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
      *((_BYTE *)v9 + 271) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v18);
LABEL_25:
      CVirtualDesktopManager::SwitchContextForVDAnimation(a1 - 8, (__int64 *)&v16, (__int64)a2, a3);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      v6 = 0;
      goto LABEL_26;
    }
    lpVtbl = a2->lpVtbl;
    v27 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
            a2,
            &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
            &v27);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v26 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 64LL))(v27, &v26);
      v6 = v11;
      if ( v11 >= 0 )
      {
        if ( v26 )
        {
          tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v23);
          v13 = v24;
          v19 = v24;
          if ( v24 )
            _InterlockedIncrement(v24 + 86);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v13 + 2));
          *((_DWORD *)v13 + 78) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v19);
          v14 = v24;
          v20 = v24;
          if ( v24 )
            _InterlockedIncrement(v24 + 86);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
          *((_BYTE *)v14 + 271) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v20);
          tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v23);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
        goto LABEL_25;
      }
      v12 = 319LL;
    }
    else
    {
      v12 = 317LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
LABEL_26:
    tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v21);
    return v6;
  }
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 152) + 32LL))(*(_QWORD *)(a1 + 152), &v16);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 96) + 32LL))(
         *(_QWORD *)(a1 + 96),
         a2) )
  {
    v7 = CVirtualDesktopManager::SwitchDesktopInternalPrivate(a1 - 8, a2, a3);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x150,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v6 = -2147024809;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
  return v6;
}
