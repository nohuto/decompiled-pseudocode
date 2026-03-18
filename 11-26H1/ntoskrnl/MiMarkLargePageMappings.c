/*
 * XREFs of MiMarkLargePageMappings @ 0x140CF3A74
 * Callers:
 *     MiMarkLargePageRanges @ 0x140CF3BAC (MiMarkLargePageRanges.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-C4h]
  char v6; // [rsp+29h] [rbp-BFh]
  char *v7; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v8; // [rsp+48h] [rbp-A0h]
  __int64 v9; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v10)(); // [rsp+C8h] [rbp-20h]

  memset_0(&v4, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v4 = 4359;
  v9 = -1LL;
  v5 = v5 & 0xFFFFFE3F | 0x40;
  v8 = 0xFFFF800000000000uLL;
  v7 = AnyMultiplexedVm;
  v10 = MiMarkLargePagePte;
  v6 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v1, v2);
  MiWalkPageTables((__int64)&v4);
  LOBYTE(v3) = v6;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v3);
}
