/*
 * XREFs of MiResolveCachedPageHardFault @ 0x140339B7C
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiGetPageForSystemCache @ 0x140339D50 (MiGetPageForSystemCache.c)
 *     MiPfnZeroingNeeded @ 0x14033AAB0 (MiPfnZeroingNeeded.c)
 *     MiReferenceControlAreaPfn @ 0x14036CB90 (MiReferenceControlAreaPfn.c)
 *     MiProtectionToCacheAttribute @ 0x140372270 (MiProtectionToCacheAttribute.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
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
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rdi
  unsigned int Flink; // ecx
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // eax
  ULONG_PTR v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // edx
  _QWORD *SubsectionFromPte; // rax

  v9 = a2;
  PageForSystemCache = MiGetPageForSystemCache(a6, a2, *(_QWORD *)(a1 + 32) != 0LL);
  v11 = PageForSystemCache;
  if ( PageForSystemCache == -1 )
  {
    if ( (v9 & 2) == 0 )
    {
      MiReleaseCachedPageLocks(a1);
      CurrentThread = KeGetCurrentThread();
      v13 = (__int64)(a4 - a3) >> 3;
      Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
      v15 = BYTE4(CurrentThread[1].Queue);
      BYTE4(CurrentThread[1].Queue) = 1;
      v16 = v15 + 2 * Flink;
      if ( (unsigned int)v13 > Flink )
      {
        if ( (unsigned int)v13 > 0xF )
          LODWORD(v13) = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13;
      }
      v17 = MmAccessFault(0LL, (__int64)(a3 << 25) >> 16);
      if ( v17 < 0 && *(int *)(a1 + 168) >= 0 )
        *(_DWORD *)(a1 + 168) = v17;
      BYTE4(CurrentThread[1].Queue) = v16 & 1;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v16 >> 1;
      MiAcquireCachedPageLocks(a1, BugCheckParameter4);
    }
    return 3221225495LL;
  }
  else
  {
    v19 = 48 * PageForSystemCache - 0x220000000000LL;
    v20 = (a6 >> 5) & 0x1F;
    v21 = MiProtectionToCacheAttribute(v20);
    if ( (unsigned int)MiPfnZeroingNeeded(v19, v21, v22) )
    {
      MiZeroPhysicalPage(0LL, v11, 0, v23);
      *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    SubsectionFromPte = (_QWORD *)MiGetSubsectionFromPte(a6);
    MiReferenceControlAreaPfn(*SubsectionFromPte, SubsectionFromPte, 1LL);
    MiInitializePfn(v19, (ULONG_PTR)BugCheckParameter4, v20, 18);
    *BugCheckParameter4 = MiMakeValidPte(a3, v11, (unsigned int)v20 | 0x20000000);
    return 0LL;
  }
}
