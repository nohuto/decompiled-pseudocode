/*
 * XREFs of ?OnImmersiveWindowCreated@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@3456@@Z @ 0x1804322A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0___ @ 0x180431298 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnImmersiveWindowCreated(__int64 a1, __int64 a2, int a3)
{
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v7,
                     a1,
                     (__int64)&v8);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0___(
           v5,
           CurrentThreadId,
           v3);
}
