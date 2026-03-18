/*
 * XREFs of MiIsProtoPoolPfnInNonPagedPool @ 0x14031C220
 * Callers:
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031BFF4 (MiRelockProtoPoolPage.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140712350 (MiSoftFaultClusterTradeAcquireLocks.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x140712784 (MiSoftFaultClusterTradeReleaseLocks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProtoPoolPfnInNonPagedPool(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    return 1LL;
  v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  return v1 >= 0xFFFF800000000000uLL && byte_140E37A70[((v1 >> 39) & 0x1FF) - 256] == 4;
}
