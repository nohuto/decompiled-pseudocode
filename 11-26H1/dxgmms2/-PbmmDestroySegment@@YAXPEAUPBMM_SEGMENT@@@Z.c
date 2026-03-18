/*
 * XREFs of ?PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z @ 0x140053ECC
 * Callers:
 *     ?PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z @ 0x140051898 (-PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z.c)
 *     ?PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z @ 0x140053BB8 (-PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DestroyVidMemSegment @ 0x140053AF4 (DestroyVidMemSegment.c)
 */

void __fastcall PbmmDestroySegment(struct PBMM_SEGMENT *a1)
{
  if ( (*((_DWORD *)a1 + 716) & 0x1F) != 0 )
    DestroyVidMemSegment(a1);
  else
    operator delete(a1);
}
