/*
 * XREFs of ?SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x1800900A0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x1800900E8 (-SetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemCursorContr.c)
 */

void __fastcall BamoInputSystemPrincipal::SetSystemCursorController(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoSystemCursorControllerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetSystemCursorController(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
