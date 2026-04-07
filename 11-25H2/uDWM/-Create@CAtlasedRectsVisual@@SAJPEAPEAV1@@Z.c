/*
 * XREFs of ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800131E8
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180013130 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001167C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Create(struct CAtlasedRectsVisual **a1)
{
  CAtlasedRectsVisual *v2; // rax
  CAtlasedRectsVisual *v3; // rax
  struct CAtlasedRectsVisual *v4; // rbx
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3Bu, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CAtlasedRectsVisual *)DefaultHeap::AllocClear(0xF0uLL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v3 = CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_8:
    v5 = -2147024882;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3Bu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
