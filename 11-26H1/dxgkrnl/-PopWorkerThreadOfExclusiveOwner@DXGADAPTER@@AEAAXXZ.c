/*
 * XREFs of ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1400317B8
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x140400FC0 (-DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(DXGADAPTER *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3148;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3148LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 23) )
  {
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3154;
  }
  *((_QWORD *)this + 23) = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
}
