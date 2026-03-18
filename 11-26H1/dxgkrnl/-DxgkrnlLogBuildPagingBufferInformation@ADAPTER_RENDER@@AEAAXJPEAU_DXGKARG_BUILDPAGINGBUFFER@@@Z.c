/*
 * XREFs of ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x14030A6A0
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x14030A230 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3)
{
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // eax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax

  Operation = a3->Operation;
  v5 = (int)a2;
  if ( Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v6[3] = v5;
    v6[4] = a3->Fill.FillSize;
    v6[5] = a3->UpdatePageTable.hProcess;
    v6[6] = a3->Transfer.Destination.SegmentId;
    this = (ADAPTER_RENDER *)a3->UpdatePageTable.NumPageTableEntries;
    v6[7] = this;
    WdLogGlobalForLineNumber = 2301;
LABEL_3:
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v7);
    v8[3] = v5;
    v8[4] = a3->Transfer.hAllocation;
    v8[5] = a3->Transfer.TransferOffset;
    this = (ADAPTER_RENDER *)a3->Transfer.TransferSize;
    v8[6] = this;
    WdLogGlobalForLineNumber = 2308;
LABEL_4:
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v7);
    v9[3] = v5;
    v9[4] = a3->Transfer.hAllocation;
    v9[5] = a3->Transfer.Source.SegmentId & 1;
    v9[6] = a3->Transfer.TransferOffset;
    v9[7] = a3->Transfer.TransferSize;
    WdLogGlobalForLineNumber = 2316;
  }
  else if ( Operation == DXGK_OPERATION_FLUSH_TLB )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v10[3] = v5;
    v10[4] = a3->Transfer.TransferSize;
    v10[5] = a3->ReadPhysical.SegmentId;
    v10[6] = a3->Fill.FillSize;
    WdLogGlobalForLineNumber = 2292;
  }
  else
  {
    v7 = 0x140000000uLL;
    switch ( Operation )
    {
      case DXGK_OPERATION_TRANSFER:
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v18[3] = v5;
        v18[4] = a3->Transfer.hAllocation;
        v18[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v18[6] = a3->Transfer.Destination.SegmentId;
        v18[7] = a3->Transfer.Destination.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2214;
        break;
      case DXGK_OPERATION_FILL:
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v17[3] = v5;
        v17[4] = a3->Transfer.hAllocation;
        v17[5] = a3->Transfer.Source.SegmentId;
        v17[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2222;
        break;
      case DXGK_OPERATION_DISCARD_CONTENT:
        v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v12[3] = v5;
        v12[4] = a3->Transfer.hAllocation;
        v12[5] = a3->DiscardContent.SegmentId;
        v12[6] = a3->Transfer.TransferSize;
        WdLogGlobalForLineNumber = 2230;
        break;
      case DXGK_OPERATION_READ_PHYSICAL:
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v19[3] = v5;
        v19[4] = a3->ReadPhysical.SegmentId;
        v19[5] = a3->Fill.FillSize;
        WdLogGlobalForLineNumber = 2237;
        break;
      case DXGK_OPERATION_WRITE_PHYSICAL:
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v20[3] = v5;
        v20[4] = a3->ReadPhysical.SegmentId;
        v20[5] = a3->Fill.FillSize;
        WdLogGlobalForLineNumber = 2244;
        break;
      case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
        v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v11[3] = v5;
        v11[4] = a3->Transfer.hAllocation;
        v11[5] = a3->Fill.FillSize;
        v11[6] = a3->Fill.FillPattern;
        WdLogGlobalForLineNumber = 2252;
        break;
      case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v15[3] = v5;
        v15[4] = a3->Transfer.hAllocation;
        v15[5] = a3->Fill.FillSize;
        v15[6] = a3->Fill.FillPattern;
        WdLogGlobalForLineNumber = 2260;
        break;
      case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v21[3] = v5;
        v21[4] = a3->Transfer.hAllocation;
        v21[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v21[6] = a3->Transfer.Destination.SegmentId;
        v21[7] = a3->Transfer.Destination.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2269;
        break;
      case DXGK_OPERATION_VIRTUAL_TRANSFER:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v14[3] = v5;
        v14[4] = a3->Transfer.hAllocation;
        v14[5] = a3->MapApertureSegment.OffsetInPages;
        v14[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2277;
        break;
      case DXGK_OPERATION_VIRTUAL_FILL:
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        v13[3] = v5;
        v13[4] = a3->Transfer.hAllocation;
        v13[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2284;
        break;
      case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
        goto LABEL_3;
      case DXGK_OPERATION_NOTIFY_RESIDENCY:
        goto LABEL_4;
      default:
        v16 = WdLogNewEntry5_WdTrace(this, 0x140000000uLL);
        *(_QWORD *)(v16 + 24) = v5;
        *(_QWORD *)(v16 + 32) = a3->Operation;
        WdLogGlobalForLineNumber = 2322;
        break;
    }
  }
}
