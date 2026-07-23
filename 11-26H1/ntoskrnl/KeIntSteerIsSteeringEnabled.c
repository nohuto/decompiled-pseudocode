/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x140513FA8
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14077CDEC (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
