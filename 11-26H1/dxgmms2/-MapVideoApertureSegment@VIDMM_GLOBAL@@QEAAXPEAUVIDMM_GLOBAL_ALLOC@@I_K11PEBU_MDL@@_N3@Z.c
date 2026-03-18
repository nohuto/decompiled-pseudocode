/*
 * XREFs of ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0
 * Callers:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pqpqxqp_EtwWriteTransfer @ 0x140046EBC (McTemplateK0pqpqxqp_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009D04C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009DBF4 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegment(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        LARGE_INTEGER a4,
        SIZE_T a5,
        unsigned __int64 a6,
        PMDL MemoryDescriptorList,
        bool a8,
        int a9)
{
  PVOID MappedSystemVa; // r12
  int v10; // ebx
  PMDL v11; // r15
  unsigned int v14; // r14d
  SIZE_T v15; // r13
  struct VIDMM_GLOBAL_ALLOC *v16; // r8
  D3DGPU_VIRTUAL_ADDRESS v17; // rbx
  __int64 v18; // rax
  SIZE_T v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 LogicalAddress; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  SIZE_T v26; // rdx
  PVOID v27; // rax
  ULONG BugCheckOnFailure[2]; // [rsp+28h] [rbp-E0h]
  ULONG BugCheckOnFailurea[2]; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v30; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY v32; // [rsp+58h] [rbp-B0h] BYREF
  char *v33; // [rsp+68h] [rbp-A0h] BYREF
  char v34; // [rsp+70h] [rbp-98h]
  struct _DXGKARG_BUILDPAGINGBUFFER v35; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+1F8h] [rbp+F0h] BYREF
  UINT v37; // [rsp+208h] [rbp+100h]
  LARGE_INTEGER v38; // [rsp+210h] [rbp+108h]

  v38 = a4;
  v37 = a3;
  MappedSystemVa = 0LL;
  v10 = (unsigned __int8)a9;
  v11 = MemoryDescriptorList;
  v14 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v32 = 0LL;
  if ( !(_BYTE)a9 && (**((_DWORD **)a2 + 46) & 0x2000) != 0 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      v27 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
      a4.LowPart = v38.LowPart;
      MappedSystemVa = v27;
      a3 = v37;
    }
  }
  v15 = a5;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    BugCheckOnFailure[0] = v14;
    McTemplateK0pqpqxqp_EtwWriteTransfer(
      (__int64)this,
      &MapApertureStart,
      a3,
      *((_QWORD *)this + 3),
      *(_QWORD *)BugCheckOnFailure,
      a2,
      a3,
      a5,
      a4.LowPart,
      MappedSystemVa,
      v32.Flink,
      v32.Blink);
  }
  if ( (*((_BYTE *)this + 41065) & 4) != 0 )
  {
    v32.Blink = &v32;
    v32.Flink = &v32;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v32);
  }
  memset(&v35, 0, sizeof(v35));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v14, v16, &v35);
  a9 = v10;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v14, a2, &v35);
    v17 = 0LL;
    if ( *((_QWORD *)a2 + 6) && (**((_DWORD **)a2 + 46) & 0x10000000) == 0 && (*((_DWORD *)a2 + 8) & 4) == 0 )
    {
      v34 = 0;
      v33 = (char *)a2 + 136;
      if ( a2 == (struct VIDMM_GLOBAL_ALLOC *)-136LL )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 628;
        DxgkLogInternalTriageEvent(628LL, 262146LL);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 32LL) - 32LL) + 24LL) + 616LL);
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v33);
    }
    if ( (*((_BYTE *)this + 41065) & 8) != 0 )
    {
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 43), 0LL);
      v24 = *((_QWORD *)a2 + 46);
      v25 = LogicalAddress;
      v35.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_FILL;
      v26 = *(_QWORD *)(v24 + 48);
      v35.Fill.FillPattern = v37;
      v35.Transfer.Source.SegmentAddress = v38;
      v35.Fill.FillSize = v26;
      LODWORD(LogicalAddress) = v11->ByteCount >> 12;
      v35.UpdateContextAllocation.ContextAllocation = v17;
      v35.MapApertureSegment.OffsetInPages = v15;
      v35.TransferVirtual.DestinationPageTable = a8 | (unsigned __int64)(v35.Transfer.Flags.Value & 0xFFFFFFFE);
      v35.UpdatePageTable.AllocationOffsetInBytes = (UINT64)MappedSystemVa;
      v35.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)LogicalAddress;
      if ( v25 )
      {
        v35.Transfer.Destination.SegmentAddress.QuadPart = v25 >> 12;
        v35.UnmapApertureSegment.DummyPage.HighPart = 1;
      }
      else
      {
        v35.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)&v11[1];
      }
    }
    else
    {
      v18 = *((_QWORD *)a2 + 46);
      v35.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
      v19 = *(_QWORD *)(v18 + 48);
      v35.Fill.FillPattern = v37;
      v35.Transfer.Source.SegmentAddress = v38;
      v35.Fill.FillSize = v19;
      v35.UpdateContextAllocation.ContextAllocation = v17;
      v35.Transfer.Destination.SegmentAddress.QuadPart = a8 | (unsigned __int64)(v35.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
      v35.MapApertureSegment.OffsetInPages = v15;
      v35.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)v11;
    }
    v20 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v35);
    v36 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v14, a2, &v35, v20, a9, &v36, 0LL);
  }
  while ( v20 == -1071775743 );
  if ( (*((_BYTE *)this + 41065) & 4) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v32, v22);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    LODWORD(v31) = v38.LowPart;
    LODWORD(v30) = v37;
    BugCheckOnFailurea[0] = v14;
    McTemplateK0pqpqxqp_EtwWriteTransfer(
      v21,
      &MapApertureStop,
      v22,
      *((_QWORD *)this + 3),
      *(_QWORD *)BugCheckOnFailurea,
      a2,
      v30,
      v15,
      v31,
      MappedSystemVa);
  }
}
