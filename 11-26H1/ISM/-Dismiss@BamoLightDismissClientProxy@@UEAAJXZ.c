/*
 * XREFs of ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x18015FEB0
 * Callers:
 *     ?OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800296A0 (-OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180051800 (-OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Dismiss@BamoLightDismissClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x18015FEF0 (-Dismiss@BamoLightDismissClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoLightDismissClientProxy::Dismiss(BamoLightDismissClientProxy *this)
{
  BamoLightDismissClientProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoLightDismissClientProxyImpl::Dismiss((BamoLightDismissClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v2, v3);
  return (unsigned int)v1;
}
