/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18013122C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180131570 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _CGlobalManipulationManager::ManipulationThreadMain_::_35_::_lambda_3_::_lambda_invoker_cdecl_ @ 0x1801BFDE0 (_CGlobalManipulationManager--ManipulationThreadMain_--_35_--_lambda_3_--_lambda_invoker_cdecl_.c)
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1801BFE40 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1801BFEB0 (-Run@CGlobalMit@@MEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo && *(_QWORD *)&DebugInfo[2].Flags )
  {
    ((void (*)(void))this[1].LockSemaphore)();
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
  }
  LOBYTE(this[2].DebugInfo) = 0;
  LeaveCriticalSection(this);
}
