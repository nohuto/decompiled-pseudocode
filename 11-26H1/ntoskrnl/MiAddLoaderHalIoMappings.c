/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140CF77EC
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  _DWORD v8[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v9; // [rsp+29h] [rbp-BFh]
  char *v10; // [rsp+40h] [rbp-A8h]
  __int64 v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v13)(); // [rsp+C8h] [rbp-20h]

  memset_0(v8, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8[0] = 4103;
  v11 = a1;
  v13 = MiAddLoaderHalIoPte;
  v12 = a2;
  v10 = AnyMultiplexedVm;
  v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v5, v6);
  MiWalkPageTables((__int64)v8);
  LOBYTE(v7) = v9;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
}
