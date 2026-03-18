/*
 * XREFs of ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18026B130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026B298 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneFrameTick(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CCompositionMipmapSurface::UpdateMipmapSurface((CCompositionMipmapSurface *)((char *)this - 88));
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x7Eu, 0LL);
  return v3;
}
