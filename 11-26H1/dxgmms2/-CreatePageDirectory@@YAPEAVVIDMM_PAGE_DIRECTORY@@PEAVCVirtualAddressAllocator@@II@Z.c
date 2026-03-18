/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DD97C
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1400DDAC8 (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400DDB50 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  VIDMM_PAGE_DIRECTORY *v7; // rax
  VIDMM_PAGE_DIRECTORY *v8; // rax
  VIDMM_PAGE_DIRECTORY *v9; // rdi
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40320LL) + 8LL * a2);
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new(64LL, 0x36356956u, 256LL);
  if ( v7 && (v8 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, a2, *(_DWORD *)(v6 + 548), a3), (v9 = v8) != 0LL) )
  {
    v10 = VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v8, a1);
    if ( v10 >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, v10);
    WdLogGlobalForLineNumber = 5782;
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v9, a1, 0LL);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A834);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 5775;
    DxgkLogInternalTriageEvent(v12, 262145LL);
  }
  return 0LL;
}
