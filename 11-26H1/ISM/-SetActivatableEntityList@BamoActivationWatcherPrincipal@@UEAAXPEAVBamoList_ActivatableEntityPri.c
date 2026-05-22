/*
 * XREFs of ?SetActivatableEntityList@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AF9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AF9F8 (-SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_Activat.c)
 */

void __fastcall BamoActivationWatcherPrincipal::SetActivatableEntityList(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoActivationWatcherPrincipalImpl::SetActivatableEntityList(
    (BamoImpl::BamoActivationWatcherPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
