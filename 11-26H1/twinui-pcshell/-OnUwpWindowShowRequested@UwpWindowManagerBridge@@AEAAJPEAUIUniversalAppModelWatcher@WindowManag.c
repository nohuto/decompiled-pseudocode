/*
 * XREFs of ?OnUwpWindowShowRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIShowRequestedEventArgs@3456@@Z @ 0x180432410
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4___ @ 0x180430FC8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowShowRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *a3)
{
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v7,
                     (__int64)this,
                     (__int64)&v8);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4___(
           v5,
           CurrentThreadId,
           v3);
}
