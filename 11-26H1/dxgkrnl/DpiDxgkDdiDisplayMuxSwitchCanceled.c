/*
 * XREFs of DpiDxgkDdiDisplayMuxSwitchCanceled @ 0x1400942D0
 * Callers:
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxSwitchCanceled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  v4 = (unsigned __int8)a3;
  v5 = (unsigned int)a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 5968))(*(_QWORD *)(a1 + 48), a2, a3);
  v10 = v6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v15 = v6;
    v14 = v4;
    v13 = v5;
    McTemplateK0pqtq_EtwWriteTransfer(v8, &EventDdiDisplayMuxSwitchCanceled, v9, *(_QWORD *)(a1 + 48), v13, v14, v15);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v11[4] = v5;
  v11[5] = v4;
  v11[6] = v10;
  v11[3] = a1;
  v11[7] = 0LL;
  result = (unsigned int)v10;
  WdLogGlobalForLineNumber = 1227;
  return result;
}
