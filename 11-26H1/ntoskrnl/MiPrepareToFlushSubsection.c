/*
 * XREFs of MiPrepareToFlushSubsection @ 0x1404E5300
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     ObFastReferenceObjectLocked @ 0x14048678C (ObFastReferenceObjectLocked.c)
 *     MiTranslateSubsectionState @ 0x14050EA70 (MiTranslateSubsectionState.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiPrepareToFlushSubsection(__int64 *a1, KIRQL a2, __int64 a3, struct _FILE_OBJECT **a4)
{
  __int64 v4; // rdi
  struct _FILE_OBJECT *v9; // rsi
  __int64 *v10; // rbp
  volatile LONG *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebp
  KIRQL v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  volatile LONG *v18; // rcx
  unsigned int v19; // ebx
  __int64 result; // rax
  KIRQL v21; // r9
  volatile LONG *v22; // rcx

  v4 = *a1;
  *(_QWORD *)(a3 + 72) = *a1;
  *a4 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
  v9 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v4 + 64), 0x63536D4Du);
  v10 = MiDecrementModifiedWriteCount(v4, 1);
  v11 = (volatile LONG *)(v4 + 72);
  if ( a2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockExclusive(v11, a2);
  if ( v10 )
    MiReleaseControlAreaWaiters(v10, v12, v13);
  v14 = FsRtlAcquireFileForCcFlushEx(v9);
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  *(_QWORD *)(a3 + 72) = 0LL;
  LOBYTE(v17) = v15;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 112), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v18 = (volatile LONG *)(v4 + 72);
    if ( v15 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    else
      ExReleaseSpinLockExclusive(v18, v15);
    if ( v14 >= 0 )
      FsRtlReleaseFileForCcFlush(v9);
    a1[10] = 0LL;
    MiDeleteControlArea((char *)v4);
    v19 = -1073741797;
    goto LABEL_15;
  }
  ++*(_DWORD *)(v4 + 76);
  if ( v14 < 0 )
  {
    v19 = -1073740748;
LABEL_15:
    ObfDereferenceObjectWithTag(v9, 0x63536D4Du);
    return v19;
  }
  *a4 = v9;
  result = MiTranslateSubsectionState(a1, 0LL, v16, v17);
  if ( (int)result >= 0 )
  {
    v22 = (volatile LONG *)(v4 + 72);
    if ( v21 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v22);
    else
      ExReleaseSpinLockExclusive(v22, v21);
    return 0LL;
  }
  return result;
}
