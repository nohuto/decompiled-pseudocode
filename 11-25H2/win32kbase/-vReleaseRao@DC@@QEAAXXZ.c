/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C6880 (-vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  __int64 v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rdx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  DC::vReleaseRaoFastOpt(this, p_DeviceContext);
}
