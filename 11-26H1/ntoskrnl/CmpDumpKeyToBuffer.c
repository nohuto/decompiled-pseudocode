/*
 * XREFs of CmpDumpKeyToBuffer @ 0x140C5E12C
 * Callers:
 *     CmSaveKeyToBuffer @ 0x140C5E010 (CmSaveKeyToBuffer.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140C5E25C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5E46C (HvSnapshotHiveToOffsetArray.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C5ED4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmpDumpKeyToBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // rdx
  int IsKeyBodyEligibleForDump; // ebx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]
  unsigned int v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+44h] [rbp-14h]

  v18[1] = 0;
  v21 = 0;
  CmpLockRegistry(a1, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 8);
  CmpLockKcbShared(v7);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v7);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v7 + 66) )
    {
      IsKeyBodyEligibleForDump = -1073741637;
    }
    else
    {
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(*(_QWORD *)(v7 + 32) + 72LL), v8, v10, v11);
      v12 = *(_QWORD *)(v7 + 32);
      v13 = *(_DWORD *)(v12 + 280) + 4096;
      if ( *a4 >= v13 )
      {
        CmLockHiveSecurityShared(v12);
        IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v7 + 32), 3);
        CmUnlockHiveSecurity(*(_QWORD *)(v7 + 32));
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          v17 = *(_QWORD *)(v7 + 32);
          v20 = *a4;
          v18[0] = 0;
          v19 = a3;
          IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(v17, v16, v18);
          if ( IsKeyBodyEligibleForDump >= 0 )
          {
            CmSiRWLockReleaseExclusive((struct _KTHREAD *)(*(_QWORD *)(v7 + 32) + 72LL));
            IsKeyBodyEligibleForDump = 0;
            goto LABEL_7;
          }
        }
      }
      else
      {
        *a4 = v13;
        IsKeyBodyEligibleForDump = -1073741789;
      }
      CmSiRWLockReleaseExclusive((struct _KTHREAD *)(*(_QWORD *)(v7 + 32) + 72LL));
    }
  }
LABEL_7:
  CmpUnlockKcb(v7);
  CmpUnlockRegistry(v14);
  return (unsigned int)IsKeyBodyEligibleForDump;
}
