/*
 * XREFs of MiWakeAllZeroConductors @ 0x14071387C
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 *MiWakeAllZeroConductors()
{
  __int64 *result; // rax
  unsigned int v1; // ebx
  __int64 i; // r13
  __int64 v3; // r15
  __int64 v4; // r14
  KIRQL v5; // al
  struct _KEVENT *v6; // rcx
  KIRQL v7; // bp
  volatile LONG *v8; // rcx
  __int64 *v9; // rdi

  for ( result = (__int64 *)PsGetNextPartition(0LL); ; result = (__int64 *)PsGetNextPartition(v9) )
  {
    v9 = result;
    if ( !result )
      break;
    v1 = 0;
    for ( i = *result; v1 < (unsigned __int16)KeNumberNodes; ++v1 )
    {
      v3 = *(_QWORD *)(i + 16);
      v4 = 56320LL * v1;
      if ( *(_QWORD *)(v4 + v3 + 14192) )
      {
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + v3 + 14200));
        v6 = *(struct _KEVENT **)(v4 + v3 + 14192);
        v7 = v5;
        if ( v6 )
          KeSetEvent(v6 + 7, 0, 0);
        v8 = (volatile LONG *)(v4 + v3 + 14200);
        if ( v7 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockExclusive(v8, v7);
      }
    }
  }
  return result;
}
