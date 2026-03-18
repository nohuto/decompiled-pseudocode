/*
 * XREFs of MiMarkKernelPageTablePages @ 0x140C00C48
 * Callers:
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  int v1; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v2; // [rsp+24h] [rbp-C4h]
  char v3; // [rsp+29h] [rbp-BFh]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v5; // [rsp+48h] [rbp-A0h]
  __int64 v6; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v7)(__int64, unsigned __int64 *); // [rsp+C8h] [rbp-20h]

  memset_0(&v1, 0, 0xC0uLL);
  v1 = 4225;
  v2 = v2 & 0xFFFFFE3F | 0x40;
  v7 = MiMarkKernelPageTablePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v3 = 17;
  v5 = 0xFFFF800000000000uLL;
  v6 = -1LL;
  return MiWalkPageTables((__int64)&v1);
}
