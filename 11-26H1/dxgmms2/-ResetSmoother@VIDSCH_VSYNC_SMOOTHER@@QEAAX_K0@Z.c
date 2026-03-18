/*
 * XREFs of ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14001C390
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchSetMonitorPowerState @ 0x140042540 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  double v5; // xmm0_8

  if ( (byte_14008A204 & 0x20) != 0 )
    McTemplateK0pp_EtwWriteTransfer((__int64)this, &EventResetSmoother, a3, a2, a3);
  if ( a3 < 0 )
    v5 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
  else
    v5 = (double)(int)a3;
  *((double *)this + 4) = v5;
  LinearFitT<256>::Reset((__int64)this);
}
