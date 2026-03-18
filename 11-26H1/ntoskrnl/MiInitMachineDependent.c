/*
 * XREFs of MiInitMachineDependent @ 0x140D017C8
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 */

struct _KTHREAD *MiInitMachineDependent()
{
  __int64 v0; // rdx
  __int16 v1; // r8
  struct _KTHREAD *result; // rax

  v0 = MEMORY[0xFFFFF6FB7DBEDF68];
  v1 = __readcr3();
  result = KeGetCurrentThread();
  result->ApcState.Process->DirectoryTableBase = v0 & 0xFFFFFFFFFF000LL | v1 & 0xFFF;
  return result;
}
