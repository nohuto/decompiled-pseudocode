/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1406F6C48
 * Callers:
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405D18B0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     MmGetDumpRange @ 0x1406F6934 (MmGetDumpRange.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x1406EA2E0 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  __int64 v2; // rdx
  char *AnyMultiplexedVm; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-69h] BYREF
  char v8; // [rsp+39h] [rbp-60h]
  char *v9; // [rsp+50h] [rbp-49h]
  unsigned __int64 v10; // [rsp+58h] [rbp-41h]
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v12)(__int64, unsigned __int64 *, int); // [rsp+D8h] [rbp+3Fh]
  _QWORD *v13; // [rsp+E8h] [rbp+4Fh]

  memset_0(v7, 0, 0xC0uLL);
  v6[1] = 0LL;
  v12 = MiCrashdumpRemovePte;
  v10 = 0xFFFF800000000000uLL;
  v13 = v6;
  v11 = -1LL;
  v6[0] = a1;
  if ( MiSystemInSingleProcessorMode() )
  {
    v7[0] = 70400;
    MiWalkPageTables((__int64)v7);
  }
  else
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v9 = AnyMultiplexedVm;
    v7[0] = 6;
    if ( KeGetCurrentIrql() == 2 )
    {
      v8 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
    }
    else
    {
      v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v2, v4);
    }
    MiWalkPageTables((__int64)v7);
    LOBYTE(v5) = v8;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  }
}
