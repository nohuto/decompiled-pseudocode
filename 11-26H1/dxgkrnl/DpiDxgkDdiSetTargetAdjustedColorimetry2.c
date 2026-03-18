/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x140018018
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x140017F98 (DpiSetTargetAdjustedColorimetry2.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int128 v9; // xmm1
  int v10; // eax
  int (__fastcall *v11)(__int64, _BYTE *); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  _BYTE v17[56]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+68h] [rbp-18h]

  v6 = a3;
  if ( *(_QWORD *)(a1 + 1312) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiSetTargetAdjustedColorimetry);
    v9 = *(_OWORD *)(a4 + 16);
    v10 = *(_DWORD *)(a4 + 48);
    memset(v17, 0, sizeof(v17));
    *(_DWORD *)&v17[52] = v10;
    v18 = a5;
    v11 = *(int (__fastcall **)(__int64, _BYTE *))(a1 + 1312);
    *(_DWORD *)v17 = v6;
    *(_OWORD *)&v17[4] = *(_OWORD *)a4;
    *(_OWORD *)&v17[36] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v17[20] = v9;
    v14 = v11(a2, v17);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v13, (__int64)&EventExitDdiSetTargetAdjustedColorimetry);
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = v6;
    *(_QWORD *)(v15 + 40) = v14;
    *(_OWORD *)(v15 + 48) = 0LL;
    WdLogGlobalForLineNumber = 961;
  }
  else
  {
    LODWORD(v14) = -1073741637;
  }
  return (unsigned int)v14;
}
