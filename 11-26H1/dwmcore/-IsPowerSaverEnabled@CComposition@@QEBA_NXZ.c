/*
 * XREFs of ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18022B038
 * Callers:
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18022B3C0 (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?UpdateEnergySaverState@CComposition@@IEAAX_N@Z @ 0x18022B4F8 (-UpdateEnergySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ @ 0x180239270 (-BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CComposition::IsPowerSaverEnabled(CComposition *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 6463) || *((_BYTE *)this + 6464) )
    return 1;
  return result;
}
