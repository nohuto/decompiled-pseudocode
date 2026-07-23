/*
 * XREFs of MiUnlinkAccelerator @ 0x1407148A4
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 *     MiDereferenceAccelerator @ 0x140714388 (MiDereferenceAccelerator.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeList @ 0x1407149F4 (MiWakeList.c)
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
  --dword_140E36680;
  v4 = *(_QWORD *)(384LL * *((unsigned int *)a1 + 6) + qword_140E2D838 + 376);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  --*(_WORD *)(v4 + 18);
  --*(_WORD *)(v4 + 24);
  --word_140E2D82A;
  --word_140E2D830;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  return MiWakeList(a1[5]);
}
