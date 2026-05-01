/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040AF88
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040A4F0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040B120 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180034018 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU?$coroutine_handle@X@experimental@std@@PEAUawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@6@W4DispatcherQueuePriority@896@@Z@@Z @ 0x18030773C (--0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU-$coroutine_handle@X@experimental@std@@PE.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___ @ 0x180409A80 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_Peo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, (RTL_SRWLOCK *)(a1 + 128));
  v7 = *(_OWORD *)_lambda_f475742c0de8d0f2b24fd9d946f0a567_::_lambda_f475742c0de8d0f2b24fd9d946f0a567_(v8, &v10, a1);
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___(
    &v9,
    *(_QWORD *)(a1 + 136),
    *(_QWORD *)(a1 + 144),
    &v7);
  if ( v9 == *(_QWORD **)(a1 + 144) )
  {
    v5 = -2147023728;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, v9);
    v5 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return v5;
}
