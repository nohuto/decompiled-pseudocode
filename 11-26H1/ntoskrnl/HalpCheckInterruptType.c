/*
 * XREFs of HalpCheckInterruptType @ 0x1404301F4
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140430154 (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B62114 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140430260 (HalpIsInterruptTypeSecondary.c)
 */

char __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  char result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary((unsigned int)a1[2], (unsigned int)a1[16]);
  return result;
}
