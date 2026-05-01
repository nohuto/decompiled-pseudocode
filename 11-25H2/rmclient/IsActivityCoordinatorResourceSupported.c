/*
 * XREFs of IsActivityCoordinatorResourceSupported @ 0x18001B8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsActivityCoordinatorResourceSupported(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 >= 0 )
    return a1 < 8;
  return result;
}
