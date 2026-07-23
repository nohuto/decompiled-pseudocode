/*
 * XREFs of IopGetRegistryULongValue @ 0x1405CEC80
 * Callers:
 *     IopGetRegistryBoolValue @ 0x1405CEC60 (IopGetRegistryBoolValue.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1405D2760 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRegistryULongValue(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (int)IopGetRegistryValue(a1) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v1 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  return v1;
}
