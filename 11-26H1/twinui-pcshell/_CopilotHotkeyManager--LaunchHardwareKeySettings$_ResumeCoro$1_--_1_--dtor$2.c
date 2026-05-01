/*
 * XREFs of _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::dtor$2 @ 0x180702CA1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 176) + 56LL;
  *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 176) + 56LL;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 176) + 56LL;
    *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 80);
    *(_DWORD *)(a2 + 88) = *(_DWORD *)(a2 + 64) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 72) = *(_DWORD *)(a2 + 88);
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 176) + 16LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 96));
  }
}
