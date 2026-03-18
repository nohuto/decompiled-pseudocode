/*
 * XREFs of MiCloneWriteWatch @ 0x140703194
 * Callers:
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void __fastcall MiCloneWriteWatch(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rdi
  unsigned __int16 v2; // dx
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  KIRQL v5; // bp
  volatile LONG *v6; // rcx

  LockedVadEvent = MiLocateLockedVadEvent(a1, 4u);
  v4 = MiLocateLockedVadEvent(v3, v2);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(LockedVadEvent + 40));
  memmove(
    *(void **)(v4 + 32),
    *(const void **)(LockedVadEvent + 32),
    (unsigned __int64)(*(_QWORD *)(v4 + 24) + 7LL) >> 3);
  v6 = (volatile LONG *)(LockedVadEvent + 40);
  if ( v5 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v6);
  else
    ExReleaseSpinLockShared(v6, v5);
}
