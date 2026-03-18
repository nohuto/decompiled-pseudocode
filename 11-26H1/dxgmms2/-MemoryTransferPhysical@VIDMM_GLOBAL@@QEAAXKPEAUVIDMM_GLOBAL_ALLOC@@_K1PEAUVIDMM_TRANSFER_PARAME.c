/*
 * XREFs of ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0378 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8328 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8388 (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1401195CC (-VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x14011A6F8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferPhysical(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        LARGE_INTEGER *a6,
        LARGE_INTEGER *a7,
        DXGK_TRANSFERFLAGS a8)
{
  SIZE_T v11; // rbx
  struct VIDMM_GLOBAL_ALLOC *v12; // r8
  LARGE_INTEGER *v13; // rsi
  LARGE_INTEGER *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  bool v19; // zf
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v21; // r13
  LARGE_INTEGER v22; // rcx
  SIZE_T v23; // r8
  unsigned int v24; // r10d
  unsigned __int64 QuadPart; // r9
  const unsigned __int64 *v26; // rdx
  LARGE_INTEGER v27; // rcx
  unsigned __int64 v28; // r9
  const unsigned __int64 *v29; // rdx
  BOOL v30; // ecx
  LARGE_INTEGER v31; // rcx
  unsigned __int8 IsAllocationInUse; // al
  int v33; // r11d
  int v34; // ecx
  int v35; // eax
  int v36; // r13d
  ADAPTER_RENDER *v37; // rcx
  __int64 v38; // rcx
  LARGE_INTEGER v39; // rax
  unsigned int v40; // r12d
  __int64 v41; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  bool v45; // sf
  __int64 v46; // [rsp+40h] [rbp-C0h]
  _DXGKARG_BUILDPAGINGBUFFER v47; // [rsp+50h] [rbp-B0h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v48; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v50; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v51; // [rsp+1F8h] [rbp+F8h]

  v51 = a4;
  v11 = a4;
  memset(&v47, 0, sizeof(v47));
  v13 = a7;
  v14 = a6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = a3;
    WdLogGlobalForLineNumber = 13552;
    v15 = WdLogNewEntry5_WdTrace();
    v16 = a5;
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = v16;
    WdLogGlobalForLineNumber = 13555;
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v17[3] = v14[2].QuadPart;
    v17[4] = v14->QuadPart;
    v17[5] = v14[4].QuadPart;
    v17[6] = v14[3].QuadPart;
    WdLogGlobalForLineNumber = 13557;
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v18[3] = v13[2].QuadPart;
    v18[4] = v13->QuadPart;
    v18[5] = v13[4].QuadPart;
    v18[6] = v13[3].QuadPart;
    WdLogGlobalForLineNumber = 13559;
  }
  else
  {
    v16 = a5;
  }
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, v12, &v47);
  v19 = (*((_BYTE *)this + 41065) & 0x20) == 0;
  Value = a8.Value;
  v47.Transfer.Flags = a8;
  if ( v19 )
  {
    if ( a3 )
    {
      if ( !v16 )
      {
        Value = a8.Value | 8;
        v47.Transfer.Flags.Value = a8.Value | 8;
      }
      if ( v11 + v16 == *(_QWORD *)(*(_QWORD *)a3 + 16LL) )
        v47.Transfer.Flags.Value = Value | 0x10;
      goto LABEL_10;
    }
LABEL_16:
    v21 = 0LL;
    goto LABEL_11;
  }
  if ( !a3 )
    goto LABEL_16;
LABEL_10:
  v21 = *(_QWORD *)(*((_QWORD *)a3 + 46) + 48LL);
LABEL_11:
  v48 = v21;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a2, a3, &v47);
    v19 = (*((_BYTE *)this + 41065) & 0x20) == 0;
    v22 = v14[2];
    v47.UpdateContextAllocation.ContextAllocation = v21;
    if ( v19 )
    {
      v47.Transfer.TransferSize = v11;
      v47.Operation = DXGK_OPERATION_TRANSFER;
      v47.Transfer.TransferOffset = v16;
      v47.Transfer.MdlOffset = 0;
      if ( v22.QuadPart )
      {
        v47.Transfer.Source.SegmentId = *(unsigned __int16 *)(v22.QuadPart + 64);
        v47.Transfer.Source.SegmentAddress.QuadPart = v14->QuadPart + *(_QWORD *)(v22.QuadPart + 16);
        v47.Transfer.TransferOffset = v14[3].LowPart;
      }
      else
      {
        v47.Transfer.Source.SegmentAddress = v14[4];
        v47.Transfer.Source.SegmentId = 0;
      }
      v31 = v13[2];
      if ( v31.QuadPart )
      {
        v47.Transfer.Destination.SegmentId = *(unsigned __int16 *)(v31.QuadPart + 64);
        v47.Transfer.Destination.SegmentAddress.QuadPart = v13->QuadPart + *(_QWORD *)(v31.QuadPart + 16);
        v47.Transfer.TransferOffset = v13[3].LowPart;
      }
      else
      {
        v47.Transfer.Destination.SegmentAddress = v13[4];
        v47.Transfer.Destination.SegmentId = 0;
      }
      if ( a3 )
      {
        IsAllocationInUse = VIDMM_GLOBAL::IsAllocationInUse(this, a3);
        v34 = v33;
        LOBYTE(v34) = IsAllocationInUse == 0;
      }
      else
      {
        v34 = 1;
      }
      v47.Transfer.Flags.Value = v47.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v34);
    }
    else
    {
      v47.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_SPECIAL_LOCK_TRANSFER;
      v23 = v11 >> 12;
      v24 = (unsigned int)v11 >> 12;
      v47.DiscardContent.SegmentId = v11 >> 12;
      v47.Fill.FillPattern = v16 >> 12;
      if ( v22.QuadPart )
      {
        v47.Transfer.TransferOffset = (unsigned __int64)v14[3].QuadPart >> 12;
        v47.Transfer.Source.SegmentId = *(unsigned __int16 *)(v22.QuadPart + 64);
        v47.UnmapApertureSegment.DummyPage.QuadPart = (unsigned __int64)(v14->QuadPart + *(_QWORD *)(v22.QuadPart + 16)) >> 12;
        v47.Transfer.Source.SegmentAddress.HighPart = 1;
        v47.Transfer.Source.SegmentAddress.LowPart = (unsigned int)v11 >> 12;
      }
      else
      {
        QuadPart = v14[1].QuadPart;
        v26 = (const unsigned __int64 *)v14[5].QuadPart;
        v47.Transfer.Source.SegmentId = 0;
        VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)&v47.Reserved.Reserved[8], v26, v23, QuadPart);
        LODWORD(v23) = v47.DiscardContent.SegmentId;
      }
      v27 = v13[2];
      if ( v27.QuadPart )
      {
        v47.Transfer.TransferOffset = (unsigned __int64)v13[3].QuadPart >> 12;
        v47.Transfer.Destination.SegmentAddress.LowPart = *(unsigned __int16 *)(v27.QuadPart + 64);
        v47.UpdatePageTable.AllocationOffsetInBytes = (unsigned __int64)(v13->QuadPart + *(_QWORD *)(v27.QuadPart + 16)) >> 12;
        v47.TransferVirtual.DestinationPageTable = v24 | 0x100000000LL;
      }
      else
      {
        v28 = v13[1].QuadPart;
        v29 = (const unsigned __int64 *)v13[5].QuadPart;
        v47.Transfer.Destination.SegmentAddress.LowPart = 0;
        VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)&v47.Reserved.Reserved[14], v29, v23, v28);
      }
      if ( a3 )
        v30 = VIDMM_GLOBAL::IsAllocationInUse(this, a3) == 0;
      else
        v30 = 1;
      v47.Reserved.Reserved[18] = v47.Reserved.Reserved[18] & 0xFFFFFFFB | (4 * v30);
    }
    v35 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v47);
    v36 = v35;
    if ( a3 && v35 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
      VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
      v37 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v47.Transfer.Flags.Value |= 4u;
      v36 = ADAPTER_RENDER::DdiBuildPagingBuffer(v37, &v47);
    }
    v38 = *((_QWORD *)this + 870);
    if ( v38 )
    {
      v39 = v13[2];
      if ( !v39.QuadPart || *(_DWORD *)(v39.QuadPart + 100) != 1 )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v38 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          v11);
    }
    _InterlockedAdd64((volatile signed __int64 *)this + 981, v11);
    if ( (byte_14008A201 & 0x10) != 0 )
    {
      if ( !v14[2].QuadPart || (v40 = 2, *(_DWORD *)(v13[2].QuadPart + 100) == 1) )
        v40 = 1;
      v41 = *((_QWORD *)this + a2 + 144);
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v46) = v40;
      McTemplateK0pppxxq_EtwWriteTransfer(a5, v43, v44, CurrentProcessId, a3, v41, a5, v51, v46);
      v11 = v51;
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7136), v51, v40);
      v16 = a5;
    }
    v50 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v47, v36, 0, &v50, 0LL);
    v45 = v36 < 0;
    v21 = v48;
  }
  while ( v45 );
}
