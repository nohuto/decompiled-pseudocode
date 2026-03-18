/*
 * XREFs of ?ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ @ 0x14008EBA4
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall TARGET_POWER_REFERENCE::ReleaseReference(TARGET_POWER_REFERENCE *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = *((_DWORD *)this + 3);
    v3 = *((_QWORD *)this + 2);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_ReportPowerComponentState);
    v4 = *(_QWORD *)(v3 + 3272);
    if ( v4 )
      PoFxIdleComponent(v4, v2, 0LL);
    *((_BYTE *)this + 32) = 0;
  }
}
