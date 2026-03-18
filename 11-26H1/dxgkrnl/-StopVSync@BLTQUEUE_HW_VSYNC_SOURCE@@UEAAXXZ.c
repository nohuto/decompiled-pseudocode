/*
 * XREFs of ?StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x1402845A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x140284044 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE_HW_VSYNC_SOURCE::StopVSync(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  KeCancelTimer((PKTIMER)((char *)this + 16));
  KeFlushQueuedDpcs();
  DXGDODPRESENT::StopHwVSync(*((struct _KTHREAD ***)this + 1));
}
