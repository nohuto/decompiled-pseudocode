/*
 * XREFs of MiInitializeNumaRangesPermanent @ 0x140CF1354
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *MiInitializeNumaRangesPermanent()
{
  void *result; // rax
  unsigned int v1; // edi
  void *v2; // rbx

  result = &unk_140E2D6C0;
  if ( qword_140E2D6E0 != &unk_140E2D6C0 )
  {
    v1 = 16 * (dword_140E2D684 + 2);
    result = (void *)ExAllocatePoolMm(
                       64LL,
                       v1,
                       1968073037,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v2 = result;
    if ( result )
    {
      result = memmove(result, qword_140E2D6E0, v1);
      qword_140E2D6E0 = v2;
    }
  }
  return result;
}
