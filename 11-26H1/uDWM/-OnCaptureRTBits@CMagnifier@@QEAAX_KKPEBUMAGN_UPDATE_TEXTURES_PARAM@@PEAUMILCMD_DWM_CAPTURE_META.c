/*
 * XREFs of ?OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@PEAJ@Z @ 0x180066FB4
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180066DD4 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x180066FDC (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTUR.c)
 */

void __fastcall CMagnifier::OnCaptureRTBits(
        CMagnifier *this,
        unsigned __int64 a2,
        unsigned int a3,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a4,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a5,
        int *a6)
{
  *a6 = CMagnifier::OnCaptureRTBitsWorker(this, a2, a3, a4, a5);
}
