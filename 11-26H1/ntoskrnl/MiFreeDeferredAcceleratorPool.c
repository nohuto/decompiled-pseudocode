/*
 * XREFs of MiFreeDeferredAcceleratorPool @ 0x1402A6A58
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 *     MiDeleteHardwareAccelerators @ 0x14070F4A0 (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWakeList @ 0x14070FCF8 (MiWakeList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void MiFreeDeferredAcceleratorPool()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi

  v0 = ExAcquireSpinLockExclusive(&dword_140E36530);
  ++dword_140E36520;
  v1 = v0;
  while ( 1 )
  {
    v2 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v3 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    v4 = v2;
    *(_QWORD *)(v3 + 8) = &P;
    if ( v1 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
    else
      ExReleaseSpinLockExclusive(&dword_140E36530, v1);
    AccelCloseResource(v4[2]);
    ExFreePoolWithTag(v4, 0);
    ExAcquireSpinLockExclusive(&dword_140E36530);
  }
  if ( !--dword_140E36520 && qword_140E36518 )
  {
    MiWakeList();
    qword_140E36518 = 0LL;
  }
  if ( v1 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
  else
    ExReleaseSpinLockExclusive(&dword_140E36530, v1);
}
