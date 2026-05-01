/*
 * XREFs of ??1?$com_ptr@UWASDKInitializationWrapper@@@winrt@@QEAA@XZ @ 0x180328E10
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E32D2 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::Initialize_WASDK_::_1_::dtor$1 @ 0x1806ED685 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlApplication_ea_1806ED685.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180333540 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall winrt::com_ptr<WASDKInitializationWrapper>::~com_ptr<WASDKInitializationWrapper>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref();
  return result;
}
