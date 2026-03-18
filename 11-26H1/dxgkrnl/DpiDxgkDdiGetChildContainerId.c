/*
 * XREFs of DpiDxgkDdiGetChildContainerId @ 0x140255818
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiGetChildContainerId(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax

  v5 = a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiGetChildContainerId);
  v10 = (*(int (__fastcall **)(__int64, _QWORD, __int64))(a1 + 768))(a2, (unsigned int)v5, a4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v9, (__int64)&EventExitDdiGetChildContainerId);
  v11 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v5;
  *(_QWORD *)(v11 + 40) = v10;
  *(_OWORD *)(v11 + 48) = 0LL;
  WdLogGlobalForLineNumber = 649;
  return (unsigned int)v10;
}
