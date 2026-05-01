/*
 * XREFs of ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180112054
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180070C64 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112194 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int,_RM_ACTIVITY_IMPORTANCE &>(
        int *a1,
        const union _RM_ACTIVITY_IMPORTANCE *a2)
{
  _DWORD *v4; // r8
  ViewManagerInteropTraceLogging *v5; // rcx

  v4 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      ViewManagerInteropTraceLogging::Instance();
      ViewManagerInteropTraceLogging::CommitImportanceVector_(v5, *a1, a2);
    }
  }
}
