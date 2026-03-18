/*
 * XREFs of DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData @ 0x140094014
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqqjq_EtwWriteTransfer @ 0x14009499C (McTemplateK0pqqjq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 result; // rax

  v6 = a3;
  v7 = a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 5952))(*(_QWORD *)(a1 + 48));
  v12 = v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqjq_EtwWriteTransfer(
      v10,
      (unsigned int)&EventDdiDisplayMuxPreSwitchAwayGetPrivateData,
      v11,
      *(_QWORD *)(a1 + 48),
      v7,
      v6,
      a5,
      v8);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v13[3] = a1;
  v13[4] = v7;
  v13[5] = v6;
  v13[6] = v12;
  v13[7] = 0LL;
  result = (unsigned int)v12;
  WdLogGlobalForLineNumber = 1183;
  return result;
}
