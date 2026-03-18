/*
 * XREFs of ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x14010A420
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x14003854C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400F19EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x14010A4E4 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockHeapAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rcx
  char *v8; // [rsp+50h] [rbp-18h] BYREF
  char v9; // [rsp+58h] [rbp-10h]

  v9 = 0;
  v8 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  VIDMM_RECYCLE_MULTIRANGE::Unlock(a2, a3, a4);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v8);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
