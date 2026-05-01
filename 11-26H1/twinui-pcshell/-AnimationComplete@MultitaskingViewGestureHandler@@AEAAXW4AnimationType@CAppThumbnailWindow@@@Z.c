/*
 * XREFs of ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049A930
 * Callers:
 *     wil::details::ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___::_ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___ @ 0x180499B68 (wil--details--ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___--_ScopeExitFn__lambda_9cee.c)
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x18049A7C8 (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 *     ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18049AAC0 (-CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049ADEC (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049B44C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18049BF70 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18049C9D0 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18049DEDC (-open_helper@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@AEAA_NPE.c)
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A3000 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::AnimationComplete(__int64 a1, int a2)
{
  CAppThumbnailWindow **v2; // rsi
  CAppThumbnailWindow **i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rbx
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *(CAppThumbnailWindow ***)(a1 + 104);
  for ( i = *(CAppThumbnailWindow ***)(a1 + 96); i != v2; i += 2 )
    CAppThumbnailWindow::Close(*i, (const enum CAppThumbnailWindow::AnimationType *)&v10);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 != v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v6, v5);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
  }
  *(_BYTE *)(a1 + 248) = 0;
  v9 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::open_helper(&v9);
  v7 = v9;
  if ( v9 && tip2::details::shared_data<1,0,0>::is_running((__int64)v9 + 8) && v7 )
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)v7 + 8);
  return wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>(&v9);
}
