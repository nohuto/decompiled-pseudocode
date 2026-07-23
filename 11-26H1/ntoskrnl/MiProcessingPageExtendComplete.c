/*
 * XREFs of MiProcessingPageExtendComplete @ 0x140530EA0
 * Callers:
 *     MiHandlePageFileSizeChanges @ 0x14052751C (MiHandlePageFileSizeChanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

KIRQL __fastcall MiProcessingPageExtendComplete(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL v6; // di

  v5 = (volatile LONG *)(a3 + 2112);
  if ( (*(_BYTE *)(a1 + 87) & 4) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 80), 0);
    return ExAcquireSpinLockExclusive(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( *(_QWORD *)(a1 + 88) )
    {
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
      KeSetEvent((PRKEVENT)(a2 + 56), 0, 0);
    }
  }
  return v6;
}
