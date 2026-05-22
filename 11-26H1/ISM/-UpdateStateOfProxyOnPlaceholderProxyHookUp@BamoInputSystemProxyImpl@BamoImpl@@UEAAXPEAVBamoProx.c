/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoHapticDeviceManagerProxy@@QEBAIXZ @ 0x180119D28 (-GetItemId@BamoHapticDeviceManagerProxy@@QEBAIXZ.c)
 *     ?UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180129EE8 (-UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012A798 (-UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateDeviceDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012A960 (-UpdateDeviceDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012B120 (-UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateGestureServices@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012BE68 (-UpdateGestureServices@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateHapticDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012C164 (-UpdateHapticDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012C4FC (-UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012CB84 (-UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012CD50 (-UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012D0E4 (-UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012DFDC (-UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012E6E4 (-UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateShellHandwritingHostServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012EC34 (-UpdateShellHandwritingHostServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012FB34 (-UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012FD08 (-UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18013072C (-UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputSystemProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  BamoHapticDeviceManagerProxy *v13; // rcx
  unsigned int ItemId; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateActivationWatcher(this, 0LL, *(unsigned int *)(v2 + 40));
  v5 = *((_QWORD *)a2 + 5);
  if ( v5 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateControllerNavigationManager(this, 0LL, *(unsigned int *)(v5 + 40));
  v6 = *((_QWORD *)a2 + 6);
  if ( v6 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateDeviceDockServer(this, 0LL, *(unsigned int *)(v6 + 40));
  v7 = *((_QWORD *)a2 + 7);
  if ( v7 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateEdgyControllerServer(this, 0LL, *(unsigned int *)(v7 + 40));
  v8 = *((_QWORD *)a2 + 8);
  if ( v8 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateGestureServices(this, 0LL, *(unsigned int *)(v8 + 40));
  v9 = *((_QWORD *)a2 + 9);
  if ( v9 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateHeatGripService(this, 0LL, *(unsigned int *)(v9 + 40));
  v10 = *((_QWORD *)a2 + 10);
  if ( v10 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputDeliveryServer(this, 0LL, *(unsigned int *)(v10 + 40));
  v11 = *((_QWORD *)a2 + 11);
  if ( v11 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputObserverManager(this, 0LL, *(unsigned int *)(v11 + 40));
  v12 = *((_QWORD *)a2 + 12);
  if ( v12 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputSiteManager(this, 0LL, *(unsigned int *)(v12 + 40));
  v13 = (BamoHapticDeviceManagerProxy *)*((_QWORD *)a2 + 13);
  if ( v13 )
  {
    ItemId = BamoHapticDeviceManagerProxy::GetItemId(v13);
    BamoImpl::BamoInputSystemProxyImpl::UpdateHapticDeviceManager(this, 0LL, ItemId);
  }
  v15 = *((_QWORD *)a2 + 14);
  if ( v15 )
    BamoImpl::BamoInputSystemProxyImpl::UpdatePenEventsDispatcher(this, 0LL, *(unsigned int *)(v15 + 40));
  v16 = *((_QWORD *)a2 + 15);
  if ( v16 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateResizeContextualProcessor(this, 0LL, *(unsigned int *)(v16 + 40));
  v17 = *((_QWORD *)a2 + 16);
  if ( v17 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateShellHandwritingHostServer(this, 0LL, *(unsigned int *)(v17 + 40));
  v18 = *((_QWORD *)a2 + 17);
  if ( v18 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateSystemCursorController(this, 0, *(_DWORD *)(v18 + 40));
  v19 = *((_QWORD *)a2 + 18);
  if ( v19 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateTestCommands(this, 0, *(_DWORD *)(v19 + 40));
  v20 = *((_QWORD *)a2 + 19);
  if ( v20 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateUIAHitTest(this, 0, *(_DWORD *)(v20 + 40));
}
