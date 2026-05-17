/*
 * XREFs of labs @ 0x1801295E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl labs(int Number)
{
  int result; // eax

  result = -Number;
  if ( Number > 0 )
    return Number;
  return result;
}
