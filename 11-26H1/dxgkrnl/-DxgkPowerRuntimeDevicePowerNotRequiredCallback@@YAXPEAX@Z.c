/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x140032350
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(_QWORD *a1)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer((__int64)a1, (__int64)&Dxgk_PowerRuntimeDevicePowerRequiredCallback);
  if ( !*((_BYTE *)a1 + 204) )
    DpiRequestDevicePowerState(a1[27], 4LL);
  PoFxCompleteDevicePowerNotRequired(a1[409]);
}
