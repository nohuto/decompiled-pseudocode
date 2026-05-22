/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationOverrideProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x18017AA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BoundsCrossed@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x18017AA60 (-BoundsCrossed@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoControllerNavigationOverrideProxy::BoundsCrossed(
        BamoControllerNavigationOverrideProxy *this,
        const struct tagPOINT *a2)
{
  BamoControllerNavigationOverrideProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoControllerNavigationOverrideProxyImpl::BoundsCrossed(
                  (BamoControllerNavigationOverrideProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
