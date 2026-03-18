/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x140109670
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1401097D4 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  char v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  char v24; // [rsp+70h] [rbp-10h]

  v21 = 0;
  v20 = a1 + 1328;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry0(1LL);
    HIDWORD(v19) = 0;
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(v11, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v22 = -1;
  v23 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v24 = 1;
    v22 = 8005;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerEnter, v13, 8005);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  LODWORD(v19) = a9;
  v15 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, v14, a4, a5, a6, a7, a8, v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v20);
  return v15;
}
