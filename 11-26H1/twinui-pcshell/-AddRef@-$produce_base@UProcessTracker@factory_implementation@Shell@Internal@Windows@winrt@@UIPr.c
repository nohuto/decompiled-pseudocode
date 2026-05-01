/*
 * XREFs of ?AddRef@?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@UEAAIXZ @ 0x18028A200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::hstring>>::AddRef((a1 - 24) & -(__int64)(a1 != 0));
}
