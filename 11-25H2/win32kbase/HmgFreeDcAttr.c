/*
 * XREFs of HmgFreeDcAttr @ 0x1400C0A8C
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C82DC (HmgFreeDcAttrFastOpt.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 v2; // rcx
  PVOID *p_DeviceContext; // rcx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(PVOID **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  return HmgFreeDcAttrFastOpt(p_DeviceContext, a1);
}
