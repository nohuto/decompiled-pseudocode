/*
 * XREFs of ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1400A24A4
 * Callers:
 *     VidMmUnblockUEFIFrameBufferRanges @ 0x14004D910 (VidMmUnblockUEFIFrameBufferRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400B7B48 (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(
        VIDMM_GLOBAL *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  UINT NumInvalidMemoryRanges; // eax
  __int64 v5; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  __int64 DriverSegmentId; // r8
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 29009;
  }
  NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
  if ( NumInvalidMemoryRanges == 1 )
  {
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    DriverSegmentId = a2->DriverSegmentId;
    v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * PhysicalAdapterIndex);
    if ( (unsigned int)DriverSegmentId < *(_DWORD *)(v8 + 136) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 1752) + 8 * DriverSegmentId);
      if ( v9 )
        return VIDMM_SEGMENT::UnblockMemoryRanges(v9, PhysicalAdapterIndex, 1LL, a2->pMemoryRanges);
    }
    WdLogSingleEntry2(1LL, PhysicalAdapterIndex, DriverSegmentId);
    v5 = a2->PhysicalAdapterIndex;
    WdLogGlobalForLineNumber = 29025;
  }
  else
  {
    WdLogSingleEntry1(1LL, NumInvalidMemoryRanges);
    WdLogGlobalForLineNumber = 29015;
  }
  DxgkLogInternalTriageEvent(v5, 0x40000LL);
  return 3221225485LL;
}
