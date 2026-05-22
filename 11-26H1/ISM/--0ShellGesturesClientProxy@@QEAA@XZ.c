/*
 * XREFs of ??0ShellGesturesClientProxy@@QEAA@XZ @ 0x18008FE2C
 * Callers:
 *     ?CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18008FD7C (-CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer.c)
 * Callees:
 *     ??0BamoShellGesturesClientProxyImpl@BamoImpl@@QEAA@XZ @ 0x18008FEAC (--0BamoShellGesturesClientProxyImpl@BamoImpl@@QEAA@XZ.c)
 */

ShellGesturesClientProxy *__fastcall ShellGesturesClientProxy::ShellGesturesClientProxy(ShellGesturesClientProxy *this)
{
  __int64 v1; // r8

  BamoImpl::BamoShellGesturesClientProxyImpl::BamoShellGesturesClientProxyImpl((ShellGesturesClientProxy *)((char *)this + 16));
  *(_QWORD *)(v1 + 8) = &ShellGesturesClientProxy::`vftable'{for `IShellGesturesClientProxy'};
  *(_QWORD *)v1 = &ShellGesturesClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(v1 + 120) = &ShellGesturesClientProxy::`vftable'{for `IInputSiteClientPrivate'};
  *(_QWORD *)(v1 + 128) = &ShellGesturesClientProxy::`vftable'{for `IInputTarget'};
  *(_QWORD *)(v1 + 136) = &ShellGesturesClientProxy::`vftable'{for `IDCompInputTarget'};
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_QWORD *)(v1 + 152) = 0LL;
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_BYTE *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 176) = 0LL;
  return (ShellGesturesClientProxy *)v1;
}
