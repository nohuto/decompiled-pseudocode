/*
 * XREFs of ?SetCursorShellMagnification@BamoSystemCursorControllerProxy@@UEAAJ_KM@Z @ 0x180127E60
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_KM@Z @ 0x180127EC0 (-SetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_KM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerProxy::SetCursorShellMagnification(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2,
        float a3)
{
  BamoSystemCursorControllerProxy *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v8,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v4) = BamoImpl::BamoSystemCursorControllerProxyImpl::SetCursorShellMagnification(
                  (BamoSystemCursorControllerProxy *)((char *)v4 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v8, v5, v6);
  return (unsigned int)v4;
}
