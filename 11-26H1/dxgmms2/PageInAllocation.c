/*
 * XREFs of PageInAllocation @ 0x1400AFE78
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400AFF70 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_.c)
 * Callees:
 *     ?PbmmAddReserveAllocation@@YAXPEAUPBMM_RESERVE_STATE@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x1400514F0 (-PbmmAddReserveAllocation@@YAXPEAUPBMM_RESERVE_STATE@@PEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?PbmmCancelResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x14005151C (-PbmmCancelResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 *     ?PbmmCommitResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051564 (-PbmmCommitResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 *     ?PbmmFinalizeReserveState@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051920 (-PbmmFinalizeReserveState@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 *     ?PbmmInitializeReserveState@@YAXPEAUPBMM_RESERVE_STATE@@@Z @ 0x140051938 (-PbmmInitializeReserveState@@YAXPEAUPBMM_RESERVE_STATE@@@Z.c)
 *     ?PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x140051954 (-PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PageInAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, _QWORD *a6)
{
  struct PBMM_ALLOCATOR *v6; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 *v11[8]; // [rsp+20h] [rbp-68h] BYREF

  v6 = *(struct PBMM_ALLOCATOR **)(a1 + 1864);
  memset(v11, 0, sizeof(v11));
  PbmmInitializeReserveState((struct PBMM_RESERVE_STATE *)v11);
  PbmmAddReserveAllocation((struct PBMM_RESERVE_STATE *)v11, *(struct PBMM_PHYSICAL_ALLOC **)(a2 + 80));
  PbmmFinalizeReserveState(v6, (struct PBMM_RESERVE_STATE *)v11);
  while ( (int)PbmmReserveResources(v6, (struct PBMM_RESERVE_STATE *)v11) < 0 )
    ;
  v8 = PbmmCommitResources(v6, (struct PBMM_RESERVE_STATE *)v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 1628;
    PbmmCancelResources(v6, v11);
  }
  *a5 = 0;
  result = v9;
  *a6 = 0LL;
  return result;
}
