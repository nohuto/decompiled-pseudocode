/*
 * XREFs of ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800689C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800689E8 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180068A98 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnDisconnected(ActivationControllerBamoProxy *this)
{
  ForegroundManager *v2; // rcx

  ISMStatics::GetForegroundManager();
  ForegroundManager::UnregisterActivationController(v2, this);
  return 0LL;
}
