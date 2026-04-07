/*
 * XREFs of ?InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x18000568C
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180005DBC (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 *     ?InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ @ 0x1800076D0 (-InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualProxy::InitializeFromSharedHandle(CVisualProxy *this, struct IDwmChannel *a2, void *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  char v8; // [rsp+20h] [rbp-18h]

  v8 = 1;
  v4 = CResourceProxy::InitializeFromSharedHandle(this, 39LL, a2, a3, v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1Au, 0LL);
  }
  else
  {
    v6 = CVisualProxy::InitializeDCompositionVisual(this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1Bu, 0LL);
  }
  return v5;
}
