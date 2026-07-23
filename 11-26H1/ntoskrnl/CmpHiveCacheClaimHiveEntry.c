/*
 * XREFs of CmpHiveCacheClaimHiveEntry @ 0x140867F94
 * Callers:
 *     CmpMachineHiveCacheClaimEntry @ 0x14085DC80 (CmpMachineHiveCacheClaimEntry.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiWaitForSingleEvent @ 0x1404C9C58 (CmSiWaitForSingleEvent.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1408682FC (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140868374 (CmpHiveCacheEntryLockRelease.c)
 */

__int64 __fastcall CmpHiveCacheClaimHiveEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi

  if ( a1 && a4 )
  {
    if ( *(_DWORD *)(a1 + 336) != 1 )
    {
      CmSiWaitForSingleEvent(a1 + 272);
      CmpHiveCacheEntryLockAcquire(a1);
      if ( *(_DWORD *)(a1 + 168) == 2 )
      {
        *(_QWORD *)a4 = *(_QWORD *)(a1 + 368);
        *(_BYTE *)(a4 + 8) = *(_BYTE *)(a1 + 380);
        v7 = 0;
        *(_QWORD *)(a1 + 368) = 0LL;
        goto LABEL_11;
      }
      v7 = -1073741431;
      SetFailureLocation(a5, 0, 42, -1073741431, 32);
LABEL_10:
      if ( *(_DWORD *)(a1 + 168) == 4 )
      {
LABEL_12:
        CmpHiveCacheEntryLockRelease(a1);
        return v7;
      }
LABEL_11:
      *(_DWORD *)(a1 + 168) = 3;
      goto LABEL_12;
    }
    v7 = -1073741822;
LABEL_9:
    CmpHiveCacheEntryLockAcquire(a1);
    goto LABEL_10;
  }
  v7 = -1073741811;
  SetFailureLocation(a5, 0, 42, -1073741811, 16);
  if ( a1 )
    goto LABEL_9;
  return v7;
}
