/*
 * XREFs of MiGetExtendedStandbyPage @ 0x1407084F4
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140466660 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 */

void __fastcall MiGetExtendedStandbyPage(__int64 a1, __int16 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rdi
  __int64 SpecialPurposeMemoryPartitionForCaching; // rax
  int v8; // edx
  __int64 Page; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  if ( !*a4 )
  {
    SpecialPurposeMemoryPartitionForCaching = MiGetSpecialPurposeMemoryPartitionForCaching(
                                                a1,
                                                0LL,
                                                a3,
                                                (struct _KLOCK_ENTRIES *)a4);
    v4 = SpecialPurposeMemoryPartitionForCaching;
    if ( !SpecialPurposeMemoryPartitionForCaching )
    {
      *a4 = 1LL;
      return;
    }
    *a4 = SpecialPurposeMemoryPartitionForCaching;
  }
  if ( v4 > 1
    && a4[1] == -1LL
    && (a2 & 0x200) == 0
    && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v4, 0) >= 0x100 || *(_QWORD *)(v4 + 22464) >= 0x4000uLL) )
  {
    v10 = 0LL;
    MiInitializePageColorBase(0LL, 3, 0, (__int64)&v10);
    v8 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v10, 1u);
    Page = MiGetPage(v4, DWORD2(v10) & 0xFFFFFF00 | v8, 1u);
    if ( Page == -1 )
      *a4 = 1LL;
    a4[1] = Page;
  }
}
