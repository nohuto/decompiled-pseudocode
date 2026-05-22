/*
 * XREFs of ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180079820
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAX_K@Z @ 0x18008EA44 (-SetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAX_K@Z.c)
 */

void __fastcall BamoActivatableEntityPrincipal::SetWindowId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoActivatableEntityPrincipalImpl::SetWindowId(
    (BamoImpl::BamoActivatableEntityPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
