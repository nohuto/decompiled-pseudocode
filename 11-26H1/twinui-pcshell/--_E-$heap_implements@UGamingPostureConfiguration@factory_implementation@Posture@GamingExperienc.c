/*
 * XREFs of ??_E?$heap_implements@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1803354F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$root_implements@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUri@Foundation@Windows@winrt@@@5673@U?$IIterable@UUri@Foundation@Windows@winrt@@@5673@@impl@winrt@@MEAA@XZ @ 0x180328FB8 (--1-$root_implements@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Win.c)
 */

void *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>::~root_implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
