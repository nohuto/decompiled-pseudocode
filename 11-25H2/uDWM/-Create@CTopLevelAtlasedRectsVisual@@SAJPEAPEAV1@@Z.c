/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800115A8
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180010A80 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180073820 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001167C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct CTopLevelAtlasedRectsVisual **a1)
{
  CAtlasedRectsVisual *v2; // rax
  struct CTopLevelAtlasedRectsVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Eu, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CAtlasedRectsVisual *)DefaultHeap::AllocClear(0xF0uLL);
  v3 = v2;
  if ( v2 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
    *(_QWORD *)v3 = &CTopLevelAtlasedRectsVisual::`vftable';
    v4 = ((__int64 (__fastcall *)(struct CTopLevelAtlasedRectsVisual *))*(&CTopLevelAtlasedRectsVisual::`vftable' + 1))(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1Eu, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
