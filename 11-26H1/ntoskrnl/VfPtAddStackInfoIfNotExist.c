/*
 * XREFs of VfPtAddStackInfoIfNotExist @ 0x140C2FAC8
 * Callers:
 *     ViPtProcessApt @ 0x140C307D0 (ViPtProcessApt.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14064589C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x14064590C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140645968 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406459D4 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall VfPtAddStackInfoIfNotExist(void *Src, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rdi
  _QWORD *inserted; // rax
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Buffer[6]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  char v17[408]; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v13 = 0LL;
  memset_0(Buffer, 0, 0x1B8uLL);
  Buffer[0] = a4;
  v9 = a5;
  v15 = a5;
  Buffer[1] = a2;
  v16 = 0LL;
  memmove(v17, Src, 0x190uLL);
  if ( !ViPoolStackInfoAvlInitialized )
    return 0LL;
  ViPtInitializeLockContext((__int64)&v13);
  ViPtRaiseIrqlSafe((__int64)&v13);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  inserted = RtlInsertElementGenericTableAvl(&ViPoolStackInfoAvl, Buffer, 0x1B8u, &NewElement);
  v12 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( MmDeterminePoolType(a3) == 64 )
        *((_DWORD *)v12 + 2) |= 0x10u;
      *((_DWORD *)v12 + 2) |= 1u;
      ++ViPoolStackInfoAllocCount;
      *((_DWORD *)v12 + 3) = 1;
    }
    else
    {
      inserted[3] += v9;
      ++*((_DWORD *)inserted + 3);
    }
  }
  else
  {
    ++ViPoolStackInfoFailureCount;
  }
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  ViPtCleanupLockContext((__int64)&v13);
  return v12;
}
