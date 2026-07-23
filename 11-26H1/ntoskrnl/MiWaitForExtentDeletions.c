/*
 * XREFs of MiWaitForExtentDeletions @ 0x1406FFB3C
 * Callers:
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 */

void __fastcall MiWaitForExtentDeletions(__int64 a1, KIRQL a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  struct _KLOCK_ENTRY *v6; // rdx
  unsigned __int64 v7; // rbx
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int16 v12; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+2Ah] [rbp-16h]
  char v14; // [rsp+2Bh] [rbp-15h]
  int v15; // [rsp+2Ch] [rbp-14h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v14 = 0;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0, 0LL, 0LL, a4);
  v7 = (unsigned __int64)v5;
  if ( v5 )
    KeAbPreWait(v5, v6);
  v12 = 263;
  v16[1] = v16;
  v16[0] = v16;
  v11 = *(_QWORD *)&stru_140E2D2D0.Header.Lock;
  *(_QWORD *)&stru_140E2D2D0.Header.Lock = &v11;
  v13 = 6;
  v15 = 0;
  if ( a2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
  else
    ExReleaseSpinLockExclusive(&dword_140E39B60, a2);
  KeWaitForGate((__int64)&v12, 18LL);
  if ( v7 )
  {
    KeAbPreAcquire((__int64)&stru_140E2D2D0, v7, 0LL, v8);
    KeAbPostReleaseEx(&stru_140E2D2D0, v7, v9, v10);
  }
}
