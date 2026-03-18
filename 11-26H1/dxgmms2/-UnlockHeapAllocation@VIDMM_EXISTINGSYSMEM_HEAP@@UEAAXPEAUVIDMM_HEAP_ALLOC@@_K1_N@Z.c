/*
 * XREFs of ?UnlockHeapAllocation@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x14011C3D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_EXISTINGSYSMEM_HEAP::UnlockHeapAllocation(
        VIDMM_EXISTINGSYSMEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  struct _MDL *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]

  if ( a5 )
  {
    v5 = (struct _MDL *)*((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  else
  {
    v5 = (struct _MDL *)*((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  v8 = -1;
  v9 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v10 = 1;
    v8 = 8001;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8001);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmUnlockPages(v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v8);
  IoFreeMdl(v5);
}
