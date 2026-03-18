/*
 * XREFs of ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1400B8014
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009A15C (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400B7B48 (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ValidateMemoryRanges(
        VIDMM_SEGMENT *this,
        unsigned int a2,
        struct _DXGK_MEMORYRANGE *a3,
        unsigned __int64 *a4)
{
  unsigned int i; // r10d
  UINT64 v7; // rcx
  UINT64 SegmentOffset; // rax
  struct _DXGK_MEMORYRANGE *v9; // rbx
  UINT64 SizeInBytes; // rdx
  UINT64 v11; // rcx
  __int64 v12; // rcx

  for ( i = 0; i < a2; ++i )
  {
    v7 = *((_QWORD *)this + 20);
    SegmentOffset = a3[i].SegmentOffset;
    v9 = &a3[i];
    if ( SegmentOffset >= v7 || (SizeInBytes = v9->SizeInBytes, SizeInBytes + SegmentOffset > v7) )
    {
      WdLogSingleEntry3(1LL, a3[i].SegmentOffset, v9->SizeInBytes, -1073741811LL);
      WdLogGlobalForLineNumber = 765;
      goto LABEL_14;
    }
    v11 = *((_QWORD *)this + 5);
    if ( SegmentOffset < v11 )
    {
      if ( SizeInBytes + SegmentOffset >= v11 )
      {
        SizeInBytes = v11 - SegmentOffset;
        v9->SizeInBytes = v11 - SegmentOffset;
      }
      if ( !SizeInBytes || SizeInBytes >= *((_QWORD *)this + 5) - *((_QWORD *)this + 21) )
      {
        WdLogSingleEntry2(1LL, SizeInBytes, -1073741811LL);
        v12 = v9->SizeInBytes;
        WdLogGlobalForLineNumber = 787;
LABEL_14:
        DxgkLogInternalTriageEvent(v12, 0x40000LL);
        return 3221225485LL;
      }
      *a4 += SizeInBytes;
    }
  }
  return 0LL;
}
