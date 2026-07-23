/*
 * XREFs of sqrt @ 0x140539C70
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x14053CA20 (_handle_error.c)
 */

double __cdecl sqrt(double X)
{
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      handle_error((unsigned int)"sqrt", 5, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
      return X;
    }
    if ( X < 0.0 )
      goto LABEL_5;
  }
  else if ( X < 0.0 && (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
LABEL_5:
    handle_error((unsigned int)"sqrt", 5, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
    return X;
  }
  return sqrt(X);
}
