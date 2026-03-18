/*
 * XREFs of ?GetPfnArray@VIDMM_RECYCLE_HEAP_MGR@@UEBAPEB_KPEBUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x140115D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 */

const unsigned __int64 *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetPfnArray(
        VIDMM_RECYCLE_HEAP_MGR *this,
        const struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v3 = 0LL;
  v10 = (char *)this + 1328;
  v11 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v6, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  v7 = *((_QWORD *)a2 + 10);
  v8 = *(_QWORD *)(v7 + 120);
  if ( v8 )
    v3 = v8 + 8 * ((unsigned __int64)(a3 + *((_QWORD *)a2 + 6) - *(_QWORD *)(v7 + 40)) >> 12);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v10);
  return (const unsigned __int64 *)v3;
}
