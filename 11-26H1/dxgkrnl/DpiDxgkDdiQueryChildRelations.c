/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x140196144
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1404290E4 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     McTemplateK0hbr0pqx_EtwWriteTransfer @ 0x1400947B4 (McTemplateK0hbr0pqx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0hbr0pqx_EtwWriteTransfer(a1, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0hbr0pqx_EtwWriteTransfer(
      (unsigned __int64)(v5 - ((v5 * (unsigned __int128)0x2492492492492493uLL) >> 64)) >> 1,
      &EventExitDdiQueryChildRelations,
      v11,
      v5,
      a3,
      a2,
      v10,
      v5 / 0x1C);
  v12 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 32) = a3;
  *(_QWORD *)(v12 + 40) = v10;
  *(_OWORD *)(v12 + 48) = 0LL;
  WdLogGlobalForLineNumber = 248;
  return (unsigned int)v10;
}
