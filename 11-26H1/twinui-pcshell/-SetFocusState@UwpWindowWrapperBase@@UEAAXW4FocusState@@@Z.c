/*
 * XREFs of ?SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1801CB950
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___ @ 0x180443D6C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = a1 - 16;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 16 + 280) + 224LL))(*(_QWORD *)(a1 - 16 + 280));
  v3 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v5, &v7, v2);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___(v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x834,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v4);
}
