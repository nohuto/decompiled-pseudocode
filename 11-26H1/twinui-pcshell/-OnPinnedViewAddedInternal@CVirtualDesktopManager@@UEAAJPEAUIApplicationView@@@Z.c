/*
 * XREFs of ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180554010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___ @ 0x1805501C8 (CVirtualDesktopManager--_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnPinnedViewAddedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  CVirtualDesktopManager *v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
    v6,
    (__int64)this - 8,
    (__int64)&v8);
  v3 = CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___(v2, v8, (__int64)v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x528,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
