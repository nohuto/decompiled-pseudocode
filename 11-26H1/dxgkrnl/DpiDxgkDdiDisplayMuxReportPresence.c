/*
 * XREFs of DpiDxgkDdiDisplayMuxReportPresence @ 0x140094184
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall DpiDxgkDdiDisplayMuxReportPresence(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *result; // rax

  v3 = (unsigned __int8)a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventDdiDisplayMuxReportPresence);
  LOBYTE(a2) = v3;
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 6008))(*(_QWORD *)(a1 + 48), a2);
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  result[3] = a1;
  result[4] = v3;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  WdLogGlobalForLineNumber = 1041;
  return result;
}
