/*
 * XREFs of HalpCheckInterruptType @ 0x140423104
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140423064 (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B5EF94 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140423170 (HalpIsInterruptTypeSecondary.c)
 */

char __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  char result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary((unsigned int)a1[2], (unsigned int)a1[16]);
  return result;
}
