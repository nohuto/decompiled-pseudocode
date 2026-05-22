/*
 * XREFs of ?UnregisterGestureDragClient@BamoGestureServicesProxy@@UEAAJ_KPEAVBamoDragManagerClientPrincipal@@@Z @ 0x180129950
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?UnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KPEAVBamoDragManagerClientPrincipal@@@Z @ 0x1801299B0 (-UnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KPEAVBamoDragManagerCl.c)
 */

__int64 __fastcall BamoGestureServicesProxy::UnregisterGestureDragClient(
        BamoGestureServicesProxy *this,
        unsigned __int64 a2,
        struct BamoDragManagerClientPrincipal *a3)
{
  BamoGestureServicesProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoGestureServicesProxyImpl::UnregisterGestureDragClient(
                  (BamoGestureServicesProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
