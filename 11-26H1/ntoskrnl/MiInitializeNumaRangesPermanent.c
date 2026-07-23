/*
 * XREFs of MiInitializeNumaRangesPermanent @ 0x140CF76CC
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void *MiInitializeNumaRangesPermanent()
{
  void *result; // rax
  unsigned int v1; // edi
  void *v2; // rbx

  result = &unk_140E2D840;
  if ( qword_140E2D860 != &unk_140E2D840 )
  {
    v1 = 16 * (dword_140E2D804 + 2);
    result = (void *)ExAllocatePoolMm(
                       64LL,
                       v1,
                       1968073037,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v2 = result;
    if ( result )
    {
      result = memmove(result, qword_140E2D860, v1);
      qword_140E2D860 = v2;
    }
  }
  return result;
}
