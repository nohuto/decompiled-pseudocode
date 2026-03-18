/*
 * XREFs of DpiDxgkDdiDisplayMuxPostSwitchAway @ 0x140093D5C
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPostSwitchAway(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  v3 = a2;
  v6 = (*(int (__fastcall **)(_QWORD))(a1 + 5976))(*(_QWORD *)(a1 + 48));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v5, (__int64)&EventDdiDisplayMuxPostSwitchAway);
  v7 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v3;
  *(_QWORD *)(v7 + 40) = v6;
  *(_OWORD *)(v7 + 48) = 0LL;
  WdLogGlobalForLineNumber = 1248;
  return (unsigned int)v6;
}
