/*
 * XREFs of ??1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ @ 0x1400AE420
 * Callers:
 *     ??_EVIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAPEAXI@Z @ 0x14004F5C0 (--_EVIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z @ 0x140051898 (-PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER@@UEAA@XZ @ 0x1400B3AD4 (--1VIDMM_PHYSICAL_ADAPTER@@UEAA@XZ.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::~VIDMM_PHYSICAL_ADAPTER_PBMM(VIDMM_PHYSICAL_ADAPTER_PBMM *this)
{
  unsigned int i; // edi
  void *v3; // rcx
  struct PBMM_ALLOCATOR *v4; // rcx

  *(_QWORD *)this = &VIDMM_PHYSICAL_ADAPTER_PBMM::`vftable';
  if ( *((_QWORD *)this + 236) )
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 952); ++i )
    {
      v3 = *(void **)(*((_QWORD *)this + 236) + 8LL * i);
      if ( v3 )
      {
        operator delete(v3);
        *(_QWORD *)(*((_QWORD *)this + 236) + 8LL * i) = 0LL;
      }
    }
    operator delete(*((void **)this + 236));
    *((_QWORD *)this + 236) = 0LL;
  }
  v4 = (struct PBMM_ALLOCATOR *)*((_QWORD *)this + 233);
  if ( v4 )
  {
    PbmmDestroyAllocator(v4);
    *((_QWORD *)this + 233) = 0LL;
  }
  VIDMM_PHYSICAL_ADAPTER::~VIDMM_PHYSICAL_ADAPTER(this);
}
