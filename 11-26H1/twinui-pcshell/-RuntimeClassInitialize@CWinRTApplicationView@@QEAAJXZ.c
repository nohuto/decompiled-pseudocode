/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180089660
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800893D0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x180070BB8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800717E8 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180071868 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180089740 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     _lambda_0067f30f54eb0de3635ee7c500c831b5_::operator() @ 0x18030C414 (_lambda_0067f30f54eb0de3635ee7c500c831b5_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // ebx
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  volatile signed __int32 *v9; // [rsp+70h] [rbp+10h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), (unsigned __int16 **)pv);
  if ( ViewId < 0 )
  {
    v3 = 34LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ViewId);
    goto LABEL_8;
  }
  v5 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v6, pv, this);
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v9);
  if ( v9 )
    lambda_0067f30f54eb0de3635ee7c500c831b5_::operator()(&v5);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v9);
  ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
  if ( ViewId < 0 )
  {
    v3 = 46LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)ViewId;
}
