/*
 * XREFs of ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x180025DE0
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180025EDC (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 * Callees:
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x180025E28 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoMPCConstantManag.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoMPCManagerPrincipal::SetMPCConstantManagerClient(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoMPCConstantManagerClientPrincipal *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v4, this[3]);
  BamoImpl::BamoMPCManagerPrincipalImpl::SetMPCConstantManagerClient(
    (BamoImpl::BamoMPCManagerPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
}
