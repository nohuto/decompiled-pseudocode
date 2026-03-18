/*
 * XREFs of ExecuteHotpatchTestBootFunction @ 0x140559858
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

int *ExecuteHotpatchTestBootFunction()
{
  int *result; // rax

  result = &BootGlobal;
  if ( &BootGlobal == (int *)16 )
    BootGlobal = 10;
  BootGlobal = 0;
  return result;
}
