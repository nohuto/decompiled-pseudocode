/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1404DE234
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
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
