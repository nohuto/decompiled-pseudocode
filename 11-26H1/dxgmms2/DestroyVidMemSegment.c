/*
 * XREFs of DestroyVidMemSegment @ 0x140053AF4
 * Callers:
 *     ?PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z @ 0x140053ECC (-PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z @ 0x140053EF4 (-PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z.c)
 */

void __fastcall DestroyVidMemSegment(struct PBMM_VIDMEM_SEGMENT *a1)
{
  struct PBMM_SLAB *v1; // rdi
  void *v3; // rcx
  void *v4; // rcx

  v1 = (struct PBMM_SLAB *)*((_QWORD *)a1 + 360);
  if ( v1 )
  {
    if ( v1 != (struct PBMM_SLAB *)((char *)v1 + 32 * *((_QWORD *)a1 + 359)) )
    {
      do
      {
        PbmmCleanupSlab(*((struct PBMM_ALLOCATOR **)a1 + 1), a1, v1);
        v1 = (struct PBMM_SLAB *)((char *)v1 + 32);
      }
      while ( v1 != (struct PBMM_SLAB *)(*((_QWORD *)a1 + 360) + 32LL * *((_QWORD *)a1 + 359)) );
      v1 = (struct PBMM_SLAB *)*((_QWORD *)a1 + 360);
    }
    operator delete(v1);
    *((_QWORD *)a1 + 360) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 361);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)a1 + 361) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 362);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)a1 + 362) = 0LL;
  }
  operator delete(a1);
}
