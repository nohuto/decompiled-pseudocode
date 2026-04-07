/*
 * XREFs of ?InitializeFromSharedHandle@CBaseGeometryProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800057F8
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180005708 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 */

__int64 __fastcall CBaseGeometryProxy::InitializeFromSharedHandle(
        CBaseGeometryProxy *this,
        struct IDwmChannel *a2,
        void *a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 0;
  return CResourceProxy::InitializeFromSharedHandle(this, 14LL, a2, a3, v4);
}
