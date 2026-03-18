/*
 * XREFs of ?GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140110640
 * Callers:
 *     ?AllocateLocal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z @ 0x140110610 (-AllocateLocal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetVirtualAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1401106D8 (-GetVirtualAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetDefaultMapping(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v3; // rcx
  void *VirtualAddress; // rbx
  char *v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  v7 = 0;
  v6 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v3, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  VirtualAddress = VIDMM_RECYCLE_MULTIRANGE::GetVirtualAddress(a2);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v6);
  return VirtualAddress;
}
