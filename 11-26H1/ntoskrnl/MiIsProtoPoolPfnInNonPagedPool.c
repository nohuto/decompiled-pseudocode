/*
 * XREFs of MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250
 * Callers:
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031E024 (MiRelockProtoPoolPage.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C (MiSoftFaultClusterTradeReleaseLocks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProtoPoolPfnInNonPagedPool(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    return 1LL;
  v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  return v1 >= 0xFFFF800000000000uLL && byte_140E37BF0[((v1 >> 39) & 0x1FF) - 256] == 4;
}
