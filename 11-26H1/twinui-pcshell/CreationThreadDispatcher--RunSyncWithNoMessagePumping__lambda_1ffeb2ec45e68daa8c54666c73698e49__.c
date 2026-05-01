/*
 * XREFs of CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_1ffeb2ec45e68daa8c54666c73698e49___ @ 0x1800CC9C0
 * Callers:
 *     ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x1800CC938 (-DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___ @ 0x1800CCA24 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_1ffeb2ec45e68daa8c54666c73698e49___(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v8, a1, a2);
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___(
         v4,
         CurrentThreadId,
         v2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v5);
  return v6;
}
