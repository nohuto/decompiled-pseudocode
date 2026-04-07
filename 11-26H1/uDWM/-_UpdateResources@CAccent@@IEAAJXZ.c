/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800635F0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180063B98 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CNineGridVisual **this)
{
  int v2; // esi
  struct CVisual *v4; // r9
  unsigned int v5; // eax

  v2 = 0;
  if ( !CAccent::_IsAcrylicBlurEnabledAndAllowed((CAccent *)this) )
  {
    v2 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 23), this + 28, 0LL);
    if ( v2 < 0 )
    {
      v5 = 607;
      goto LABEL_8;
    }
    if ( *((_BYTE *)this + 216) )
    {
      v4 = this[28];
      *((_DWORD *)this + 68) = 0;
      v2 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 25), this + 29, v4);
      if ( v2 < 0 )
      {
        v5 = 617;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v5, 0LL);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
      }
    }
  }
  return (unsigned int)v2;
}
