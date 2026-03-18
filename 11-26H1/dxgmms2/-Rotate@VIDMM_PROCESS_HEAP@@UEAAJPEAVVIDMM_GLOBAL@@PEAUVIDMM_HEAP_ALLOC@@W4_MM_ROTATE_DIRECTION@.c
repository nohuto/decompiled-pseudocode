/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400BBA90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x140050A28 (-SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x140109F50 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        VIDMM_GLOBAL *a2,
        ULONG_PTR a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  VIDMM_GLOBAL *v11; // r13
  NTSTATUS v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  bool v20; // zf
  char *v21; // r15
  SIZE_T v22; // rbx
  HANDLE v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _MDL *v28; // r12
  PVOID Context; // r13
  ULONG_PTR v30; // rsi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID v38; // rdi
  NTSTATUS (__stdcall *v39)(PMDL, PMDL, PVOID); // r13
  char v40; // al
  struct _EPROCESS *v41; // rax
  int v42; // edi
  __int64 CurrentProcess; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-31h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-29h] BYREF
  int v48; // [rsp+68h] [rbp-21h] BYREF
  __int64 v49; // [rsp+70h] [rbp-19h]
  char v50; // [rsp+78h] [rbp-11h]
  int v51; // [rsp+D8h] [rbp+4Fh]
  ULONG_PTR v53; // [rsp+E8h] [rbp+5Fh] BYREF
  enum _MM_ROTATE_DIRECTION v54; // [rsp+F0h] [rbp+67h]

  v54 = a4;
  v53 = a3;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v50 = 1;
    v48 = 8005;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8005);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( PsGetCurrentProcess(v15) != v14 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(v16);
    v18 = v9;
    *(_QWORD *)(v17 + 24) = v10;
    *(_QWORD *)(v17 + 32) = v9;
    WdLogGlobalForLineNumber = 1513;
  }
  else
  {
    v18 = v9;
  }
  v19 = *(_QWORD *)(v10 + 8);
  if ( (*(_DWORD *)v10 & 1) != 0 )
  {
    v20 = (*(_DWORD *)(v10 + 20) & 0x800000) == 0;
    v21 = *(char **)(v10 + 8);
  }
  else
  {
    v21 = (char *)(*(_QWORD *)(v10 + 16) + *(_QWORD *)(v19 + 32));
    v20 = (*(_DWORD *)(v19 + 64) & 1) == 0;
  }
  if ( v20 )
  {
    if ( (_DWORD)v9 )
    {
      v42 = v9 - 1;
      if ( v42 )
      {
        if ( (unsigned int)(v42 - 1) > 1 )
          goto LABEL_63;
        CurrentProcess = PsGetCurrentProcess(v19);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 1LL, CurrentProcess, v10, v18);
        WdLogGlobalForLineNumber = 213;
      }
    }
    v13 = -1073741823;
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v48);
    return (unsigned int)v13;
  }
  v51 = 0;
  if ( (unsigned int)v9 > 1 )
  {
    v22 = *(_QWORD *)(v10 + 64);
    goto LABEL_27;
  }
  v22 = Size;
  if ( (*(_DWORD *)v10 & 1) != 0
    || *(_QWORD *)(v19 + 56)
    || *(_QWORD *)(v10 + 32)
    || (v23 = MmSecureVirtualMemory(v21, Size, 4u), (*(_QWORD *)(v10 + 32) = v23) != 0LL) )
  {
    if ( *((_DWORD *)v11 + 10070) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5001))(*((_QWORD *)v11 + 5009));
    v51 = 1;
LABEL_27:
    v28 = NewMdl;
    if ( (_DWORD)v9 == 2 )
    {
      Context = a8;
      v30 = v22;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v30;
        v13 = MmRotatePhysicalView(v21, &NumberOfBytes, v28, MmToRegularMemory, CopyFunction, Context);
        if ( v13 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1627;
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventPerformanceWarning, v33, 12);
        v21 += NumberOfBytes;
        v30 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v11 = a2;
      VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
      LODWORD(v9) = v54;
      v10 = v53;
    }
    else
    {
      if ( (_DWORD)v9 != 3 )
      {
        v53 = v22;
        v13 = MmRotatePhysicalView(v21, &v53, NewMdl, (MM_ROTATE_DIRECTION)v9, a7, a8);
        if ( v13 >= 0 )
          goto LABEL_46;
        if ( (a9 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v10 + 80), 0);
          *(_QWORD *)(v10 + 80) = 0LL;
        }
        goto LABEL_53;
      }
      Interval.QuadPart = -10000LL;
      LODWORD(v53) = a9 & 1;
      NumberOfBytes = v22;
      while ( 1 )
      {
        v35 = MmRotatePhysicalView(v21, &NumberOfBytes, v28, MmToRegularMemoryNoCopy, a7, a8);
        v13 = v35;
        if ( !(_DWORD)v53 || v35 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1714;
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventPerformanceWarning, v37, 12);
        v38 = a8;
        v39 = a7;
        while ( MmRotatePhysicalView(v21, &NumberOfBytes, *(PMDL *)(v10 + 80), MmToFrameBufferNoCopy, v39, v38) < 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        KeDelayExecutionThread(0, 0, &Interval);
        LODWORD(v9) = v54;
        v11 = a2;
      }
      VIDMM_GLOBAL::SetMemoryRefreshIdle(v11);
    }
    if ( v13 >= 0 )
    {
LABEL_46:
      if ( (unsigned int)v9 <= 1 )
      {
        *(_QWORD *)(v10 + 64) = v22;
        v40 = 1;
        *(_QWORD *)(v10 + 80) = v28;
      }
      else
      {
        if ( (a9 & 2) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v10 + 80), 0);
          *(_QWORD *)(v10 + 80) = 0LL;
        }
        v40 = 0;
      }
      *(_BYTE *)(v10 + 72) = v40;
LABEL_57:
      v41 = (struct _EPROCESS *)PsGetCurrentProcess(v34);
      VIDMM_GLOBAL::RecordRotation(v41, v21, v22, v28, (enum _MM_ROTATE_DIRECTION)v9, v13);
      goto LABEL_63;
    }
LABEL_53:
    if ( v51 )
      VIDMM_GLOBAL::SetMemoryRefreshIdle(v11);
    goto LABEL_57;
  }
  _InterlockedIncrement(&dword_14008A7E8);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1550;
  DxgkLogInternalTriageEvent(v24, 262145LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v48);
  return 3221225495LL;
}
