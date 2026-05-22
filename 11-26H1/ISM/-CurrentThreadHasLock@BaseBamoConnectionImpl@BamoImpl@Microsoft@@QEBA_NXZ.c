/*
 * XREFs of ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180037618
 * Callers:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ?GetInputSiteId@BamoInputSiteElementProxy@@UEAA_KXZ @ 0x180035360 (-GetInputSiteId@BamoInputSiteElementProxy@@UEAA_KXZ.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1800353D0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180036980 (-OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows.c)
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180036A40 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 *     ?GetComponentViewId@BamoComponentSiteInputObjectProxy@@UEAAIXZ @ 0x180036D90 (-GetComponentViewId@BamoComponentSiteInputObjectProxy@@UEAAIXZ.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180036E00 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ @ 0x180037A30 (-GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ.c)
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180037AA0 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  return *((_DWORD *)this + 46) == GetCurrentThreadId();
}
