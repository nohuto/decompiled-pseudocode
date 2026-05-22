/*
 * XREFs of ?RemoteReplace@BamoList_SimpleHapticsControllerPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x180190EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RemoteReplace@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x180190F20 (-RemoteReplace@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Stub::RemoteReplace(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Stub *this,
        unsigned int a2,
        struct BamoSimpleHapticsControllerPrincipal *a3)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Stub *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_StubImpl::RemoteReplace(
                  (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Stub *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
