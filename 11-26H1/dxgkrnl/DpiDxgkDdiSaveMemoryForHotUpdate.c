/*
 * XREFs of DpiDxgkDdiSaveMemoryForHotUpdate @ 0x140252178
 * Callers:
 *     ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140251CB0 (-DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiSaveMemoryForHotUpdate(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiSaveMemoryForHotUpdate);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 40) + 1328LL))(*(_QWORD *)(a1 + 48), a2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v4, (__int64)&EventExitDdiSaveMemoryForHotUpdate);
  return v5;
}
