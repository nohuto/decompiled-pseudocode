/*
 * XREFs of ?LockHeapAllocation@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F7AE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F7330 (-VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVI.c)
 */

__int64 __fastcall VIDMM_SYSTEM_HEAP::LockHeapAllocation(
        VIDMM_SYSTEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 Length,
        LOCK_OPERATION Operation,
        struct VIDMM_GLOBAL *a7,
        bool a8)
{
  __int64 v10; // rcx
  PMDL Mdl; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-20h]
  char v21; // [rsp+60h] [rbp-18h]

  Mdl = IoAllocateMdl((PVOID)(a4 + *((_QWORD *)a2 + 1)), Length, 0, 0, 0LL);
  if ( Mdl )
  {
    v19 = -1;
    v20 = 0LL;
    if ( (qword_14008A010 & 2) != 0 )
    {
      v21 = 1;
      v19 = 8000;
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerEnter, v12, 8000);
    }
    else
    {
      v21 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    MmProbeAndLockPages(Mdl, 0, Operation);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v19);
    if ( (int)VidMmValidateLockedPages(
                (struct VIDMM_GLOBAL *)((char *)a7 + 45256),
                *(union _LARGE_INTEGER *)(*((_QWORD *)a7 + 3) + 2440LL),
                Mdl,
                v15,
                a3) >= 0 )
    {
      if ( a8 )
        *((_QWORD *)a2 + 5) = Mdl;
      else
        *((_QWORD *)a2 + 4) = Mdl;
      return 0LL;
    }
    v18 = -1071775487;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 187;
    DxgkLogInternalTriageEvent(v17, 262145LL);
    v18 = -1073741801;
  }
  if ( Mdl )
  {
    if ( (Mdl->MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  return v18;
}
