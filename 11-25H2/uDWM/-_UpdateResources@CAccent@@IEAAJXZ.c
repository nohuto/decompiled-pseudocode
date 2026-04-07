/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18003F4F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000F850 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18003F5DC (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003F72C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800406A8 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180040CA8 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // esi
  const struct ACCENT_POLICY *v3; // rdx
  unsigned int v5; // eax
  struct CVisual *v6; // r9

  updated = 0;
  if ( !CAccent::_AnyTransparentBackground((CAccent *)this) )
  {
    if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(this + 30)) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v3, this + 35, 0LL);
      if ( updated < 0 )
      {
        v5 = 642;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v5, 0LL);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    if ( *((_BYTE *)this + 272) )
    {
      v6 = this[35];
      *((_DWORD *)this + 82) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 32),
                  this + 36,
                  v6);
      if ( updated < 0 )
      {
        v5 = 653;
        goto LABEL_8;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v5 = 655;
      goto LABEL_8;
    }
  }
  return (unsigned int)updated;
}
