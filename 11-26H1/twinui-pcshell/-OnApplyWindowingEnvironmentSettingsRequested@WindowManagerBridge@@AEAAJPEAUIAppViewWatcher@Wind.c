/*
 * XREFs of ?OnApplyWindowingEnvironmentSettingsRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@3456@@Z @ 0x18042A930
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_916de114c16ead649cf4d630f7d092da___ @ 0x180427740 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_916de114c16ead649cf4d630f7d092da.c)
 */

__int64 __fastcall WindowManagerBridge::OnApplyWindowingEnvironmentSettingsRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *a3)
{
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v7,
                     (__int64)this,
                     (__int64)&v8);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_916de114c16ead649cf4d630f7d092da___(
           v5,
           CurrentThreadId,
           v3);
}
