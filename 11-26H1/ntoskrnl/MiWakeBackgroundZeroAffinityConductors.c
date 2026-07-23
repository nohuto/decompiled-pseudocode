/*
 * XREFs of MiWakeBackgroundZeroAffinityConductors @ 0x140713960
 * Callers:
 *     MiAvailableCpusChangeCallback @ 0x140712F60 (MiAvailableCpusChangeCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

unsigned __int64 __fastcall MiWakeBackgroundZeroAffinityConductors(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int i; // ebx
  __int64 v4; // r14
  __int64 v5; // rbp
  KIRQL v6; // al
  struct _KEVENT *v7; // rcx
  KIRQL v8; // si
  volatile LONG *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = 56320LL * i;
    if ( *(_QWORD *)(v4 + v5 + 14192) )
    {
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + v4 + 14200));
      v7 = *(struct _KEVENT **)(v4 + v5 + 14192);
      v8 = v6;
      if ( v7 )
        KeSetEvent(v7 + 8, 0, 0);
      v9 = (volatile LONG *)(v5 + v4 + 14200);
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      else
        ExReleaseSpinLockExclusive(v9, v8);
    }
    result = (unsigned __int16)KeNumberNodes;
  }
  return result;
}
