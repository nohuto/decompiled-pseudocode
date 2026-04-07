/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B50AC
 * Callers:
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B4F18 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_180118DD8
      || a1[1] <= (unsigned int)dword_180118DD4 && a1[3] >= (unsigned int)dword_180118DDC;
}
