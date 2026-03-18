/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x140255A0C
 * Callers:
 *     DpiSetTargetAdjustedColorimetry @ 0x140193BEC (DpiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int (__fastcall *v12)(__int64, _QWORD, _OWORD *); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _OWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+60h] [rbp-18h]

  v5 = a3;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiSetTargetAdjustedColorimetry);
    v9 = *(_DWORD *)(a4 + 48);
    v10 = *(_OWORD *)(a4 + 16);
    v17[0] = *(_OWORD *)a4;
    v11 = *(_OWORD *)(a4 + 32);
    v18 = v9;
    v12 = *(int (__fastcall **)(__int64, _QWORD, _OWORD *))(a1 + 1120);
    v17[2] = v11;
    v17[1] = v10;
    v8 = v12(a2, (unsigned int)v5, v17);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v14, (__int64)&EventExitDdiSetTargetAdjustedColorimetry);
    v15 = WdLogNewEntry5_WdTrace(v14, v13);
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = v5;
    *(_QWORD *)(v15 + 40) = v8;
    *(_OWORD *)(v15 + 48) = 0LL;
    WdLogGlobalForLineNumber = 915;
  }
  else
  {
    LODWORD(v8) = -1073741637;
  }
  return (unsigned int)v8;
}
