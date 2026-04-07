/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180020840
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x1800207AC (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180034A7C (-AllowSnapshot@CWindowData@@QEBA_NXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@.c)
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
