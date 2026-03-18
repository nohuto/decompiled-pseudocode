/*
 * XREFs of HalpIommuSupportEnabled @ 0x14058C050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy < 2 || HalpIommuPolicy == 3;
}
