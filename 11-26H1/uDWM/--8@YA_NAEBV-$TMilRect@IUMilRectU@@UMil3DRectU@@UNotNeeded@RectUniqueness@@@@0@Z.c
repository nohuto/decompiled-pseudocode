/*
 * XREFs of ??8@YA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800E5AD8
 * Callers:
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
