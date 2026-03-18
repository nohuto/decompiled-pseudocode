/*
 * XREFs of IopGetRegistryBoolValue @ 0x1405CC44C
 * Callers:
 *     IopLiveDumpInitRegistrySettings @ 0x1405CFF50 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryULongValue @ 0x1405CC46C (IopGetRegistryULongValue.c)
 */

_BOOL8 IopGetRegistryBoolValue()
{
  return (unsigned int)IopGetRegistryULongValue() != 0;
}
