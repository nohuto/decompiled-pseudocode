/*
 * XREFs of DpiDxgkDdiDisplayMuxPreSwitchAway @ 0x140093F64
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPreSwitchAway(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 5944))(*(_QWORD *)(a1 + 48));
  v10 = v6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v16 = v6;
    v15 = *a3;
    v14 = v5;
    McTemplateK0pqtq_EtwWriteTransfer(*a3, &EventDdiDisplayMuxPreSwitchAway, v9, *(_QWORD *)(a1 + 48), v14, v15, v16);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v11[4] = v5;
  v11[3] = a1;
  v12 = *a3;
  v11[6] = v10;
  v11[5] = v12;
  v11[7] = 0LL;
  result = (unsigned int)v10;
  WdLogGlobalForLineNumber = 1155;
  return result;
}
