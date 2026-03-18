/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AC650 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z @ 0x1400AD068 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@_N@Z @ 0x1400B9644 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?AllocateGlobal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400B9D00 (-AllocateGlobal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BB700 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x1400BB910 (-ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x14011CF0C (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x140110D54 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemory(
        void **a1,
        unsigned __int64 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  void *CurrentPartitionHandle; // rax
  unsigned __int16 v10; // dx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 *v13; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  __int128 v17; // [rsp+48h] [rbp-70h]
  __int128 v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+68h] [rbp-50h]

  v6 = a3;
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  v16 = 0LL;
  v19 = 0LL;
  v10 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( CurrentPartitionHandle != (void *)-1LL )
  {
    if ( (v6 & 0x1080000) != 0 )
    {
      WdLogSingleEntry1(4LL, v6);
      result = 3223191824LL;
      WdLogGlobalForLineNumber = 1341;
      return result;
    }
    LODWORD(v6) = v6 | 0x20400000;
    LOBYTE(v16) = 3;
    *(_QWORD *)&v17 = CurrentPartitionHandle;
    v10 = 2;
    BYTE8(v17) = 5;
    *(_QWORD *)&v18 = 2LL;
  }
  if ( a5 )
  {
    v11 = 2LL * v10++;
    *((_BYTE *)&v16 + 8 * v11) = 2;
    *((_DWORD *)&v17 + 2 * v11) = a5 - 1;
  }
  v12 = v10;
  v13 = &v16;
  if ( !v10 )
    v13 = 0LL;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  return (*((__int64 (__fastcall **)(__int64, void **, unsigned __int64 *, _QWORD, int, __int64 *, int))VirtualMemoryInterface
          + 1))(
           -1LL,
           a1,
           a2,
           (unsigned int)v6,
           a4,
           v13,
           v12);
}
