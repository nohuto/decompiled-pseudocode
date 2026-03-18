/*
 * XREFs of DxgkIncreaseAdapterUniquenessOnSession @ 0x140205118
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z @ 0x140202FF8 (-IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DxgkIncreaseAdapterUniquenessOnSession(__int64 a1)
{
  DXGSESSIONMGR *v2; // rcx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  if ( v2 )
    return DXGSESSIONMGR::IncreaseAdapterUniquenessOnSession(v2, a1);
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1135;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the session manager, status 0x%I64x.",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
