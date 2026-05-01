/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18049D020
 * Callers:
 *     <none>
 * Callees:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2@@Z @ 0x18049D06C (-ReplaceAll@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compo.c)
 */

__int64 winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::ReplaceAll()
{
  __int64 result; // rax
  int v1; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::ReplaceAll();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
