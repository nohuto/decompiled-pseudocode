/*
 * XREFs of IoGetBootLayers @ 0x140793D20
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootLayers @ 0x140CBD398 (IopGetBootLayers.c)
 */

__int64 IoGetBootLayers()
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootLayers();
  else
    return 3221225865LL;
}
