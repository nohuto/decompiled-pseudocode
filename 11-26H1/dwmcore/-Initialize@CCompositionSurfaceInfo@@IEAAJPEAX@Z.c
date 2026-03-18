/*
 * XREFs of ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x1800F69AC
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800F6614 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800F6A24 (-AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Initialize(
        CCompositionSurfaceManager **this,
        CCompositionSurfaceManager *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  CCompositionSurfaceManager *v6; // rdx

  v4 = CCompositionSurfaceManager::AddToSurfaceMap(this[3], (struct CCompositionSurfaceInfo *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1Bu, 0LL);
  }
  else
  {
    v6 = *this;
    this[4] = a2;
    (*((void (__fastcall **)(CCompositionSurfaceManager **))v6 + 6))(this);
  }
  return v5;
}
