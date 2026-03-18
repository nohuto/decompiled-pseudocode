/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400F1660 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400F1DE0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1401097D4 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2B9C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400F439C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F4498 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F454C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  __int64 v2; // r8
  int v4; // ecx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdx
  VIDMM_RECYCLE_HEAP_MGR **v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]

  v2 = *((int *)this + 16);
  v4 = *((_DWORD *)this + 16);
  *a2 = 0;
  v6 = (unsigned int)(v4 - 3);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v16 = -1;
      v17 = 0LL;
      if ( (qword_14008A010 & 2) != 0 )
      {
        v18 = 1;
        v16 = 8001;
        if ( (byte_14008A202 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v2, 8001);
      }
      else
      {
        v18 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
             (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5));
      if ( v7 < 0 )
        goto LABEL_17;
      v9 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 == 3 )
      {
LABEL_12:
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v9, this);
        VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        goto LABEL_13;
      }
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 6LL, v2, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( (unsigned int)(v10 - 4) > 2 && (unsigned int)(v10 - 9) > 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v9[1], this);
      VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
        this);
      v8 = 5LL;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v18 = 1;
    v16 = 8001;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v2, 8001);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
         (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 5));
  if ( v7 >= 0 )
  {
    v8 = 1LL;
LABEL_6:
    VIDMM_RECYCLE_RANGE::Transition(this, v8);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v16);
    }
    return 0LL;
  }
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v16);
  return (unsigned int)v7;
}
