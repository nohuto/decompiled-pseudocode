/*
 * XREFs of ExecuteHotpatchTestBootFunction @ 0x14055BCE8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
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
