/*
 * XREFs of ?ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x18015AF80
 * Callers:
 *     ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18015AD10 (-AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z.c)
 *     ?ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x18015AF80 (-ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Wi.c)
 * Callees:
 *     ?ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x18015AF80 (-ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Wi.c)
 */

char __fastcall CRenderingTechniqueFragment::ContainsEffectSubgraph(
        CRenderingTechniqueFragment *this,
        struct Windows::UI::Composition::IEffectInstance *a2,
        unsigned int a3)
{
  __int64 v6; // rsi
  unsigned int i; // edi
  CRenderingTechniqueFragment *v8; // rcx

  if ( *(struct Windows::UI::Composition::IEffectInstance **)this == a2 && *((_DWORD *)this + 4) == a3 )
    return 1;
  v6 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  for ( i = 0; i < (unsigned int)v6; ++i )
  {
    v8 = *(CRenderingTechniqueFragment **)(*((_QWORD *)this + 4) + 16LL * i + 8);
    if ( v8 && CRenderingTechniqueFragment::ContainsEffectSubgraph(v8, a2, a3) )
      return 1;
  }
  return 0;
}
