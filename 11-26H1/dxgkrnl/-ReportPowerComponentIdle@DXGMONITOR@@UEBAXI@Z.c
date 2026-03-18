/*
 * XREFs of ?ReportPowerComponentIdle@DXGMONITOR@@UEBAXI@Z @ 0x140276210
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGMONITOR::ReportPowerComponentIdle(DXGMONITOR *this, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 19) + 24LL);
  v4 = *(_QWORD *)(v3 + 16);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v3, (__int64)&Dxgk_ReportPowerComponentState);
  v5 = *(_QWORD *)(v4 + 3272);
  if ( v5 )
    PoFxIdleComponent(v5, a2, 0LL);
}
