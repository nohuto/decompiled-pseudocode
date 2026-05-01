/*
 * XREFs of ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18042EDDC
 * Callers:
 *     ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18042ED70 (-SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x18042F020 (-v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf___ @ 0x18042D790 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf.c)
 */

void __fastcall WindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  __int128 *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 556)
    && (*(float *)(a1 + 696) != *a2
     || *(float *)(a1 + 700) != a2[1]
     || *(float *)(a1 + 704) != a2[2]
     || *(float *)(a1 + 708) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      v4 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                         v8,
                         a1,
                         (__int64)a2);
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf___(
             v6,
             CurrentThreadId,
             v4);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x18A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v7,
          v8[0]);
    }
  }
  *(_OWORD *)(a1 + 680) = *(_OWORD *)a2;
}
