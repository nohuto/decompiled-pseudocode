/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400DDB50 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@EE@Z @ 0x1400DDF24 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@EE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAGII@Z @ 0x140041B48 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAGII@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  struct VIDMM_PROCESS **v7; // r15
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r11
  int v15; // ecx
  int v16; // edx
  struct VIDMM_GLOBAL_ALLOC **v17; // rbx
  int OneAllocation; // eax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v22; // rcx
  _BYTE v23[8]; // [rsp+D0h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-80h] BYREF

  v4 = *(_DWORD *)this;
  v6 = *((_QWORD *)a2 + 12);
  v7 = (struct VIDMM_PROCESS **)*((_QWORD *)a2 + 14);
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 40320) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
  v23[0] = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 444LL);
  if ( (v10 & 8) == 0 && (v10 & 0x10) == 0 )
    **(_DWORD **)(v9 + 560) = **(_DWORD **)(v9 + 560);
  v11 = 1 << VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex((VIDMM_GLOBAL *)v6, (v4 >> 8) & 0x1F, a4);
  v15 = 0;
  v16 = *(_DWORD *)(v9 + 48LL * (v4 & 7) + 220);
  if ( !v16 )
    v16 = 4096;
  if ( (*(_BYTE *)(v6 + 41065) & 0x20) != 0 )
    _BitScanReverse((unsigned int *)&v15, (v16 | (unsigned int)v14) >> 12);
  v17 = this + 3;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v6,
                    v7,
                    v13,
                    v14,
                    v14,
                    v16,
                    v15,
                    v15,
                    v11,
                    0,
                    0,
                    0,
                    v12,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    this,
                    0LL,
                    0LL,
                    this + 3,
                    v23);
  LODWORD(v19) = OneAllocation;
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_14008A718);
    WdLogSingleEntry1(6LL, OneAllocation);
    WdLogGlobalForLineNumber = 5477;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 38) & 4) != 0 )
      *((_DWORD *)*v17 + 6) |= 8u;
    v20 = *((_QWORD *)a2 + 13);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v20 + 16), &ApcState);
    v19 = (int)VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v6, v7, *v17, 0LL, 0, 0LL, this + 4);
    KeUnstackDetachProcess(&ApcState);
    if ( (int)v19 >= 0 )
      return 0LL;
    _InterlockedIncrement(&dword_14008A71C);
    WdLogSingleEntry1(6LL, v19);
    WdLogGlobalForLineNumber = 5507;
  }
  DxgkLogInternalTriageEvent(v22, 262145LL);
  return (unsigned int)v19;
}
