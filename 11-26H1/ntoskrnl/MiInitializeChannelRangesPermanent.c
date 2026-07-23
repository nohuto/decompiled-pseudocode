/*
 * XREFs of MiInitializeChannelRangesPermanent @ 0x140D02D60
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void MiInitializeChannelRangesPermanent()
{
  unsigned int v0; // edi
  void *PoolMm; // rax
  void *v2; // rbx

  if ( qword_140E2D868 )
  {
    v0 = 16 * ((unsigned __int8)byte_140E2D80B + 2);
    PoolMm = (void *)ExAllocatePoolMm(
                       64LL,
                       v0,
                       1749248333,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v2 = PoolMm;
    if ( PoolMm )
    {
      memmove(PoolMm, qword_140E2D868, v0);
      qword_140E2D868 = v2;
    }
  }
}
