/*
 * XREFs of DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x140255BE0
 * Callers:
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 * Callees:
 *     McTemplateK0pqqqqqq_EtwWriteTransfer @ 0x140094A44 (McTemplateK0pqqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v5 = a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqqqqq_EtwWriteTransfer(
      a1,
      &EventEnterDdiStopDeviceAndReleasePostDisplayOwnership,
      a3,
      a2,
      a3,
      0,
      0,
      0,
      0,
      0);
  v10 = (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(a1 + 736))(a2, v5, a4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v19) = v10;
    LODWORD(v18) = a4[3];
    LODWORD(v17) = a4[2];
    LODWORD(v16) = a4[1];
    LODWORD(v15) = *a4;
    LODWORD(v14) = a4[6];
    McTemplateK0pqqqqqq_EtwWriteTransfer(
      (unsigned int)v16,
      &EventExitDdiStopDeviceAndReleasePostDisplayOwnership,
      v11,
      a2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v12[3] = a1;
  v12[4] = a4[6];
  v12[5] = *a4;
  v12[6] = a4[1];
  v12[7] = v10;
  result = (unsigned int)v10;
  WdLogGlobalForLineNumber = 570;
  return result;
}
