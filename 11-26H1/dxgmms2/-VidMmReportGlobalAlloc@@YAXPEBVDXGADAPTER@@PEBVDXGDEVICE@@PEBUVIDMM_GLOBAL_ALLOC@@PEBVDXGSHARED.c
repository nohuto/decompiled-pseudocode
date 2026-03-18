/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400D7458
 * Callers:
 *     VidMmReportMultiGlobalAlloc @ 0x1400D7430 (VidMmReportMultiGlobalAlloc.c)
 *     ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400D7EB8 (-ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidMmReportContextAllocList @ 0x1400D8EE0 (VidMmReportContextAllocList.c)
 *     VidMmReportDmaPoolState @ 0x140124C50 (VidMmReportDmaPoolState.c)
 * Callees:
 *     McTemplateK0puu_EtwWriteTransfer @ 0x140041008 (McTemplateK0puu_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x14004224C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7230 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        const struct DXGADAPTER *a1,
        const struct DXGDEVICE *a2,
        const struct VIDMM_GLOBAL_ALLOC *a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  char v6; // dl
  __int64 v7; // r8
  __int64 v8; // rcx
  UINT SlicePitch; // esi
  UINT Depth; // ebp
  UINT Pitch; // r14d
  UINT Height; // r15d
  UINT Width; // r12d
  UINT ByteOffset; // r13d
  UINT Value; // r9d
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-158h]
  __int64 v19; // [rsp+28h] [rbp-150h]
  int v20; // [rsp+48h] [rbp-130h]
  int v21; // [rsp+60h] [rbp-118h]
  int v22; // [rsp+88h] [rbp-F0h]
  char v23; // [rsp+110h] [rbp-68h]
  UINT Version; // [rsp+114h] [rbp-64h]
  D3DDDIFORMAT Format; // [rsp+190h] [rbp+18h]
  UINT SwizzledFormat; // [rsp+198h] [rbp+20h]

  AllocationHint = VidMmGetAllocationHint(a3);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    Format = AllocationHint->v1.Format;
    Value = AllocationHint->v1.Flags.Value;
    Version = AllocationHint->Version;
    v16 = *((_QWORD *)a3 + 6);
    v23 = Value;
    v17 = 0LL;
    if ( v16 )
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
      *(_QWORD *)a3,
      &EventReportAdapterAllocation,
      v7,
      v17,
      v6,
      v7,
      **((_DWORD **)a3 + 46),
      *(_QWORD *)(*(_QWORD *)a3 + 16LL),
      *(_DWORD *)(*(_QWORD *)a3 + 32LL),
      v20,
      *(_DWORD *)(*(_QWORD *)a3 + 40LL),
      *(_DWORD *)(*(_QWORD *)a3 + 44LL),
      v21,
      *(_DWORD *)(*(_QWORD *)a3 + 36LL),
      *(_DWORD *)(*(_QWORD *)a3 + 48LL),
      (char)a3,
      *((_QWORD *)a3 + 1),
      v22,
      Version,
      v23,
      Format,
      SwizzledFormat,
      ByteOffset,
      Width,
      Height,
      Pitch,
      Depth,
      SlicePitch,
      (*((_DWORD *)a3 + 8) & 2) != 0,
      0,
      (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F,
      (*((_DWORD *)a3 + 6) & 4) != 0,
      *(_QWORD *)a3);
  }
  v8 = *((_QWORD *)a3 + 46);
  if ( *(_WORD *)(v8 + 8) )
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      LOBYTE(v19) = *((_BYTE *)a3 + 288);
      LOBYTE(v18) = *(_BYTE *)(v8 + 8);
      McTemplateK0puu_EtwWriteTransfer(v8, &EventReportOfferAllocation, v7, a3, v18, v19);
    }
  }
}
