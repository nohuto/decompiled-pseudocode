/*
 * XREFs of ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D95B4
 * Callers:
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  char *v4; // rdi
  char *v7; // rax
  __int128 v8; // xmm1

  v4 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = operator new(56, (VIDMM_GLOBAL *)((char *)this + 41168), 0xAu, 0);
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)&a2->Transfer.hAllocation;
    v8 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
    *((_QWORD *)v7 + 5) = a3;
    *((_OWORD *)v7 + 1) = v8;
    *((_DWORD *)v7 + 8) = (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F;
    *((_QWORD *)v7 + 6) = *(_QWORD *)(*((_QWORD *)a3 + 46) + 48LL);
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
