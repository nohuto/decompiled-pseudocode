/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x140012DB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_PowerRuntimeComponentActiveCallback);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 1u);
}
