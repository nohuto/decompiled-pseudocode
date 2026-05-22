/*
 * XREFs of ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18017B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179320 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 */

__int64 __fastcall ControllerNavigationClientProxy::OnEnabledChanged(ControllerNavigationClientProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  *((_BYTE *)this + 88) = 0;
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::ClientStateChanged(ControllerNavigationManager, this);
  return 0LL;
}
