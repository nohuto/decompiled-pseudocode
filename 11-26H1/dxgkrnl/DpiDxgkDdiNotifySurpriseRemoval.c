/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1402558EC
 * Callers:
 *     DpiFdoHandleSurpriseRemoval @ 0x140243240 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rbp
  __int64 v8; // rbx
  int (__fastcall **v9)(__int64, _QWORD); // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = *(_BYTE *)(a3 + 4040);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 8) != 0 || (v4 & 0x10) != 0 )
  {
    v9 = (int (__fastcall **)(__int64, _QWORD))(a1 + 792);
    if ( *(_DWORD *)(a1 + 136) >= 0x300Du && *v9 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiNotifySurpriseRemoval);
      v8 = (*v9)(a2, (unsigned int)v6);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v11, (__int64)&EventExitDdiNotifySurpriseRemoval);
      v12 = WdLogNewEntry5_WdTrace(v11, v10);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = v6;
      *(_QWORD *)(v12 + 40) = v8;
      *(_OWORD *)(v12 + 48) = 0LL;
      WdLogGlobalForLineNumber = 686;
    }
    else if ( (v4 & 0x10) != 0 )
    {
      LODWORD(v8) = *v9 != 0LL ? 0xC00000BB : 0;
    }
  }
  return (unsigned int)v8;
}
