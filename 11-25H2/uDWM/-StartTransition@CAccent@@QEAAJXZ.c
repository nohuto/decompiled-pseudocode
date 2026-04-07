/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000F850 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800388F0 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180084928 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x1800A09CC (--0CAccentTransition@@QEAA@XZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A0B74 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(struct CRenderDataVisual **this)
{
  int updated; // edi
  struct CRenderDataVisual *v3; // rcx
  CAccentTransition *v4; // rax
  unsigned int v5; // eax
  struct CRenderDataVisual *v6; // rcx

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v5 = 755;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v5, 0LL);
    v6 = this[40];
    if ( v6 )
    {
      CBaseObject::Release((struct CRenderDataVisual *)((char *)v6 + 8));
      this[40] = 0LL;
    }
    return (unsigned int)updated;
  }
  if ( !CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(this + 32))
    || !CAccent::_IsAnimationNeeded((CAccent *)this) )
  {
    updated = CAccent::EndTransition((CAccent *)this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v5 = 773;
    goto LABEL_13;
  }
  v3 = this[40];
  if ( v3 )
    CBaseObject::Release((struct CRenderDataVisual *)((char *)v3 + 8));
  v4 = (CAccentTransition *)DefaultHeap::AllocClear(0x28uLL);
  if ( v4 )
    v4 = CAccentTransition::CAccentTransition(v4);
  this[40] = v4;
  updated = CAccentTransition::StartAnimation(v4, (const struct ACCENT_POLICY *)(this + 32), (struct CAccent *)this);
  if ( updated < 0 )
  {
    v5 = 768;
    goto LABEL_13;
  }
  return (unsigned int)updated;
}
