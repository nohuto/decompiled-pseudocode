/*
 * XREFs of ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x14008FE08
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x1401914E8 (-DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z.c)
 */

int __fastcall TARGET_POWER_REFERENCE::TakePowerReference(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // eax
  int result; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rsi

  v3 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = v3;
  result = DmmGetVidPnTargetPowerComponentIndex(a2, v3, (unsigned int *)(a1 + 12));
  if ( result >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    if ( v7 != -1 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&Dxgk_ReportPowerComponentState);
      }
      result = PoFxActivateComponent(*(_QWORD *)(v8 + 3272), v7, 0LL);
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return result;
}
