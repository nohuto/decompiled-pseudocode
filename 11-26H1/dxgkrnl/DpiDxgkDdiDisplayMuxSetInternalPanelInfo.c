/*
 * XREFs of DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14009421C
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall DpiDxgkDdiDisplayMuxSetInternalPanelInfo(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // rax
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  result = *(_QWORD *)(a1 + 6016);
  v5 = a2;
  if ( result )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))result)(*(_QWORD *)(a1 + 48), a2);
    v11 = v7;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v15 = v7;
        v14 = *a3;
        v13 = v5;
        McTemplateK0pqtq_EtwWriteTransfer(
          *a3,
          &EventDdiDisplayMuxSetInternalPanelInfo,
          v10,
          *(_QWORD *)(a1 + 48),
          v13,
          v14,
          v15);
      }
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v12[3] = a1;
    v12[4] = v5;
    v12[5] = a3;
    v12[6] = v11;
    v12[7] = 0LL;
    result = (unsigned int)v11;
    WdLogGlobalForLineNumber = 1318;
  }
  return result;
}
