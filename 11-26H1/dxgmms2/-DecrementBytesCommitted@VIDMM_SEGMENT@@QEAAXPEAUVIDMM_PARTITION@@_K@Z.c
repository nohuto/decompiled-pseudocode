/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400F90C8
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F8F4C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400FB790 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx

  if ( *((_QWORD *)this + 11) < (unsigned __int64)(*((_QWORD *)this + 11) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 359;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
  *((_QWORD *)this + 11) -= a3;
  v7 = *((_QWORD *)this + 1);
  v8 = *((unsigned __int16 *)this + 34);
  v9 = *((int *)this + 26);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8 * v8);
  if ( (*(_BYTE *)(v10 + 24 * v9 + 632) & 1) != 0 )
    v11 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v7 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v8;
  else
    v11 = v10 + 344 * v9 + 664;
  if ( *(_QWORD *)(v11 + 120) < (unsigned __int64)(*(_QWORD *)(v11 + 120) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 369;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
  *(_QWORD *)(v11 + 120) -= a3;
}
