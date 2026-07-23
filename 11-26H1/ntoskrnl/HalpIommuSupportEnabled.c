/*
 * XREFs of HalpIommuSupportEnabled @ 0x14058E7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy < 2 || HalpIommuPolicy == 3;
}
