/*
 * XREFs of ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180060E0C
 * Callers:
 *     _DWMLegacyInputTarget::PopulateInputSiteFromWindowId_::_1_::dtor$1 @ 0x1801D5D4E (_DWMLegacyInputTarget--PopulateInputSiteFromWindowId_--_1_--dtor$1.c)
 *     _DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList_::_1_::dtor$0 @ 0x1801D7C4D (_DWMInputRouter--CheckForVirtualTouchpadFromInputSiteList_--_1_--dtor$0.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$1 @ 0x1801D8CA1 (_ForegroundManager--SetInputDelegation_--_1_--dtor$1.c)
 *     _CursorProcessor::GetWindowsMessageProcessAndThreadFromContext_::_1_::dtor$0 @ 0x1801DB473 (_CursorProcessor--GetWindowsMessageProcessAndThreadFromContext_--_1_--dtor$0.c)
 *     _MagnifierProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801DCF84 (_MagnifierProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _MagnifierToggleTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801DCFBA (_MagnifierToggleTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualTouchpadControllerProxy>::~ComPtr<VirtualTouchpadControllerProxy>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 16) + 8LL))(result + 16);
  }
  return result;
}
