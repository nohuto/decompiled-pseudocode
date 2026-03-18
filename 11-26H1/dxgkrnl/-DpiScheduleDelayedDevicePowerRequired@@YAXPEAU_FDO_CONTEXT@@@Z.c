/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x140032ECC
 * Callers:
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  WdLogGlobalForLineNumber = 4828;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_DevicePowerRequiredTimer);
  if ( !*((_DWORD *)a1 + 1058) )
    KeSetTimer((PKTIMER)((char *)a1 + 4304), DueTime, (PKDPC)((char *)a1 + 4368));
}
