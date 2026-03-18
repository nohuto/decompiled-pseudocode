/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x14017929C
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 */

void __fastcall FreeDCAttributes(struct DC *a1)
{
  __int64 v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rcx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  FreeDCAttributesFastOpt(p_DeviceContext, a1);
}
