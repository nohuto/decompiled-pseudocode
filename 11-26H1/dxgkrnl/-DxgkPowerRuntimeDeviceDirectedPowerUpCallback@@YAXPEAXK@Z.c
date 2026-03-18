/*
 * XREFs of ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x140073CE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x14006F354 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 */

void __fastcall DxgkPowerRuntimeDeviceDirectedPowerUpCallback(DXGADAPTER *this)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_PowerRuntimeDeviceDirectedPowerCallback);
  DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(this, 1);
}
