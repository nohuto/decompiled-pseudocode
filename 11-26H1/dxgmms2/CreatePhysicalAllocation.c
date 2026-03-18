/*
 * XREFs of CreatePhysicalAllocation @ 0x1400AF268
 * Callers:
 *     ?CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K11W4_DXGK_PAGESIZE@@2IKKU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x1400AF3F0 (-CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_G.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PbmmCreatePhysicalAllocation@@YAJPEAUPBMM_ALLOCATOR@@PEAUVIDMM_PHYSICAL_ALLOC@@IW4PBMM_PAGE_SIZE@@2IU_D3DDDI_SEGMENTPREFERENCE@@ITPBMM_PHYSICAL_ALLOC_FLAGS@@PEAPEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x140051F20 (-PbmmCreatePhysicalAllocation@@YAJPEAUPBMM_ALLOCATOR@@PEAUVIDMM_PHYSICAL_ALLOC@@IW4PBMM_PAGE_SIZ.c)
 *     ??0VIDMM_PHYSICAL_ALLOC_PBMM@@QEAA@PEAUVIDMM_GLOBAL_ALLOC@@_K11W4_DXGK_PAGESIZE@@2IKKU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x1400B8178 (--0VIDMM_PHYSICAL_ALLOC_PBMM@@QEAA@PEAUVIDMM_GLOBAL_ALLOC@@_K11W4_DXGK_PAGESIZE@@2IKKU_D3DDDI_SE.c)
 */

void *__fastcall CreatePhysicalAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r11d
  void *v16; // rbx
  __int64 v18; // rcx

  v13 = operator new(112LL, 0x6D4D6956u, 64LL);
  if ( v13
    && (v14 = VIDMM_PHYSICAL_ALLOC_PBMM::VIDMM_PHYSICAL_ALLOC_PBMM(v13, a2, a3, a4, a5, a6), (v16 = (void *)v14) != 0LL) )
  {
    if ( (int)PbmmCreatePhysicalAllocation(
                *(_QWORD *)(a1 + 1864),
                v14,
                a4,
                a6,
                a7,
                a8,
                v15,
                a9,
                0,
                (_QWORD *)(v14 + 80)) >= 0 )
      return v16;
    operator delete(v16);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A888);
    WdLogSingleEntry2(6LL, a2, a1);
    WdLogGlobalForLineNumber = 1188;
    DxgkLogInternalTriageEvent(v18, 262145LL);
  }
  return 0LL;
}
