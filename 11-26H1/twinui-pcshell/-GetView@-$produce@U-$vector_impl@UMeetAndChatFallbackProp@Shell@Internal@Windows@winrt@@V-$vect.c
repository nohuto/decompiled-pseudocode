/*
 * XREFs of ?GetView@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1802024F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r9
  bool v4; // zf
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax

  *a2 = 0LL;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v4 = v3 == -40;
  v5 = v3 + 40;
  v6 = 24LL;
  if ( v4 )
    goto LABEL_5;
  v7 = a1 + 8;
  if ( !a1 )
    v7 = 24LL;
  v6 = v7;
  if ( v7 )
LABEL_5:
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, a2, a1 - 16, v5);
  *a2 = v6;
  return 0LL;
}
