/*
 * XREFs of ?OnUwpWindowUniversalPropertyChanged@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@3456@@Z @ 0x18004B890
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f___ @ 0x18004B8C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowUniversalPropertyChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *a3)
{
  __int64 v3; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v3 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v5, this, &v6);
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e72222c57eb1177d20aad97c3927c2f___(v3);
}
