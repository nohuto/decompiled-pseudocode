/*
 * XREFs of ?GetAutoForwardId@BamoActivationControllerProxy@@UEAA_KXZ @ 0x18002A370
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

unsigned __int64 __fastcall BamoActivationControllerProxy::GetAutoForwardId(BamoActivationControllerProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v4,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v2 = *((_QWORD *)this + 8);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
  return v2;
}
