/*
 * XREFs of _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806DA169
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 240) + 120LL;
  *(_DWORD *)(a2 + 96) = **(_DWORD **)(a2 + 88);
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 240) + 120LL;
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 240) + 120LL;
    *(_DWORD *)(a2 + 96) = **(_DWORD **)(a2 + 112);
    *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 96) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 104) = *(_DWORD *)(a2 + 120);
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 240) + 16LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 128));
  }
}
