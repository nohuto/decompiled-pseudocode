/*
 * XREFs of ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x1805803F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800C9318 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d___ @ 0x1805800EC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindowInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        struct Windows::Internal::Shell::ITabProxyWindowInternal *a2)
{
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::ITabProxyWindowInternal **v11; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
    (HANDLE *)this + 4,
    0xFFFFFFFF);
  v11 = &v12;
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v9,
                     *((_QWORD *)this + 6),
                     (__int64)&v11);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d___(
         v5,
         CurrentThreadId,
         v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v6);
  return v7;
}
