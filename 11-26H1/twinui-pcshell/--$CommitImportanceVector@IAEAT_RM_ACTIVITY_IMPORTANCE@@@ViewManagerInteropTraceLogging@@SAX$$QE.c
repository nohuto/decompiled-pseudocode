/*
 * XREFs of ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18004DFA4
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x18004E0D8 (-get@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTrac.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18006B5C4 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int,_RM_ACTIVITY_IMPORTANCE &>(
        unsigned int *a1,
        const union _RM_ACTIVITY_IMPORTANCE *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // r8
  ViewManagerInteropTraceLogging *v6; // rcx

  v5 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
                      a1,
                      _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v5 )
  {
    if ( *v5 )
    {
      wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
        v4,
        _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::CommitImportanceVector_(v6, *a1, a2);
    }
  }
}
