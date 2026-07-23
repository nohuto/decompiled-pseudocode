/*
 * XREFs of MiProtectSharedUserPage @ 0x140CFA190
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 */

__int64 __fastcall MiProtectSharedUserPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // si
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  signed __int64 v17; // rax
  unsigned __int8 v19; // [rsp+50h] [rbp+8h]

  v4 = MEMORY[0xFFFFF6FBC0000000];
  if ( (Feature_KernelSharedUserDataAslr__private_featureState & 0x10) == 0 )
  {
    v19 = Feature_KernelSharedUserDataAslr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor,
      Feature_KernelSharedUserDataAslr__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v19,
      3,
      (__int64)&Feature_KernelSharedUserDataAslr__private_descriptor);
  }
  v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  v6 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, a3, a4);
  if ( !v6 )
    MxInstallMoreMemory(4);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v5 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v6, v5, ProtectionPfnCompatible | 0xA0000000);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v12);
  MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v10, 0);
  *(_QWORD *)v6 = ValidPte;
  MiIncreaseUsedPtes(v14, v10, 1u, 6);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v10);
  LOBYTE(v15) = v13;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v15);
  MmWriteableSharedUserData = (__int64)(v6 << 25) >> 16;
  v16 = MiMakeProtectionPfnCompatible(1, 48 * v5 - 0x220000000000LL);
  v17 = MiMakeValidPte(0xFFFFF6FBC0000000uLL, v5, v16 | 0x20000000u);
  MEMORY[0xFFFFF6FBC0000000] = v17;
  if ( v17 >= 0 || (BYTE1(v17) & 1) != BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) )
    MiWriteValidPteNewProtection(
      (__int64 *)0xFFFFF6FBC0000000LL,
      v17 & 0xFFFFFFFFFFFFFEFFuLL | ((BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) & 1 | 0xFF80000000000000uLL) << 8));
  return MiFlushSingleTbEntry(0xFFFFF78000000000uLL, 0LL);
}
