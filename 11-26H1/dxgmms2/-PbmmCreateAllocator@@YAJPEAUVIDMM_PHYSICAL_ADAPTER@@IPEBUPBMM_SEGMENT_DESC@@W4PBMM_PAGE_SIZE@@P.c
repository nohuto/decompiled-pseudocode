/*
 * XREFs of ?PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@PEAPEAUPBMM_ALLOCATOR@@@Z @ 0x140051614
 * Callers:
 *     InitializePhysicalAdapter @ 0x1400AF7BC (InitializePhysicalAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z @ 0x140051898 (-PbmmDestroyAllocator@@YAXPEAUPBMM_ALLOCATOR@@@Z.c)
 *     ValidateSegmentDesc @ 0x140051E8C (ValidateSegmentDesc.c)
 *     ?PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z @ 0x140053BB8 (-PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PbmmCreateAllocator(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rcx
  unsigned int i; // ebx
  char *v11; // rax
  char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int j; // ebx
  int Segment; // eax
  __int64 v19; // rcx

  v6 = a2;
  *a5 = 0LL;
  if ( a2 <= 0x20 )
  {
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      if ( !(unsigned __int8)ValidateSegmentDesc(i, a3 + 16LL * i) )
        return 3221225485LL;
    }
    v11 = (char *)operator new(160LL, 0x326D6250u, 64LL);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, 0xA0uLL);
      ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v12 + 32), 0LL, 0LL, PagedPool, 0, 0x48uLL, 0x336D6250u, 0);
      *((_QWORD *)v12 + 17) = v12 + 128;
      *((_QWORD *)v12 + 16) = v12 + 128;
      v13 = 8 * v6;
      *(_QWORD *)v12 = a1;
      *((_DWORD *)v12 + 2) = v6;
      if ( !is_mul_ok(v6, 8uLL) )
        v13 = -1LL;
      *((_DWORD *)v12 + 36) = 9;
      *((_DWORD *)v12 + 37) = 511;
      v14 = operator new[](v13, 0x346D6250u, 256LL);
      *((_QWORD *)v12 + 2) = v14;
      if ( v14 )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= (unsigned int)v6 )
          {
            *a5 = v12;
            return 0LL;
          }
          Segment = PbmmCreateSegment(
                      (struct PBMM_ALLOCATOR *)v12,
                      (const struct PBMM_SEGMENT_DESC *)(a3 + 16LL * j),
                      j,
                      (struct PBMM_SEGMENT **)(*((_QWORD *)v12 + 2) + 8LL * j));
          v16 = Segment;
          if ( Segment < 0 )
            break;
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = Segment;
          WdLogGlobalForLineNumber = 1074;
        }
      }
      else
      {
        _InterlockedIncrement(&dword_14008A890);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1061;
        DxgkLogInternalTriageEvent(v15, 262145LL);
        v16 = -1073741801;
      }
      PbmmDestroyAllocator((struct PBMM_ALLOCATOR *)v12);
    }
    else
    {
      _InterlockedIncrement(&dword_14008A88C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1044;
      DxgkLogInternalTriageEvent(v19, 262145LL);
      return (unsigned int)-1073741801;
    }
    return v16;
  }
  else
  {
    WdLogSingleEntry1(1LL, 32LL);
    WdLogGlobalForLineNumber = 1026;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
}
