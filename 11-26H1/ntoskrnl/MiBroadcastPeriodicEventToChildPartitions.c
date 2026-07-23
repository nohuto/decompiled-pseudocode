/*
 * XREFs of MiBroadcastPeriodicEventToChildPartitions @ 0x1402A6248
 * Callers:
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void MiBroadcastPeriodicEventToChildPartitions()
{
  unsigned int v0; // ebx
  KIRQL v1; // di
  int v2; // edx
  int v3; // r10d
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned int v6; // ebp
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  __int64 i; // r8
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx

  v0 = 0;
  v1 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  while ( 2 )
  {
    v2 = *(_DWORD *)stru_140E2ED08.QuantumTarget - 1;
    v3 = (*(_DWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4) != 0LL ? 0x20 : 0;
    v4 = v0 < *(_DWORD *)stru_140E2ED08.QuantumTarget ? v0 : 0;
    v5 = *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8)
       - ((*(_QWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v6 = v3 + v2;
      if ( v2 - v4 == -1 )
        goto LABEL_4;
      v8 = (_QWORD *)(v5 + 8 * ((unsigned __int64)(v3 + v4) >> 6));
      for ( i = ~*v8 | ((1LL << ((unsigned __int8)v3 + (unsigned __int8)v4)) - 1); i == -1; i = ~*v8 )
      {
        if ( (unsigned __int64)++v8 > v5 + 8 * ((unsigned __int64)v6 >> 6) )
          goto LABEL_4;
      }
      _BitScanForward64(&v10, ~i);
      v7 = ((unsigned int)(((__int64)v8 - v5) >> 3) << 6) + v10;
      if ( v7 > v6 )
      {
LABEL_4:
        v7 = -1;
        goto LABEL_11;
      }
      if ( v7 != -1 )
        break;
LABEL_11:
      if ( !v4 )
        goto LABEL_16;
      v11 = v0 + 1;
      if ( v0 + 1 > *(_DWORD *)stru_140E2ED08.QuantumTarget )
        v11 = *(_DWORD *)stru_140E2ED08.QuantumTarget;
      v2 = v11 - 1;
      v4 = 0;
    }
    v7 -= v3;
LABEL_16:
    if ( v7 >= v0 && v7 != -1 )
    {
      v0 = v7 + 1;
      v12 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * v7);
      if ( *(_BYTE *)(v12 + 21388) )
        KeSetEvent((PRKEVENT)(v12 + 112), 0, 0);
      continue;
    }
    break;
  }
  if ( v1 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v1);
}
