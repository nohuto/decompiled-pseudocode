/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180143A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180143AD0 (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 */

__int64 __fastcall BamoSystemContextEndpointProxy::OnInputConfigChanged(
        BamoSystemContextEndpointProxy *this,
        struct BamoInputSpacePayloadPrincipal *const *a2,
        unsigned int a3)
{
  BamoSystemContextEndpointProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoSystemContextEndpointProxyImpl::OnInputConfigChanged(
                  (BamoSystemContextEndpointProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
