/*
 * XREFs of CreateSlabArray @ 0x140053978
 * Callers:
 *     ?PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z @ 0x140053BB8 (-PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z @ 0x140053EF4 (-PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z.c)
 *     ?PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z @ 0x140053F84 (-PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z.c)
 */

__int64 __fastcall CreateSlabArray(struct PBMM_ALLOCATOR *a1, struct PBMM_VIDMEM_SEGMENT *a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  struct PBMM_SLAB *v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // ebp
  struct PBMM_SLAB *i; // rsi

  v4 = a3;
  v6 = 32LL * *((_QWORD *)a2 + 359);
  if ( !is_mul_ok(*((_QWORD *)a2 + 359), 0x20uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x376D6250u, 256LL);
  *((_QWORD *)a2 + 360) = v7;
  v8 = (struct PBMM_SLAB *)v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)a2 + 360);
      if ( v8 == (struct PBMM_SLAB *)(v11 + 32LL * *((_QWORD *)a2 + 359)) )
        return 0LL;
      v12 = PbmmInitializeSlab(v8, a1, a2, v4 * (((__int64)v8 - v11) >> 5) / 4096, *((_DWORD *)a2 + 716) & 0x1F);
      if ( v12 < 0 )
        break;
      v8 = (struct PBMM_SLAB *)((char *)v8 + 32);
    }
    for ( i = (struct PBMM_SLAB *)*((_QWORD *)a2 + 360); i != v8; i = (struct PBMM_SLAB *)((char *)i + 32) )
      PbmmCleanupSlab(a1, a2, i);
    operator delete(*((void **)a2 + 360));
    result = (unsigned int)v12;
    *((_QWORD *)a2 + 360) = 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A89C);
    WdLogSingleEntry1(6LL, *((_QWORD *)a2 + 359));
    WdLogGlobalForLineNumber = 38;
    DxgkLogInternalTriageEvent(v9, 262145LL);
    return 3221225495LL;
  }
  return result;
}
