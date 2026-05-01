/*
 * XREFs of ?v_CanHandleCloseRequest@WindowWrapper@@EEAA_NXZ @ 0x18042F070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da___ @ 0x18042D880 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall WindowWrapper::v_CanHandleCloseRequest(WindowWrapper *this)
{
  char *v1; // rbx
  char v2; // di
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = 0;
  v10 = 0;
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v8,
                     (__int64)v1,
                     (__int64)&v10);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da___(
         v5,
         CurrentThreadId,
         v3);
  if ( v6 >= 0 )
    return v10 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x77,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
    (const char *)(unsigned int)v6);
  return v2;
}
