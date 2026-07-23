/*
 * XREFs of ViFreeToContiguousMemory @ 0x140C2CEE0
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 */

__int64 __fastcall ViFreeToContiguousMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rsi
  __int64 v5; // r8
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // bl

  i = a3;
  v5 = *(_QWORD *)(a1 + 296);
  if ( v5 )
  {
    if ( (unsigned int)i < 0x20 && *(_QWORD *)(v5 + 8 * i) == a2 )
    {
LABEL_8:
      v6 = (KSPIN_LOCK *)(a1 + 312);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
      RtlClearBits((PRTL_BITMAP)(a1 + 328), i, 1u);
      KeReleaseSpinLock(v6, v7);
      return 1LL;
    }
    for ( i = 0LL; (unsigned int)i < 0x20; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(v5 + 8 * i) == a2 )
        goto LABEL_8;
    }
  }
  return 0LL;
}
