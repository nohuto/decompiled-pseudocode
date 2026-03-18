/*
 * XREFs of ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x140251848
 * Callers:
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x140251344 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 *     ?DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140251C70 (-DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiRestoreMemoryForHotUpdate(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *a2)
{
  unsigned int v4; // edi

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDdiRestoreMemoryForHotUpdate);
  v4 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *))(*((_QWORD *)a1 + 5)
                                                                                            + 1336LL))(
         *((_QWORD *)a1 + 6),
         a2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDdiRestoreMemoryForHotUpdate);
  return v4;
}
