/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x180091BA0
 * Callers:
 *     ??0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180026048 (--0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z @ 0x180091BEC (-SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoSystemCursorControllerPrincipal::SetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        float a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetScaleOverride(
    (BamoImpl::BamoSystemCursorControllerPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v3, v4);
}
