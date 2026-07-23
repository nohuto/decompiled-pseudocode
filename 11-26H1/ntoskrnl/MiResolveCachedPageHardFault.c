/*
 * XREFs of MiResolveCachedPageHardFault @ 0x14033BBFC
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiGetPageForSystemCache @ 0x14033BDD0 (MiGetPageForSystemCache.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiReferenceControlAreaPfn @ 0x14036E930 (MiReferenceControlAreaPfn.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 */

__int64 __fastcall MiResolveCachedPageHardFault(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *BugCheckParameter4,
        unsigned __int64 a6)
{
  char v9; // r15
  __int64 PageForSystemCache; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rdi
  unsigned int Flink; // ecx
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  ULONG_PTR v21; // rdi
  unsigned __int64 v22; // rbp
  unsigned int v23; // eax
  __int64 v24; // r8
  int v25; // edx
  _QWORD *SubsectionFromPte; // rax

  v9 = a2;
  PageForSystemCache = MiGetPageForSystemCache(a6, a2, *(_QWORD *)(a1 + 32) != 0LL);
  v13 = PageForSystemCache;
  if ( PageForSystemCache == -1 )
  {
    if ( (v9 & 2) == 0 )
    {
      MiReleaseCachedPageLocks(a1, v11, v12);
      CurrentThread = KeGetCurrentThread();
      v15 = (__int64)(a4 - a3) >> 3;
      Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
      v17 = BYTE4(CurrentThread[1].Queue);
      BYTE4(CurrentThread[1].Queue) = 1;
      v18 = v17 + 2 * Flink;
      if ( (unsigned int)v15 > Flink )
      {
        if ( (unsigned int)v15 > 0xF )
          LODWORD(v15) = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v15;
      }
      v19 = MmAccessFault(0LL, (__int64)(a3 << 25) >> 16);
      if ( v19 < 0 && *(int *)(a1 + 168) >= 0 )
        *(_DWORD *)(a1 + 168) = v19;
      BYTE4(CurrentThread[1].Queue) = v18 & 1;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v18 >> 1;
      MiAcquireCachedPageLocks(a1, BugCheckParameter4);
    }
    return 3221225495LL;
  }
  else
  {
    v21 = 48 * PageForSystemCache - 0x220000000000LL;
    v22 = (a6 >> 5) & 0x1F;
    v23 = MiProtectionToCacheAttribute(v22);
    if ( (unsigned int)MiPfnZeroingNeeded(v21, v23, v24) )
    {
      MiZeroPhysicalPage(0LL, v13, 0, v25);
      *(_QWORD *)(v21 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    SubsectionFromPte = (_QWORD *)MiGetSubsectionFromPte(a6);
    MiReferenceControlAreaPfn(*SubsectionFromPte, SubsectionFromPte, 1LL);
    MiInitializePfn(v21, (ULONG_PTR)BugCheckParameter4, v22, 18);
    *BugCheckParameter4 = MiMakeValidPte(a3, v13, (unsigned int)v22 | 0x20000000);
    return 0LL;
  }
}
