/*
 * XREFs of ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F5120
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F5868 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::MarkNoZeroNeed(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v3; // rcx
  VIDMM_RECYCLE_RANGE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // [rsp+50h] [rbp-18h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  v8 = 0;
  v7 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v3, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v7);
  v4 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  while ( 1 )
  {
    VIDMM_RECYCLE_RANGE::AccessZeroTransition(v4);
    if ( v4 == *((VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
    v5 = *((_QWORD *)v4 + 15);
    v6 = *((_QWORD *)v4 + 9);
    v4 = 0LL;
    if ( v5 != v6 + 72 )
      v4 = (VIDMM_RECYCLE_RANGE *)(v5 - 120);
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v7);
}
