/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18043CC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b___ @ 0x180436DC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  __int128 *v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v6,
                     (__int64)&v7,
                     a1 - 8);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b___(
           v4,
           CurrentThreadId,
           v2);
}
