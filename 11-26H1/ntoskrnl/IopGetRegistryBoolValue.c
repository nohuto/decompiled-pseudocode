/*
 * XREFs of IopGetRegistryBoolValue @ 0x1405CEC60
 * Callers:
 *     IopLiveDumpInitRegistrySettings @ 0x1405D2760 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryULongValue @ 0x1405CEC80 (IopGetRegistryULongValue.c)
 */

_BOOL8 IopGetRegistryBoolValue()
{
  return (unsigned int)IopGetRegistryULongValue() != 0;
}
