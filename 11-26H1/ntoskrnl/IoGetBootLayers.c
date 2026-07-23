/*
 * XREFs of IoGetBootLayers @ 0x140796850
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootLayers @ 0x140CC346C (IopGetBootLayers.c)
 */

__int64 IoGetBootLayers()
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootLayers();
  else
    return 3221225865LL;
}
