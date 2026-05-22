/*
 * XREFs of ?GetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAA_NXZ @ 0x180189350
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

bool __fastcall BamoSimpleHapticsControllerPrincipal::GetIsIntensitySupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  LOBYTE(v1) = *((_BYTE *)v1 + 72);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v2, v3);
  return (char)v1;
}
