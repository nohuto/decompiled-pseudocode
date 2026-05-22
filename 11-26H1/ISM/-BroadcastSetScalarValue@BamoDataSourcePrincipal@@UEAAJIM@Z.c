/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x180103730
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z @ 0x18010378C (-BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetScalarValue(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v8, this[3]);
  LODWORD(v4) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetScalarValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v4 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v8, v5, v6);
  return (unsigned int)v4;
}
