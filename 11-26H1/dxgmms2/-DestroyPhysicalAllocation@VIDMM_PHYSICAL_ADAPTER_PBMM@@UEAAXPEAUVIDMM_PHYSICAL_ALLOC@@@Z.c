/*
 * XREFs of ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400AF460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?PbmmDestroyPhysicalAllocation@@YAXPEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x140052224 (-PbmmDestroyPhysicalAllocation@@YAXPEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::DestroyPhysicalAllocation(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v3; // rax
  struct PBMM_PHYSICAL_ALLOC ***v4; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    v3 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v3 + 24) = a2;
    *(_QWORD *)(v3 + 32) = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 1241;
  }
  v4 = (struct PBMM_PHYSICAL_ALLOC ***)*((_QWORD *)a2 + 10);
  if ( v4 )
  {
    PbmmDestroyPhysicalAllocation(v4);
    *((_QWORD *)a2 + 10) = 0LL;
  }
  operator delete(a2);
}
