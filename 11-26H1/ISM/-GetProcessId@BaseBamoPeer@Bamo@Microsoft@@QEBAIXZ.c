/*
 * XREFs of ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC
 * Callers:
 *     ?OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800296A0 (-OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18002D430 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x18002E364 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x18002E940 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 *     ?ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x18002EC80 (-ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDr.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x18002F510 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180073418 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x18007CB64 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180092A70 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F8590 (-CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCurs.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F88E0 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800F8CE0 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x180132DE8 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     ?RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180146130 (-RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDra.c)
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180146470 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x18014AEC0 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014F14C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180150BFC (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180155244 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180157C28 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180158B80 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C1C4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x18015C20C (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C2A4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179220 (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179320 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18017997C (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179F80 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180198E14 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoPeer::GetProcessId(Microsoft::Bamo::BaseBamoPeer *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)this + 8LL))(this)
                         + 32);
}
