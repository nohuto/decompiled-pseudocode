/*
 * XREFs of ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x18043E800
 * Callers:
 *     _winrt::get_interfaces_::_1_::dtor$0 @ 0x1806C57E3 (_winrt--get_interfaces_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::com_array<winrt::guid>::~com_array<winrt::guid>(__int64 a1)
{
  winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(a1);
}
