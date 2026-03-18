/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C91C0 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct BRUSH *a1)
{
  __int64 v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rcx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(p_DeviceContext, a1);
}
