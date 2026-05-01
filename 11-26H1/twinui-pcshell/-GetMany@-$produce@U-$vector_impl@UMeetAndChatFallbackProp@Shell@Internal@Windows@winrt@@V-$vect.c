/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18049BA80
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x18049BC48 (-GetMany@-$vector_view_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  signed __int64 v8; // rbx
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v8 = 8LL * a3;
  memset_0(a4, 0, v8);
  v11 = a4;
  v12 = v8 >> 3;
  v9 = a1 + 24;
  if ( !a1 )
    v9 = 40LL;
  *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::GetMany(
          v9,
          a2,
          &v11);
  return 0LL;
}
