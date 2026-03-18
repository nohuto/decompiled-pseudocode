/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1403B7270
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     LoadEtwStackLocation @ 0x1400469DC (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x140046B90 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  bool v2; // r15
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  NTSTATUS v9; // ebx
  __int64 (__fastcall *v10)(__int64, IRP *); // rax
  __int64 v11; // rcx
  int v13; // [rsp+40h] [rbp-89h] BYREF
  __int64 v14; // [rsp+48h] [rbp-81h]
  char v15; // [rsp+50h] [rbp-79h]
  _BYTE v16[72]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-29h]
  __int128 v18; // [rsp+B0h] [rbp-19h]
  __int128 v19; // [rsp+C0h] [rbp-9h]
  __int128 v20; // [rsp+D0h] [rbp+7h]
  __int64 v21; // [rsp+E0h] [rbp+17h]

  v2 = 0;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 1003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 1003);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v16, (__int64)a2);
    v17 = *(_OWORD *)EtwStackLocation;
    v18 = *((_OWORD *)EtwStackLocation + 1);
    v19 = *((_OWORD *)EtwStackLocation + 2);
    v20 = *((_OWORD *)EtwStackLocation + 3);
    v21 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchInternalIoctl, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2563;
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 112);
    v2 = 1;
    if ( v10 )
    {
      v9 = v10(a1, a2);
      v2 = v9 != -1073741738;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v9 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_12;
    }
    v9 = -1073741637;
  }
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
LABEL_11:
  if ( v2 )
LABEL_12:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchInternalIoctl);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return (unsigned int)v9;
}
