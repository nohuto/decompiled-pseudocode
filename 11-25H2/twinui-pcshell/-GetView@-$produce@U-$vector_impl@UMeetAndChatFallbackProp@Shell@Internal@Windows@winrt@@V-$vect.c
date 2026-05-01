/*
 * XREFs of ?GetView@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18020CF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  *a2 = 0LL;
  v4 = a1 - 16;
  if ( ((a1 - 16) & -(__int64)(a1 != 0)) == 0xFFFFFFFFFFFFFFD8uLL )
  {
    v5 = 24LL;
    v6 = 24LL;
LABEL_6:
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a2, v4, a1);
    goto LABEL_7;
  }
  v7 = a1 + 8;
  if ( !a1 )
    v7 = 24LL;
  v5 = v7;
  v6 = v7;
  if ( v7 )
    goto LABEL_6;
LABEL_7:
  *a2 = v6;
  return 0LL;
}
