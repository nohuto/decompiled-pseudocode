/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14051A538
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x140779EBC (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
