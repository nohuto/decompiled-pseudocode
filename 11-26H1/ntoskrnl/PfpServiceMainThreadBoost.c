/*
 * XREFs of PfpServiceMainThreadBoost @ 0x1406028E4
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140C10118 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r14
  KIRQL v6; // al
  __int64 v7; // r8
  KIRQL v8; // r15
  __int64 v9; // rcx

  v2 = 0;
  if ( *a2 )
  {
    v5 = a2[1];
    *(_DWORD *)(v5 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v8 = v6;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v9 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v9, 12LL, v7);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v8);
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_BYTE *)(v5 + 64) = 8;
    *(_QWORD *)(v5 + 80) = v5 + 72;
    *(_QWORD *)(v5 + 72) = v5 + 72;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 124) = 0;
    *(_WORD *)(v5 + 120) = 0;
    *(_BYTE *)(v5 + 123) = 0;
    *(_QWORD *)(v5 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v5 = 275;
    *(_QWORD *)(v5 + 32) = v5;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    KiSetTimerEx(v5 + 64, -200000000LL, 0, 0, v5);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v2;
}
