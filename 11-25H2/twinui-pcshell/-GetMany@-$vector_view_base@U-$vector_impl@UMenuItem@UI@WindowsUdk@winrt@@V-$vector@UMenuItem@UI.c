/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x18048AFE0
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18048AE10 (-GetMany@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vect.c)
 *     ?GetMany@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18048AEB0 (-GetMany@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  unsigned int v17; // esi

  v3 = a2;
  v4 = a1 + 16;
  v5 = a1 + 8;
  if ( !a1 )
  {
    v5 = 48LL;
    v4 = 56LL;
  }
  if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v5) >> 3) )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = a1 + 8;
  v10 = *(__int64 **)a3;
  v11 = a1 + 16;
  if ( !a1 )
  {
    v11 = 56LL;
    v9 = 48LL;
  }
  v12 = *(_QWORD *)v11 - *(_QWORD *)v9;
  v13 = a1 + 8;
  v14 = (v12 >> 3) - v3;
  if ( v8 >= v14 )
    v8 = v14;
  if ( !a1 )
    v13 = 48LL;
  if ( v8 )
  {
    v15 = (__int64 *)(*(_QWORD *)v13 + 8 * v3);
    winrt::Windows::Foundation::IUnknown::operator=(*(__int64 **)a3, v15);
    v16 = v10 + 1;
    v17 = v8 - 1;
    if ( v8 != 1 )
    {
      do
      {
        winrt::Windows::Foundation::IUnknown::operator=(v16++, ++v15);
        --v17;
      }
      while ( v17 );
    }
  }
  return v8;
}
