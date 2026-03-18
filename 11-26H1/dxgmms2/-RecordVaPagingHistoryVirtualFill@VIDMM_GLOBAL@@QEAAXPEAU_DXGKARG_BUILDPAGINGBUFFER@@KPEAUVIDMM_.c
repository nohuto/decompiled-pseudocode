/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8DDC
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct VIDMM_GLOBAL_ALLOC *a4)
{
  char *v5; // rdi
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rax

  v5 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v9 = operator new(64, (VIDMM_GLOBAL *)((char *)this + 41168), 6u, 0);
  v10 = v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = *(_OWORD *)&a2->Transfer.hAllocation;
    *((_OWORD *)v9 + 1) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
    *((_QWORD *)v9 + 4) = a2->Transfer.Source.SegmentAddress.QuadPart;
    *((_DWORD *)v9 + 10) = a3;
    *((_QWORD *)v9 + 6) = a4;
    if ( a4 )
      v11 = *(_QWORD *)(*((_QWORD *)a4 + 46) + 48LL);
    else
      v11 = 0LL;
    *((_QWORD *)v10 + 7) = v11;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
