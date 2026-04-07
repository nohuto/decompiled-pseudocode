/*
 * XREFs of ?UpdateHidden@CVisual@@AEAAJXZ @ 0x180068A44
 * Callers:
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x1800689C0 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x180068A94 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CVisual::UpdateHidden(CVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualProxy::SetExcludeSubtree(this[2], *((_DWORD *)this + 10) != 0);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x32Du, 0LL);
  return v2;
}
