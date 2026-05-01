/*
 * XREFs of ??1BUCKET@@QEAA@XZ @ 0x1806CAAA0
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1806CAE08 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1806CAB18 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 */

void __fastcall BUCKET::~BUCKET(BUCKET *this)
{
  CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy();
  CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::~CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>(this);
}
