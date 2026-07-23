/*
 * XREFs of MiBackgroundZeroNodePages @ 0x140491210
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiZeroRemainOnProcessor @ 0x1402F5BCC (MiZeroRemainOnProcessor.c)
 *     MiGetSinglePageToZero @ 0x1403CE6F0 (MiGetSinglePageToZero.c)
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiZeroThreadContextSetExiting @ 0x140476960 (MiZeroThreadContextSetExiting.c)
 *     MiSetZeroPageThreadPriority @ 0x1404769A4 (MiSetZeroPageThreadPriority.c)
 *     MiPeriodicZeroingSufficient @ 0x1404811D8 (MiPeriodicZeroingSufficient.c)
 *     MiColdPageSizeSupported @ 0x14048B510 (MiColdPageSizeSupported.c)
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 *     MiZeroThreadEnterWaitState @ 0x1404E6364 (MiZeroThreadEnterWaitState.c)
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 *     MiRemoveThreadFromEngineLists @ 0x140502E5C (MiRemoveThreadFromEngineLists.c)
 *     MiMapBackgroundPageToZero @ 0x1405217B4 (MiMapBackgroundPageToZero.c)
 *     MiDeleteZeroThreadContext @ 0x140532C28 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiBackgroundZeroNodePages(_QWORD *P)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  KIRQL v8; // r14
  volatile LONG *v9; // rcx
  int v10; // r14d
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  KIRQL v15; // bl
  int v16; // r15d
  volatile LONG *v17; // rcx
  bool v18; // zf
  int BackgroundHugePageToZero; // eax
  int v20; // ebx
  KIRQL v21; // bl
  volatile LONG *v22; // rcx
  KIRQL v23; // bl
  volatile LONG *v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-D8h]
  __int64 v27; // [rsp+28h] [rbp-D0h]
  _BYTE v28[144]; // [rsp+30h] [rbp-C8h] BYREF

  memset_0(v28, 0, sizeof(v28));
  v2 = P[10];
  LODWORD(v3) = 0;
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  v5 = *(_QWORD *)(v2 + 136);
  v6 = *(_QWORD *)(v5 + 48);
  v7 = *(_QWORD *)(v6 + 16) + 56320LL * *(unsigned int *)(v5 + 56);
  v27 = v7;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 14200));
  if ( !P[9] )
  {
    ObfReferenceObjectWithTag(CurrentThread, 0x655A6D4Du);
    P[9] = CurrentThread;
  }
  *((_DWORD *)P + 32) |= 1u;
  if ( (P[16] & 0x10) == 0 )
    v26 = MiSetZeroPageThreadPriority((__int64)P, 0, 1LL);
  v9 = (volatile LONG *)(v7 + 14200);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockExclusive(v9, v8);
  while ( 2 )
  {
    v10 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
          if ( (v11 & 0x400) == 0 )
            *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v11 | 0x400;
          if ( !P[52] && MiColdPageSizeSupported(1u, v7) )
          {
            MiInitializePageHeatList((__int64)v28, 0, v12, v12 + 15);
            P[52] = v28;
          }
          v13 = 0;
          if ( !v10 )
            v13 = v3;
          v10 = 0;
          v3 = v13;
          v14 = *((_DWORD *)P + 32);
          if ( (v14 & 2) != 0 || (v14 & 4) != 0 || stru_140E366D8.SystemCallNumber )
            goto LABEL_39;
          if ( !(unsigned int)MiZeroRemainOnProcessor((__int64)P, (P[16] & 0x20) == 0) )
          {
            v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 184) + 14200LL));
            v16 = MiSelectBestZeroingProcessor(v2, (__int64)P);
            v17 = (volatile LONG *)(*(_QWORD *)(v2 + 184) + 14200LL);
            if ( v15 == 17 )
              ExReleaseSpinLockExclusiveFromDpcLevel(v17);
            else
              ExReleaseSpinLockExclusive(v17, v15);
            v18 = v16 == 0;
            v7 = v27;
            if ( v18 )
              goto LABEL_39;
          }
          ++*(_DWORD *)(v2 + 268);
          if ( (_DWORD)v3 )
          {
            P[4] = 0LL;
            P[3] = 0LL;
            if ( !MiGetSinglePageToZero(
                    (__int64)P,
                    *(_QWORD *)(P[10] + 184LL),
                    (volatile signed __int32 *)P + v3 + 84,
                    v3) )
              break;
            BackgroundHugePageToZero = MiMapBackgroundPageToZero(P, (unsigned int)v3);
          }
          else
          {
            BackgroundHugePageToZero = MiGetBackgroundHugePageToZero(v6, P);
          }
          if ( !BackgroundHugePageToZero )
            break;
          v20 = MiBackgroundZeroPage(v6, (__int64)P);
          MiBackgroundZeroComplete(P);
          if ( v20 || *(_DWORD *)(v6 + 92) || HIDWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink) )
            goto LABEL_41;
        }
        if ( (unsigned int)v3 >= 3 )
          break;
        LODWORD(v3) = v3 + 1;
      }
      if ( !(unsigned int)MiPeriodicZeroingSufficient(v7) )
        break;
LABEL_39:
      v10 = MiZeroThreadEnterWaitState(P);
      if ( !v10 )
        goto LABEL_40;
    }
    if ( !*(_DWORD *)(v6 + 92) && !HIDWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink) )
      continue;
    break;
  }
LABEL_40:
  ++*(_DWORD *)(v2 + 324);
LABEL_41:
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 184) + 14200LL));
  MiZeroThreadContextSetExiting((__int64)P);
  v22 = (volatile LONG *)(*(_QWORD *)(v2 + 184) + 14200LL);
  if ( v21 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v22);
  else
    ExReleaseSpinLockExclusive(v22, v21);
  MiZeroThreadStopZeroing(P);
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 184) + 14200LL));
  MiRemoveThreadFromEngineLists(P);
  if ( v26 )
    MiSetZeroPageThreadPriority((__int64)P, v26, 1LL);
  v24 = (volatile LONG *)(*(_QWORD *)(v2 + 184) + 14200LL);
  if ( v23 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
  else
    ExReleaseSpinLockExclusive(v24, v23);
  return MiDeleteZeroThreadContext(P);
}
