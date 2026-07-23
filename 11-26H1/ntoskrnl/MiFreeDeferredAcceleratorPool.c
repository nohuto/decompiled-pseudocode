/*
 * XREFs of MiFreeDeferredAcceleratorPool @ 0x1402A5E74
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWakeList @ 0x1407149F4 (MiWakeList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiFreeDeferredAcceleratorPool()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi

  v0 = ExAcquireSpinLockExclusive(&dword_140E366B0);
  ++dword_140E366A0;
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
    else
      ExReleaseSpinLockExclusive(&dword_140E366B0, v1);
    AccelCloseResource(v4[2]);
    ExFreePoolWithTag(v4, 0);
    ExAcquireSpinLockExclusive(&dword_140E366B0);
  }
  if ( !--dword_140E366A0 && qword_140E36698 )
  {
    MiWakeList();
    qword_140E36698 = 0LL;
  }
  if ( v1 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
  else
    ExReleaseSpinLockExclusive(&dword_140E366B0, v1);
}
