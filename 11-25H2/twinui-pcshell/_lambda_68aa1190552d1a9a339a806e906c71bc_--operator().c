/*
 * XREFs of _lambda_68aa1190552d1a9a339a806e906c71bc_::operator() @ 0x18058E510
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___ @ 0x18058E0A0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 * Callees:
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180202F10 (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 */

bool __fastcall lambda_68aa1190552d1a9a339a806e906c71bc_::operator()(__int64 **a1, __int64 a2)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 320LL) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest(*a1);
}
