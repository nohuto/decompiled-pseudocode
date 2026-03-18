/*
 * XREFs of MiInsertUnusedSegment @ 0x1404807E0
 * Callers:
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x1404DF994 (MiCleanSection.c)
 *     MiSetDeleteOnClose @ 0x14050687C (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406E7694 (MiMakeUnusedSegmentDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputePagedPoolSegmentBytes @ 0x14030BE08 (MiComputePagedPoolSegmentBytes.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     MiReleaseControlAreaCharges @ 0x1404808D0 (MiReleaseControlAreaCharges.c)
 *     MiConvertStaticSubsections @ 0x1404809B0 (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // eax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rbx
  _QWORD *v9; // rdx

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
    v1 = MiConvertStaticSubsections();
  v3 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 2112));
  if ( !v1 )
    v1 = MiReleaseControlAreaCharges(a1, 1LL);
  v4 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v4 | 0x40000000;
  v5 = (_QWORD *)(a1 + 8);
  if ( (v4 & 0x40000) != 0 )
  {
    v9 = *(_QWORD **)(v3 + 2488);
    if ( *v9 != v3 + 2480 )
LABEL_7:
      __fastfail(3u);
    *v5 = v3 + 2480;
    *(_QWORD *)(a1 + 16) = v9;
    *v9 = v5;
    *(_QWORD *)(v3 + 2488) = v5;
    ++*(_DWORD *)(v3 + 2116);
    if ( !*(_BYTE *)(v3 + 2424) )
    {
      *(_BYTE *)(v3 + 2424) = 1;
      KiSetTimerEx(v3 + 2360, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v6 = *(_QWORD **)(v3 + 2472);
    if ( *v6 != v3 + 2464 )
      goto LABEL_7;
    *v5 = v3 + 2464;
    *(_QWORD *)(a1 + 16) = v6;
    *v6 = v5;
    *(_QWORD *)(v3 + 2472) = v5;
  }
  v7 = MiComputePagedPoolSegmentBytes(a1);
  *(_QWORD *)(v3 + 2440) += v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 2112));
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E2C7D0.Header.WaitListHead.Flink, v7);
  return v1;
}
