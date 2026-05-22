/*
 * XREFs of ?BroadcastRemoteRemove@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180102E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastRemoteRemove@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x180102EDC (-BroadcastRemoteRemove@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::BroadcastRemoteRemove(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  LODWORD(v3) = Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl::BroadcastRemoteRemove(
                  (Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
