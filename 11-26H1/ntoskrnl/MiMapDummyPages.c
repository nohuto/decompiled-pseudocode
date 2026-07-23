/*
 * XREFs of MiMapDummyPages @ 0x140CF9C50
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiComputeHash64 @ 0x1403DD3F0 (MiComputeHash64.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 */

unsigned __int64 __fastcall MiMapDummyPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  char *AnyMultiplexedVm; // r15
  unsigned int v6; // esi
  void **v7; // r14
  __int64 v8; // rdx
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 result; // rax

  v4 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 3u, a3, a4);
  if ( !v4 )
    MxInstallMoreMemory(6);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v6 = 0;
  v7 = &qword_140E361A0;
  do
  {
    if ( v6 >= 2 )
      v8 = qword_140E361F0;
    else
      v8 = (__int64)*(v7 - 4);
    ValidPte = MiMakeValidPte(v4, v8, v6 < 2 ? 536870913 : -1610612732);
    v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v12);
    MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v10, 0);
    v14 = 0;
    v15 = 0xFFFFF6FB7DBED000uLL;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL )
    {
      v15 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v4 <= 0xFFFFF6FB7DBED7F8uLL )
        v14 = MiSanitizeShadowPxe();
    }
    *(_QWORD *)v4 = ValidPte;
    if ( v14 )
      MiWritePteShadow();
    MiIncreaseUsedPtes(v15, v10, 1u, 6);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v10);
    LOBYTE(v16) = v13;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
    result = (__int64)(v4 << 25) >> 16;
    if ( v6 >= 2 )
    {
      qword_140E361F8 = (__int64)(v4 << 25) >> 16;
    }
    else
    {
      *v7 = (void *)result;
      result = MiComputeHash64((__int64)(v4 << 25) >> 16);
      v7[1] = (void *)result;
    }
    v4 += 8LL;
    ++v6;
    v7 += 7;
  }
  while ( v6 < 3 );
  return result;
}
