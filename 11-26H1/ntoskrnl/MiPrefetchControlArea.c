/*
 * XREFs of MiPrefetchControlArea @ 0x140A58548
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiValidateSectionMap @ 0x14099CAFC (MiValidateSectionMap.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiGetInPageAutoBoostLock @ 0x14039A2BC (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A1D7C (MiDereferenceInPageAutoBoostLock.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6, char *P)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v12; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  struct _KTHREAD *v14; // rbp
  AutoBoost *v15; // rax
  void *v16; // rdx
  unsigned __int64 v17; // rsi
  int List; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  char *v22; // rcx

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (struct _KTHREAD *)MiGetInPageAutoBoostLock();
  v14 = v12;
  if ( v12 )
  {
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v13);
    v17 = (unsigned __int64)v15;
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v16);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    List = MiPfPrepareSequentialReadList(0, a1, a2, 0, a3, a4, a6, (__int64)v14, (__int64)&P);
    if ( List >= 0 && P )
    {
      ++BYTE6(CurrentThread[1].Queue);
      *((_DWORD *)P + 52) = 0;
      v21 = MiPfPutPagesInTransition((__int64)P, 0LL, a5, 0LL);
      v22 = P;
      List = v21;
      if ( v21 >= 0 && *((char **)P + 28) != P + 224 )
      {
        MiPfExecuteReadList(P, a5, a6, 0LL);
        MiPfCompletePrefetchIos((ULONG_PTR *)P + 28, 0LL, 0LL);
        v22 = P;
      }
      MiReleaseReadListResources(v22);
      --BYTE6(CurrentThread[1].Queue);
      ExFreePoolWithTag(P, 0);
    }
    if ( v17 )
      KeAbPostReleaseEx(v14, v17, v19, v20);
    MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v14->Header.Lock);
  }
  else
  {
    List = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)List;
}
