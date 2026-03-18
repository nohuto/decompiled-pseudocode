/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140047020
 * Callers:
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1400B9420 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x140117E48 (--1VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 478;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  if ( *((_DWORD *)this + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 479;
    DxgkLogInternalTriageEvent(v3, 262146LL);
  }
}
