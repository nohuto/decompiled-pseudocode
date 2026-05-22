/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18013A070
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180139A64 (-UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x180139B90 (-UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClic.c)
 *     ?UpdateSize@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x180139E00 (-UpdateSize@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUVirtualTouchpadSize@Inpu.c)
 *     ?UpdateSizeValid@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180139F3C (-UpdateSizeValid@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTypingDefensesEnabled@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18013A0E4 (-UpdateTypingDefensesEnabled@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateIsActive(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSizeValid(this, 0LL, v5);
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSize(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateTypingDefensesEnabled(this, 0, *((_BYTE *)a2 + 64));
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdatePrimaryClickZone(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 68));
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSecondaryClickZone(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 88));
}
