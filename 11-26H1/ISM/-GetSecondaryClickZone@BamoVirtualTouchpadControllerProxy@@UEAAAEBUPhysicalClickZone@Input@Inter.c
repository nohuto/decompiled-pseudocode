/*
 * XREFs of ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801380E0
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180139954 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct Windows::UI::Internal::Input::PhysicalClickZone *__fastcall BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(
        BamoVirtualTouchpadControllerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoVirtualTouchpadControllerProxy *)((char *)this + 96);
}
