/*
 * XREFs of MiFreeLargeZeroPages @ 0x1402A4B50
 * Callers:
 *     MiCleanupPageTablePages @ 0x1402A4AFC (MiCleanupPageTablePages.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1406F2C10 (MiAllocateFastLargePagesForMdl.c)
 *     MiFreeCacheSlice @ 0x140716848 (MiFreeCacheSlice.c)
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnShareCount @ 0x1403CDFF0 (MiSetPfnShareCount.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rsi
  BOOL v5; // r14d
  __int64 v6; // rbp
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v18; // rdx
  int v19; // r10d
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+88h] [rbp+10h]
  int v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 *i; // [rsp+98h] [rbp+20h]

  v22 = a2;
  v3 = 6;
  if ( KeGetCurrentIrql() != 2 )
    v3 = 2;
  v4 = 0LL;
  v5 = a3 != 0;
  v6 = 0LL;
  do
  {
    v7 = (__int64 *)(a2 + 24 * v6);
    for ( i = v7; ; v7 = i )
    {
      v8 = *v7;
      if ( *v7 == 0x3FFFFFFFFFLL )
        break;
      v10 = 48 * v8;
      v11 = 48 * v8 - 0x220000000000LL;
      MiSimpleUnlinkPageEx((__int64)v7, v8);
      MiSetPfnShareCount(v11, 1LL);
      if ( (_DWORD)v6 == 3 )
      {
        MiReleaseFreshPage(v11, v12, v13);
        ++v4;
      }
      else
      {
        v20 = MiPageSizes[v6];
        v14 = v10 / 48;
        MiUpdateLargePageBitMap(a1, v10 / 48, v20, v3);
        if ( (v3 & 4) != 0 )
        {
          CurrentIrql = 2;
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v23);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v15) = 2;
            LOBYTE(v16) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v16, v15);
          }
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v23);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
        }
        if ( (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
        {
          v19 = *(_DWORD *)(v11 + 32);
          if ( (v19 & 0x80000) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v11)
            && (v19 & 0x100000) == 0
            && (*(_DWORD *)(v11 + 16) & 8) != 0 )
          {
            *(_QWORD *)(v11 + 16) &= ~8uLL;
          }
          *(_DWORD *)(v11 + 32) = v19 & 0xFFEFFFFF;
        }
        v18 = (unsigned int)(v5 + 1);
        *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
        *(_DWORD *)(v11 + 32) &= 0xFFFF0000;
        if ( (*(_QWORD *)(v11 + 40) & 0x20000000000LL) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPossiblyBadPage(v14, v18);
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(v14, v18);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        v4 += v20;
      }
    }
    a2 = v22;
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 4 );
  return v4;
}
