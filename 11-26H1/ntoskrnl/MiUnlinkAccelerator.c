/*
 * XREFs of MiUnlinkAccelerator @ 0x14070FBA8
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x14070F4A0 (MiDeleteHardwareAccelerators.c)
 *     MiDereferenceAccelerator @ 0x14070F68C (MiDereferenceAccelerator.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeList @ 0x14070FCF8 (MiWakeList.c)
 */

__int64 __fastcall MiUnlinkAccelerator(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // rbx

  v2 = *a1;
  if ( *(__int64 **)(v2 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_140E36500;
  v4 = *(_QWORD *)(384LL * *((unsigned int *)a1 + 6) + qword_140E2D6B8 + 376);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  --*(_WORD *)(v4 + 18);
  --*(_WORD *)(v4 + 24);
  --word_140E2D6AA;
  --word_140E2D6B0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  return MiWakeList(a1[5]);
}
