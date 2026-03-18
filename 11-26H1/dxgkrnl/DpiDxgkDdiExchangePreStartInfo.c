/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x140192874
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rax

  if ( *(_QWORD *)(a1 + 1144) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(*a3, (__int64)&EventEnterDdiExchangePreStartInfo);
    v8 = (*(int (__fastcall **)(__int64, unsigned int *))(a1 + 1144))(a2, a3);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v7, (__int64)&EventExitDdiExchangePreStartInfo);
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *a3;
    v9[5] = a3[1];
    v9[6] = v8;
    v9[7] = 0LL;
    WdLogGlobalForLineNumber = 728;
  }
  else
  {
    LODWORD(v8) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v8;
}
