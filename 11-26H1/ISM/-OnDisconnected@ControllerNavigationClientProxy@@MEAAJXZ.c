/*
 * XREFs of ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18017B3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179220 (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 */

__int64 __fastcall ControllerNavigationClientProxy::OnDisconnected(ControllerNavigationClientProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::ClientRemoved(ControllerNavigationManager, this);
  return 0LL;
}
