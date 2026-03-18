/*
 * XREFs of CmDumpKeyToFile @ 0x14084D1E8
 * Callers:
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 * Callees:
 *     CmpFreeOffsetArray @ 0x14085A7E0 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x14085AACC (CmpWriteOffsetArrayToFile.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x140B3BD78 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140C5825C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5846C (HvSnapshotHiveToOffsetArray.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140C58B30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C58D4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmDumpKeyToFile(__int64 a1, char a2, void *a3)
{
  ULONG_PTR v6; // rbx
  char v7; // bp
  int IsKeyBodyEligibleForDump; // edi
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v18[2]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v19 = 0;
  *(_QWORD *)v18 = 0LL;
  CmpLockRegistry();
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1;
  CmpLockKcbShared(v6);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v6);
  if ( IsKeyBodyEligibleForDump < 0 )
    goto LABEL_13;
  if ( *(_WORD *)(v6 + 66) )
  {
    CmpUnlockKcb(v6);
    CmpUnlockRegistry(v9);
    LOBYTE(v10) = a2;
    return (unsigned int)CmSaveKey(a1, a3, 5LL, v10);
  }
  HvLockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
  CmLockHiveSecurityShared(*(_QWORD *)(v6 + 32));
  IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v6 + 32), 3);
  CmUnlockHiveSecurity(*(_QWORD *)(v6 + 32));
  if ( IsKeyBodyEligibleForDump < 0 )
    goto LABEL_12;
  v11 = HvAllocateOffsetArraysForHiveSnapshot(*(_QWORD *)(v6 + 32), &v19, v18, &v20);
  v13 = *(_QWORD *)v18;
  IsKeyBodyEligibleForDump = v11;
  if ( v11 >= 0 )
  {
    IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v6 + 32), v12, *(_QWORD *)v18);
    if ( IsKeyBodyEligibleForDump >= 0 )
    {
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
      CmpUnlockKcb(v6);
      CmpUnlockRegistry(v14);
      v7 = 0;
      IsKeyBodyEligibleForDump = CmpWriteOffsetArrayToFile(v15, v19, v13, v20, a3);
      if ( IsKeyBodyEligibleForDump >= 0 )
        IsKeyBodyEligibleForDump = 0;
    }
  }
  if ( v13 )
    CmpFreeOffsetArray((unsigned int)v19, v13);
  if ( v7 )
  {
LABEL_12:
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
LABEL_13:
    CmpUnlockKcb(v6);
    CmpUnlockRegistry(v16);
  }
  return (unsigned int)IsKeyBodyEligibleForDump;
}
