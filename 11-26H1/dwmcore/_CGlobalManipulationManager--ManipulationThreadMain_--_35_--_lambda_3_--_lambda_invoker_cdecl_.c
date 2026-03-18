/*
 * XREFs of _CGlobalManipulationManager::ManipulationThreadMain_::_35_::_lambda_3_::_lambda_invoker_cdecl_ @ 0x1801BFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1801C0264 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain_::_35_::_lambda_3_::_lambda_invoker_cdecl_(
        __int64 a1)
{
  __int64 v1; // rax
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 312);
  if ( *(_BYTE *)(v1 + 808) )
  {
    v3 = CMmcssTask::Apply(v2, 1);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x55u, 0LL);
  }
  else
  {
    CMmcssTask::Revert((CMmcssTask *)v2);
  }
  return 0LL;
}
