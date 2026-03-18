/*
 * XREFs of ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400
 * Callers:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     DrvGetHDEV @ 0x14004D9C0 (DrvGetHDEV.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140085148 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3DB0 (-IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PDEV::IncrementClientReferenceCount(PDEV *this)
{
  __int64 v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rdx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  PDEV::IncrementClientReferenceCountFastOpt(this, p_DeviceContext);
}
