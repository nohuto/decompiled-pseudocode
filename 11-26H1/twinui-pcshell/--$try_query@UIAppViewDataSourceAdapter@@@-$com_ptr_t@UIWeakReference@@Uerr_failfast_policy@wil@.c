/*
 * XREFs of ??$try_query@UIAppViewDataSourceAdapter@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1802A6FCC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs___lambda_e154441d1d346fb4a2aa0b556d03af10___::Invoke @ 0x1806C27A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1806C27A0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___::Invoke @ 0x1806C2800 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18017A914 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IAppViewDataSourceAdapter>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, a2);
  return a2;
}
