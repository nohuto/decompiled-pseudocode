/*
 * XREFs of ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FBA98
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400FB790 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1401243EC (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400379E0 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx

  if ( *((_QWORD *)this + 12) < (unsigned __int64)(*((_QWORD *)this + 12) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 438;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  *((_QWORD *)this + 12) -= a3;
  if ( *((_DWORD *)this + 100) != -1 && !a4 )
  {
    v14 = *((_QWORD *)this + 37);
    if ( v14 < v14 - a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 449;
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
    }
    v16 = *((_QWORD *)this + 37) - a3;
    *((_QWORD *)this + 37) = v16;
    if ( v16 <= qword_14008A5E8 && v14 > qword_14008A5E8 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 40024LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 40072LL),
        *((unsigned int *)this + 100));
    if ( !*((_QWORD *)this + 37) )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
  }
  v9 = *((_QWORD *)this + 1);
  v10 = *((unsigned __int16 *)this + 34);
  v11 = *((int *)this + 26);
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 40320) + 8 * v10);
  if ( (*(_BYTE *)(v12 + 24 * v11 + 632) & 1) != 0 )
    v13 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v9 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v10;
  else
    v13 = v12 + 344 * v11 + 664;
  if ( *(_QWORD *)(v13 + 128) < (unsigned __int64)(*(_QWORD *)(v13 + 128) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 476;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
  }
  *(_QWORD *)(v13 + 128) -= a3;
}
