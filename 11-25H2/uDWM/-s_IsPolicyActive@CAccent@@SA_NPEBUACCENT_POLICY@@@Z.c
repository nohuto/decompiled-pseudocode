/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000F850
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18000F5B8 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180040CA8 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180056E54 (-AllowSnapshot@CWindowData@@QEBA_NXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  int v1; // eax
  char v2; // cl

  v1 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v2 = 1;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 0;
  return v2;
}
