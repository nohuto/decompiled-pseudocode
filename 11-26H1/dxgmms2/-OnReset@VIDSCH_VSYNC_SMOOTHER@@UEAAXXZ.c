/*
 * XREFs of ?OnReset@VIDSCH_VSYNC_SMOOTHER@@UEAAXXZ @ 0x14003D330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::OnReset(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  if ( (byte_14008A204 & 0x20) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventVSyncSmoothenedReset, a3, 0);
}
