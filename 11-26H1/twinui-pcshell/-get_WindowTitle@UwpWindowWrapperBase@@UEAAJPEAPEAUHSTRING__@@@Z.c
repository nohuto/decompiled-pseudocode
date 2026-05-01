/*
 * XREFs of ?get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801F97F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96___ @ 0x1804446F8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_WindowTitle(UwpWindowWrapperBase *this, HSTRING *a2)
{
  __int64 v2; // rax
  int v3; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]
  HSTRING *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v7, &v10, (char *)this - 8);
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96___(v2);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x449,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v7[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x44D,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v5);
      return v9;
    }
  }
  return 0LL;
}
