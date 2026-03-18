/*
 * XREFs of MiPrefetchControlArea @ 0x140A4F258
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     MiValidateSectionMap @ 0x1409CBB1C (MiValidateSectionMap.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiGetInPageAutoBoostLock @ 0x14039855C (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x14039FC90 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A001C (MiDereferenceInPageAutoBoostLock.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x140A51868 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x140A52550 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6, char *P)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *v16; // rbp
  AutoBoost *v17; // rax
  void *v18; // rdx
  unsigned __int64 v19; // rsi
  int List; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  char *v24; // rcx

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (struct _KTHREAD *)MiGetInPageAutoBoostLock();
  v16 = v12;
  if ( v12 )
  {
    v17 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v15);
    v19 = (unsigned __int64)v17;
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v18);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    List = MiPfPrepareSequentialReadList(0, a1, a2, 0, a3, a4, a6, (__int64)v16, (__int64)&P);
    if ( List >= 0 && P )
    {
      ++BYTE6(CurrentThread[1].Queue);
      *((_DWORD *)P + 52) = 0;
      v23 = MiPfPutPagesInTransition((__int64)P, 0LL, a5, 0LL);
      v24 = P;
      List = v23;
      if ( v23 >= 0 && *((char **)P + 28) != P + 224 )
      {
        MiPfExecuteReadList(P, a5, a6, 0LL);
        MiPfCompletePrefetchIos((ULONG_PTR *)P + 28, 0LL, 0LL);
        v24 = P;
      }
      MiReleaseReadListResources(v24);
      --BYTE6(CurrentThread[1].Queue);
      ExFreePoolWithTag(P, 0);
    }
    if ( v19 )
      KeAbPostReleaseEx(v16, v19, v21, v22);
    MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v16->Header.Lock);
  }
  else
  {
    List = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14);
  return (unsigned int)List;
}
