/*
 * XREFs of DpiDxgkDdiDisplayMuxUpdateState @ 0x140094380
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxUpdateState(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = (unsigned __int8)a3;
  v5 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventDdiDisplayMuxUpdateState);
  LOBYTE(a3) = v4;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 6000))(*(_QWORD *)(a1 + 48), (unsigned int)v5, a3);
  result = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(result + 24) = a1;
  *(_QWORD *)(result + 32) = v5;
  *(_QWORD *)(result + 40) = v4;
  *(_OWORD *)(result + 48) = 0LL;
  WdLogGlobalForLineNumber = 1133;
  return result;
}
