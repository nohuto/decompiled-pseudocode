/*
 * XREFs of MiInitializeChannelRangesPermanent @ 0x140CFC9E0
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void MiInitializeChannelRangesPermanent()
{
  unsigned int v0; // edi
  void *PoolMm; // rax
  void *v2; // rbx

  if ( qword_140E2D6E8 )
  {
    v0 = 16 * ((unsigned __int8)byte_140E2D68B + 2);
    PoolMm = (void *)ExAllocatePoolMm(
                       64LL,
                       v0,
                       1749248333,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v2 = PoolMm;
    if ( PoolMm )
    {
      memmove(PoolMm, qword_140E2D6E8, v0);
      qword_140E2D6E8 = v2;
    }
  }
}
