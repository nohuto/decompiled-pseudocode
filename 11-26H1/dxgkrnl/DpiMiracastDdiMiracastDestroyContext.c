/*
 * XREFs of DpiMiracastDdiMiracastDestroyContext @ 0x14024C71C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1400897DC (McTemplateK0pp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall DpiMiracastDdiMiracastDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (_QWORD *)(a1 + 48);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    McTemplateK0pp_EtwWriteTransfer(a1, &EventEnterDxgkDdiMiracastDestroyContext, a3, *v3, a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 3344))(*v3, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    return McTemplateK0pp_EtwWriteTransfer(v7, &EventLeaveDxgkDdiMiracastDestroyContext, v8, *v3, a2);
  return result;
}
