/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F7470
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEBA_KXZ @ 0x1400F6ADC (-GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(
        VIDMM_RECYCLE_HEAP_MGR *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v3; // rcx
  unsigned __int64 BackingAddress; // rbx
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
  BackingAddress = VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(a2);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v6);
  return BackingAddress;
}
