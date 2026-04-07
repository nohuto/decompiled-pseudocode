/*
 * XREFs of ?InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x180003B60
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180003A70 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualTargetProxy::InitializeFromSharedHandle(
        CVisualTargetProxy *this,
        struct IDwmChannel *a2,
        void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-18h]

  v6 = 0;
  v3 = CResourceProxy::InitializeFromSharedHandle(this, 39LL, a2, a3, v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xEu, 0LL);
  return v4;
}
