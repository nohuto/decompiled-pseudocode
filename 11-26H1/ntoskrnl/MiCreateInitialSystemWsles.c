/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140CFECBC
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rdi
  __int64 v1; // r8
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-C8h] BYREF
  int v7; // [rsp+24h] [rbp-C4h]
  char v8; // [rsp+29h] [rbp-BFh]
  char *v9; // [rsp+40h] [rbp-A8h]
  __int64 v10; // [rsp+48h] [rbp-A0h]
  __int64 v11; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v12)(__int64, _QWORD *, int); // [rsp+C8h] [rbp-20h]

  memset_0(&v6, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 &= 0xFFFFFE3F;
  v10 = qword_140E37E00;
  v11 = qword_140E37E08 - 1 + qword_140E37E00;
  v12 = MiCreatePteWsle;
  v9 = AnyMultiplexedVm;
  v6 = 7;
  v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v1);
  v2 = MiWalkPageTables((__int64)&v6);
  LOBYTE(v3) = v8;
  v4 = v2;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v3);
  return v4 != 5;
}
