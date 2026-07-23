/*
 * XREFs of ExProtectPoolEx @ 0x14024E7DC
 * Callers:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x14024F5F4 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 *     CmpProtectPool @ 0x14025017C (CmpProtectPool.c)
 *     SmHpChunkHeapProtect @ 0x1402510C4 (SmHpChunkHeapProtect.c)
 *     CmpProtectPoolEx @ 0x1404C3198 (CmpProtectPoolEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  char *v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  char *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  unsigned int v19; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v7 = 0;
  v8 = 40543 * (a1 >> 12);
  LOWORD(v9) = 0;
  LOWORD(v10) = 128;
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
    return 0LL;
  }
  v12 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  v13 = 32LL * (((_DWORD)PoolBigPageTableSize - 1) & ((unsigned int)v8 ^ HIDWORD(v8)));
  v14 = a3 + a2 - 1;
  v15 = (char *)PoolBigPageTable + v13;
  while ( 1 )
  {
    do
    {
      v16 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 1) == 0 && a2 >= v16 )
      {
        v17 = *((_QWORD *)v15 + 2);
        if ( v14 < v17 + v16
          && ((v17 & 0xFFF) == 0 || ((v14 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v17 + v16 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          v18 = *(_QWORD *)v15;
          v10 = (unsigned __int64)*((unsigned int *)v15 + 3) >> 8;
          v9 = *((_QWORD *)v15 + 2);
          goto LABEL_12;
        }
      }
      v15 += 32;
    }
    while ( v15 < v12 );
    if ( v7 == 1 )
      break;
    v15 = (char *)PoolBigPageTable;
    v7 = 1;
    v12 = (char *)PoolBigPageTable + v13;
  }
  v18 = 0LL;
LABEL_12:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  __writecr8(v11);
  if ( !v18 )
    return 0LL;
  v19 = v9 & 0xFFF;
  if ( v19 )
  {
    if ( (v10 & 0x400) == 0 || v19 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4, v12);
}
