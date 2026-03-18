/*
 * XREFs of GreSetDCOwnerEx @ 0x14008A010
 * Callers:
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x14013734C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C90C0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 */

int __fastcall GreSetDCOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rcx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v8) + 88);
  else
    p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  return GreSetDCOwnerExFastOpt(p_DeviceContext, a1, a2, a3, a4);
}
