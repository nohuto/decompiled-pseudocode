/*
 * XREFs of ?PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z @ 0x140051898
 * Callers:
 *     ?PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@PEAPEAUPBMM_ALLOCATOR@@@Z @ 0x140051614 (-PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@P.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ @ 0x1400AE420 (--1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z @ 0x140053ECC (-PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z.c)
 */

void __fastcall PbmmDestroyAllocator(struct PBMM_ALLOCATOR *a1)
{
  __int64 i; // rdi
  struct PBMM_SEGMENT *v3; // rcx

  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 32));
  if ( *((_QWORD *)a1 + 2) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(struct PBMM_SEGMENT **)(*((_QWORD *)a1 + 2) + 8 * i);
      if ( v3 )
      {
        PbmmDestroySegment(v3);
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * i) = 0LL;
      }
    }
    operator delete(*((void **)a1 + 2));
    *((_QWORD *)a1 + 2) = 0LL;
  }
  operator delete(a1);
}
