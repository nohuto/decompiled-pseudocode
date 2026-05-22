/*
 * XREFs of ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180025FB0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180091810 (-SetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputDeliveryServerP.c)
 */

void __fastcall BamoInputSystemPrincipal::SetInputDeliveryServer(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputDeliveryServerPrincipal *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v4, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetInputDeliveryServer(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
}
