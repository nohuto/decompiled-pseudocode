/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4AB4
 * Callers:
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  char result; // al

  result = 0;
  if ( !*a1 && a1[2] == -1 || !a1[1] && a1[3] == -1 )
    return 1;
  return result;
}
