/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1404E4C94
 * Callers:
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( KiIntSteerEnabled )
    return PpmIntSteerDisabled == 0;
  return result;
}
