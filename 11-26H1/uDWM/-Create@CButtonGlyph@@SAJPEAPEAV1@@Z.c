/*
 * XREFs of ?Create@CButtonGlyph@@SAJPEAPEAV1@@Z @ 0x180027EB0
 * Callers:
 *     ?SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008F84 (-SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CButtonGlyph@@IEAA@XZ @ 0x180027F98 (--0CButtonGlyph@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CButtonGlyph::Create(struct CButtonGlyph **a1)
{
  CButtonGlyph *v2; // rax
  CButtonGlyph *v3; // rbx
  CButtonGlyph *v4; // rax
  struct CButtonGlyph *v5; // rbx
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x9Au, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CButtonGlyph *)DefaultHeap::AllocClear(0xF8uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_8;
  }
  memset_0(v2, 0, 0xF8uLL);
  v4 = CButtonGlyph::CButtonGlyph(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_8:
    v6 = -2147024882;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(CButtonGlyph *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x9Au, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
