/*
 * XREFs of MiWalkPageTables @ 0x140328AB0
 * Callers:
 *     MiDeleteSystemPageTables @ 0x1402A3CCC (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiClearNonPagedPtesSlow @ 0x140365970 (MiClearNonPagedPtesSlow.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403C4EDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     MmRemoveExecuteGrants @ 0x1404D543C (MmRemoveExecuteGrants.c)
 *     MiWalkResetCommitPages @ 0x1406E9FCC (MiWalkResetCommitPages.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EF63C (MmUnlockPhysicalPagesByVa.c)
 *     MiDiscardVirtualMemory @ 0x1406F3E98 (MiDiscardVirtualMemory.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 *     MiCombineWorkingSet @ 0x140709248 (MiCombineWorkingSet.c)
 *     MiConvertHiberPhasePages @ 0x140C06CF4 (MiConvertHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140C06E58 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C06EE0 (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF77EC (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140CF9DF4 (MiMarkLargePageMappings.c)
 *     MxWalkBootPageTables @ 0x140CFE990 (MxWalkBootPageTables.c)
 *     MiCreateInitialSystemWsles @ 0x140CFECBC (MiCreateInitialSystemWsles.c)
 *     MiCountBootDriverRegions @ 0x140CFF904 (MiCountBootDriverRegions.c)
 *     MiFillGapAddresses @ 0x140CFF990 (MiFillGapAddresses.c)
 * Callees:
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiInitializeWalkBounds @ 0x140328810 (MiInitializeWalkBounds.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140328DB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 */

__int64 __fastcall MiWalkPageTables(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  unsigned int i; // r15d
  unsigned int v6; // ebx
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 result; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-70h]
  _QWORD v24[6]; // [rsp+50h] [rbp-58h] BYREF

  if ( (*(_DWORD *)a1 & 0x10000) == 0 )
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(stru_140E2ED08.ThreadLock
                                     + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 174LL));
  if ( !*(_BYTE *)(a1 + 8) )
    *(_BYTE *)(a1 + 8) = 15;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 1;
  if ( v2 )
  {
    if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v2 = 0xFFFFF6FB7DBEDF70uLL;
      *(_QWORD *)(a1 + 64) = 0xFFFFF6FB7DBEDF70uLL;
    }
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *(__m128i *)v22 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    else
    {
      do
      {
        if ( v2 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v2 = (__int64)(v2 << 25) >> 16;
      }
      while ( v2 >= 0xFFFFF68000000000uLL );
      *(__m128i *)&v22[8] = _mm_load_si128((const __m128i *)&_xmm);
      v23 = v2 - 1;
      v3 = 2;
      *(_QWORD *)v22 = v2;
    }
  }
  else
  {
    *(_OWORD *)v22 = *(_OWORD *)(a1 + 40);
  }
  v4 = MiInitializeWalkBounds(a1, v24);
  for ( i = 0; i < v3; ++i )
  {
    v6 = 0;
    v7 = (unsigned __int64 *)&v22[16 * i];
    while ( v6 < v4 )
    {
      v8 = *v7;
      v9 = v7[1];
      v10 = v24[2 * v6 + 1];
      if ( *v7 <= v10 )
      {
        v11 = v24[2 * v6];
        if ( v9 >= v11 )
        {
          if ( v8 < v11 )
            v8 = v24[2 * v6];
          if ( v9 > v10 )
            v9 = v24[2 * v6 + 1];
          v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 96) = v12;
          v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 104) = v13;
          v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 112) = v14;
          v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 120) = v15;
          v16 = (v9 >> 9) & 0x7FFFFFFFF8LL;
          *(_QWORD *)(a1 + 128) = v16 - 0x98000000000LL;
          v17 = (((unsigned __int64)(v16 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 136) = v17;
          v18 = (v17 >> 9) & 0x7FFFFFFFF8LL;
          *(_QWORD *)(a1 + 144) = v18 - 0x98000000000LL;
          *(_QWORD *)(a1 + 152) = (((unsigned __int64)(v18 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = *(_DWORD *)a1;
          v20 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE3;
          *(_QWORD *)(a1 + 72) = 0LL;
          *(_DWORD *)(a1 + 4) = v20;
          if ( (v19 & 0x10000) != 0 )
          {
            MiWalkPageTablesRecursivelyNoSynch(a1, v15, 3LL);
          }
          else
          {
            if ( (v19 & 4) != 0 )
            {
              *(_DWORD *)(a1 + 4) = v20 | 1;
              MiReacquireWalkLocks(a1, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
            }
            else
            {
              *(_QWORD *)(a1 + 56) = 0LL;
              *(_DWORD *)(a1 + 4) = v20 & 0xFFFFFFFE;
            }
            MiWalkPageTablesRecursively(a1, v15, 3LL);
          }
          result = (*(_DWORD *)(a1 + 4) >> 18) & 7;
          if ( (unsigned int)result >= 4 )
            return result;
        }
      }
      ++v6;
    }
  }
  return 4LL;
}
