/*
 * XREFs of ?OnUwpWindowConsolidateRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIConsolidateRequestedEventArgs@3456@@Z @ 0x1801BFF10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb___ @ 0x1801BFF54 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowConsolidateRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *a3)
{
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v7, this, &v8);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_281fb8e417c6d6a3f2971efd5820aeeb___(
           v5,
           CurrentThreadId,
           v3);
}
