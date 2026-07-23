/*
 * XREFs of MiZeroNodeExiting @ 0x14050CC64
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     MiZeroNodeConductorWait @ 0x1404F18D8 (MiZeroNodeConductorWait.c)
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140714170 (MiDeleteAcceleratorDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroNodeExiting(unsigned int *P)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  volatile LONG *v4; // rdi
  KIRQL v5; // r14
  volatile LONG *v6; // rcx
  KIRQL v7; // al
  KIRQL v8; // r15
  _QWORD *v9; // r14
  volatile LONG *v10; // rcx
  __int64 i; // rbp
  _QWORD **v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  void *v15; // rcx
  __int64 v16; // r12
  void *v17; // rcx
  KIRQL v18; // al
  unsigned int *v19; // rsi
  _QWORD *v20; // r15
  _QWORD *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx

  v2 = 56320LL * P[14];
  v3 = *(_QWORD *)(*((_QWORD *)P + 6) + 16LL);
  v4 = (volatile LONG *)(v2 + v3 + 14200);
  if ( P[15] )
  {
    *((_BYTE *)P + 162) = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + v3 + 14200));
    MiWakeZeroingThreads(P, 0LL);
    v6 = (volatile LONG *)(v2 + v3 + 14200);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v5);
    MiZeroNodeConductorWait((__int64)P, 0LL);
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + v3 + 14200));
  *(_QWORD *)(v2 + v3 + 14192) = 0LL;
  v8 = v7;
  KeCancelTimer((PKTIMER)(P + 22));
  v9 = *(_QWORD **)(v2 + v3 + 14184);
  if ( v9 )
    *(_QWORD *)(v2 + v3 + 14184) = 0LL;
  v10 = (volatile LONG *)(v2 + v3 + 14200);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockExclusive(v10, v8);
  for ( i = 0LL; i < 3; ++i )
  {
    if ( v9 )
    {
      v12 = (_QWORD **)&v9[63 * i + 50];
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        if ( (_QWORD **)v13[1] != v12 || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
LABEL_42:
          __fastfail(3u);
        *v12 = v14;
        v14[1] = v12;
        ExFreePoolWithTag(v13 - 20, 0);
      }
      v15 = (void *)v9[63 * i + 91];
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
    }
    v16 = 126 * i;
    v17 = *(void **)&P[126 * i + 182];
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)&P[v16 + 182] = 0LL;
    }
    if ( !i )
    {
      v18 = ExAcquireSpinLockExclusive(v4);
      v19 = &P[v16 + 76];
      while ( 1 )
      {
        v20 = *(_QWORD **)v19;
        if ( *(unsigned int **)v19 == v19 )
          break;
        if ( (unsigned int *)v20[1] != v19 )
          goto LABEL_42;
        v21 = (_QWORD *)*v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_42;
        *(_QWORD *)v19 = v21;
        v21[1] = v19;
        if ( v18 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v4);
        else
          ExReleaseSpinLockExclusive(v4, v18);
        MiDeleteAcceleratorDescriptor(v20 + 4);
        v18 = ExAcquireSpinLockExclusive(v4);
      }
      if ( v18 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v4);
      else
        ExReleaseSpinLockExclusive(v4, v18);
    }
    v22 = *(void **)&P[v16 + 82];
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *(_QWORD *)&P[v16 + 82] = 0LL;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v23 = (void *)*((_QWORD *)P + 9);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  ExFreePoolWithTag(P, 0);
}
