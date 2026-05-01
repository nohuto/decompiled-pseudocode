/*
 * XREFs of ?GetAt@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18021B020
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$vector_view_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@2@I@Z @ 0x18021B080 (-GetAt@-$vector_view_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@W.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::GetAt(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  try
  {
    v4 = (__int64 *)winrt::vector_view_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::GetAt();
    v5 = *v4;
    *v4 = 0LL;
    *a3 = v5;
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
