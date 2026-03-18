/*
 * XREFs of DpiDxgkDdiStopDevice @ 0x140255B18
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiStopDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDdiStopDevice);
  v6 = (*(int (__fastcall **)(__int64))(a1 + 160))(a2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDdiStopDevice);
  v7 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  *(_QWORD *)(v7 + 40) = v6;
  *(_OWORD *)(v7 + 48) = 0LL;
  WdLogGlobalForLineNumber = 132;
  return (unsigned int)v6;
}
