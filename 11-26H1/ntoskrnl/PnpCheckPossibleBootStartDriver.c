/*
 * XREFs of PnpCheckPossibleBootStartDriver @ 0x1407A7DE0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall PnpCheckPossibleBootStartDriver(void *a1)
{
  bool v1; // bl

  v1 = 0;
  if ( (int)IopGetRegistryValue(a1) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v1 = *(_DWORD *)MEMORY[8] != 0;
    ExFreePoolWithTag(0LL, 0);
  }
  return v1;
}
