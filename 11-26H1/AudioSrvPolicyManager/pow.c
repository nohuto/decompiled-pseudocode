/*
 * XREFs of pow @ 0x1800309D4
 * Callers:
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
