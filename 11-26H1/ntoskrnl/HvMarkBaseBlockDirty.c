/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140AE37FC
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     HvHiveStartFileBacked @ 0x140AC226C (HvHiveStartFileBacked.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14046ECD0 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x140AF8000 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    v2 = MEMORY[0xFFFFF780000003B0];
    v3 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    *(_QWORD *)(a1 + 4144) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    CmpIssueNewDirtyCallback(v3, v2, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
  }
  v4 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v4 & 2) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 4144) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v5, 0);
  }
}
