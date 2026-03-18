/*
 * XREFs of ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1400A2228
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x14003957C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?RecordVaPagingHistoryBitplane@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@@Z @ 0x1400AAD8C (-RecordVaPagingHistoryBitplane@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAVVIDMM_DIRT.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x140116424 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1401195CC (-VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x14011A6F8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::TransferTransportBufferSystemCommand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rbx
  __int64 v7; // rax
  int v10; // eax
  LARGE_INTEGER *v11; // r13
  LARGE_INTEGER *v12; // r12
  struct VIDMM_GLOBAL_ALLOC *v13; // r8
  ADAPTER_RENDER *v14; // rcx
  unsigned int v15; // edx
  CVirtualAddressAllocator *v16; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  LARGE_INTEGER *v21; // rax
  __int64 v22; // rcx
  LARGE_INTEGER **v23; // rdx
  unsigned __int64 result; // rax
  int v25; // [rsp+40h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+190h] [rbp+90h] BYREF
  __int64 v28; // [rsp+1A0h] [rbp+A0h]

  v5 = a5;
  v28 = 0LL;
  v7 = a3[3];
  v27 = 0LL;
  v10 = (unsigned __int16)(*(_WORD *)(v7 + 70) + 1);
  if ( a4 )
  {
    v11 = *(LARGE_INTEGER **)(a2 + 40);
    v12 = (LARGE_INTEGER *)a3[6];
    DWORD1(v27) = v10;
  }
  else
  {
    v11 = (LARGE_INTEGER *)a3[6];
    v12 = *(LARGE_INTEGER **)(a2 + 40);
    LODWORD(v27) = v10;
  }
  memset(&v26, 0, sizeof(v26));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)a1, 0, v13, &v26);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)a1, 0, 0LL, &v26);
    v14 = *(ADAPTER_RENDER **)(a1 + 16);
    v26.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
    v26.Transfer.Destination.SegmentAddress.LowPart = a4 != 0;
    v26.Transfer.TransferSize = a3[5];
    v26.MapApertureSegment.OffsetInPages = v11[13].QuadPart;
    v26.Transfer.Source.SegmentAddress = v12[13];
    if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v14, 0) + 5) & 1) != 0 )
    {
      v16 = *(CVirtualAddressAllocator **)(a1 + 40544);
      v26.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                    v16,
                                                                    v15,
                                                                    v11[13].QuadPart,
                                                                    0);
      VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(v16, 0, v12[13].QuadPart, 0);
      v26.Transfer.Destination.SegmentAddress.HighPart &= 0xFFFFFFFC;
      v5 = a5;
      v26.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
    }
    VIDMM_GLOBAL::RecordVaPagingHistoryBitplane(a1, &v26, a3, a4);
    v18 = ADAPTER_RENDER::DdiBuildPagingBuffer(*(ADAPTER_RENDER **)(a1 + 16), &v26);
    v19 = *(_QWORD *)(a1 + 6960);
    v20 = v18;
    v25 = v18;
    if ( v19 && a4 == 1 )
    {
      VIDMM_PROCESS::ChargeEvictionTransfer(
        *(VIDMM_PROCESS **)(v19 + 8),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 240LL),
        a3[5]);
      v20 = v25;
    }
    if ( (byte_14008A201 & 0x10) != 0 )
      VidMmRecordTransfer((struct VIDMM_GLOBAL_STATISTICS *)(a1 + 7136), a3[5], 2 - (a4 != 0));
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)a1, 0, 0LL, &v26, v20, 0, v5, &v27);
  }
  while ( v25 < 0 );
  v21 = v11 + 4;
  v22 = **(_QWORD **)(a1 + 40320) + 584LL;
  v23 = *(LARGE_INTEGER ***)(**(_QWORD **)(a1 + 40320) + 592LL);
  if ( a4 )
    v21 = v12 + 4;
  if ( *v23 != (LARGE_INTEGER *)v22 )
    __fastfail(3u);
  v21->QuadPart = v22;
  v21[1].QuadPart = (LONGLONG)v23;
  *v23 = v21;
  *(_QWORD *)(v22 + 8) = v21;
  v11[6].QuadPart = *v5;
  result = *v5;
  v12[6].QuadPart = *v5;
  a3[6] = 0LL;
  return result;
}
