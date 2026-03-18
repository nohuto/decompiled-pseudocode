/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F7A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v11 = 0;
  v10 = a1 + 1328;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  v8 = VIDMM_RECYCLE_MULTIRANGE::Reset(a2, a5, a6);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v10);
  return v8;
}
