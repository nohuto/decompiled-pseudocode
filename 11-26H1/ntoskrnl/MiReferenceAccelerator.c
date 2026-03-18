/*
 * XREFs of MiReferenceAccelerator @ 0x140507D64
 * Callers:
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiSetThreadAffinity @ 0x1403C34E0 (MiSetThreadAffinity.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1405319C8 (MiAllocateAcceleratorDescriptor.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

_QWORD *__fastcall MiReferenceAccelerator(unsigned int a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8

  v1 = a1;
  if ( !*(_WORD *)(*(_QWORD *)(384LL * a1 + qword_140E2D6B8 + 376) + 24LL) )
    return 0LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36530);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive(&dword_140E36530);
  }
  v4 = (_QWORD *)((char *)&unk_140E36100 + 16 * v1);
  v5 = 0LL;
  v6 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      if ( (*((_DWORD *)v6 + 13) & 1) == 0 && *((_DWORD *)v6 + 12) != -1 && !byte_140E36504 )
      {
        if ( v5 )
        {
          if ( *((_DWORD *)v5 + 12) > *((_DWORD *)v6 + 12) )
            v5 = v6;
        }
        else
        {
          v5 = v6;
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v7 != v4 );
    if ( v5 )
      ++*((_DWORD *)v5 + 12);
  }
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
  else
    ExReleaseSpinLockExclusive(&dword_140E36530, v3);
  return v5;
}
