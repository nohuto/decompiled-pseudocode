/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180091F84
 * Callers:
 *     std::call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___ @ 0x180057044 (std--call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x18006ED10 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ??1SessionMonitor@@QEAA@XZ @ 0x1800A30E8 (--1SessionMonitor@@QEAA@XZ.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B0FEC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CEF9C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF858 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CF8E4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1_::Invoke @ 0x180166CB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatch_ea_180166CB0.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v2);
}
