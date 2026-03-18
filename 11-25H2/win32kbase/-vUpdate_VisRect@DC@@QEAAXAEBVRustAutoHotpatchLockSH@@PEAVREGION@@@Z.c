/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C6340
 * Callers:
 *     <none>
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C63A0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, const struct RustAutoHotpatchLockSH *a2, struct REGION *a3)
{
  __int64 v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rdx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v6) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  DC::vUpdate_VisRectFastOpt(this, p_DeviceContext, a2, a3);
}
