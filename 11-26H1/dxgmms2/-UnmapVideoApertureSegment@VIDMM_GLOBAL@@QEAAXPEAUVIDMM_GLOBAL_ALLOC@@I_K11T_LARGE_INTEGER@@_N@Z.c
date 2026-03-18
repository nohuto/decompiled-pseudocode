/*
 * XREFs of ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pqpqxq_EtwWriteTransfer @ 0x14004DEB8 (McTemplateK0pqpqxq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009D04C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009DBF4 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegment(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        LARGE_INTEGER a4,
        SIZE_T a5,
        unsigned __int64 a6,
        union _LARGE_INTEGER a7,
        bool a8)
{
  SIZE_T v8; // rdi
  UINT v10; // r13d
  unsigned int v13; // r14d
  struct VIDMM_GLOBAL_ALLOC *v14; // r8
  union _LARGE_INTEGER v15; // rbx
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+40h] [rbp-C0h]
  DWORD LowPart; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY v27; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v29; // [rsp+70h] [rbp-90h] BYREF
  char v30; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v31; // [rsp+1F8h] [rbp+F8h] BYREF

  v8 = a5;
  v10 = a3;
  v30 = 0;
  v13 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v27 = 0LL;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    LowPart = a4.LowPart;
    v24 = a3;
    v22 = v13;
    McTemplateK0pqpqxq_EtwWriteTransfer(
      (__int64)this,
      &UnmapApertureStart,
      a3,
      *((_QWORD *)this + 3),
      v22,
      a2,
      v24,
      a5,
      LowPart);
  }
  if ( (*((_BYTE *)this + 41065) & 4) != 0 )
  {
    v27.Blink = &v27;
    v27.Flink = &v27;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v27);
  }
  memset(&v29, 0, sizeof(v29));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v14, &v29);
  v15 = a7;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a2, &v29);
    v16 = *((_QWORD *)a2 + 6) == 0LL;
    v17 = *((_QWORD *)a2 + 46);
    v29.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    v29.Fill.FillSize = *(_QWORD *)(v17 + 48);
    v29.UpdateContextAllocation.ContextAllocation = 0LL;
    v29.Fill.FillPattern = v10;
    v29.MapApertureSegment.OffsetInPages = v8;
    v29.Transfer.Source.SegmentAddress = a4;
    v29.UnmapApertureSegment.DummyPage = v15;
    if ( !v16 && (*(_DWORD *)v17 & 0x10000000) == 0 && (*((_DWORD *)a2 + 8) & 4) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
      v29.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 32LL)
                                                                                        - 32LL)
                                                                            + 24LL)
                                                                + 616LL);
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v28);
    }
    v18 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v29);
    v31 = 0LL;
    LOBYTE(v19) = VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v13, a2, &v29, v18, a8, &v31, 0LL) | v30;
    v16 = v18 == -1071775743;
    v30 = v19;
    v8 = a5;
  }
  while ( v16 );
  if ( (_BYTE)v19 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v13);
  if ( (*((_BYTE *)this + 41065) & 4) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v27, v20);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    LODWORD(v25) = a4.LowPart;
    LODWORD(v23) = v10;
    LODWORD(v21) = v13;
    McTemplateK0pqpqxq_EtwWriteTransfer(v19, &UnmapApertureStop, v20, *((_QWORD *)this + 3), v21, a2, v23, v8, v25);
  }
}
