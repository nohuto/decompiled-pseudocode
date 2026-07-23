/*
 * XREFs of MiZeroEngineSetOptimalCount @ 0x140713B28
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiZeroEngineSetOptimalCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  volatile LONG *v6; // r14
  KIRQL v7; // al
  int v8; // edx
  KIRQL v9; // r15

  v2 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(v2 + 48);
  v6 = (volatile LONG *)(56320LL * *(unsigned int *)(v2 + 56) + 14200 + *(_QWORD *)(v5 + 16));
  v7 = ExAcquireSpinLockExclusive(v6);
  v8 = 1;
  v9 = v7;
  if ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(v2 + 56) )
    v8 = a2;
  *(_DWORD *)(a1 + 8) = v8;
  if ( !*(_BYTE *)(a1 + 32) )
    *(_BYTE *)(a1 + 32) = 1;
  if ( *(_BYTE *)(a1 + 33) )
  {
    *(_BYTE *)(a1 + 33) = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 17336), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 17344), 0, 0);
  }
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  else
    ExReleaseSpinLockExclusive(v6, v9);
}
